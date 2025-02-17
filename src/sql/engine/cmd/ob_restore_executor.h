/**
 * Copyright (c) 2021 OceanBase
 * OceanBase CE is licensed under Mulan PubL v2.
 * You can use this software according to the terms and conditions of the Mulan PubL v2.
 * You may obtain a copy of Mulan PubL v2 at:
 *          http://license.coscl.org.cn/MulanPubL-2.0
 * THIS SOFTWARE IS PROVIDED ON AN "AS IS" BASIS, WITHOUT WARRANTIES OF ANY KIND,
 * EITHER EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO NON-INFRINGEMENT,
 * MERCHANTABILITY OR FIT FOR A PARTICULAR PURPOSE.
 * See the Mulan PubL v2 for more details.
 */

#ifndef OCEANBASE_SQL_OB_RESTORE_EXECUTOR_
#define OCEANBASE_SQL_OB_RESTORE_EXECUTOR_

namespace oceanbase {
namespace sql {
class ObExecContext;
class ObRestoreTenantStmt;
class ObPhysicalRestoreTenantStmt;

class ObRestoreTenantExecutor {
  public:
  ObRestoreTenantExecutor();
  virtual ~ObRestoreTenantExecutor();
  int execute(ObExecContext& ctx, ObRestoreTenantStmt& stmt);
};

class ObPhysicalRestoreTenantExecutor {
  public:
  ObPhysicalRestoreTenantExecutor();
  virtual ~ObPhysicalRestoreTenantExecutor();
  int execute(ObExecContext& ctx, ObPhysicalRestoreTenantStmt& stmt);
};
}  // end namespace sql
}  // end namespace oceanbase

#endif  // OCEANBASE_SQL_OB_RESTORE_EXECUTOR_
