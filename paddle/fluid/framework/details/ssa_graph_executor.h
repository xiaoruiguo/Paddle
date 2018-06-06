//   Copyright (c) 2018 PaddlePaddle Authors. All Rights Reserved.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#pragma once

#include <memory>
#include <string>
#include <vector>

#include "paddle/fluid/framework/details/ssa_graph.h"
#include "paddle/fluid/framework/feed_fetch_type.h"

namespace paddle {
namespace framework {
namespace details {
class SSAGraphExecutor {
  DISABLE_COPY_AND_ASSIGN(SSAGraphExecutor);

 public:
  SSAGraphExecutor() {}

  virtual ~SSAGraphExecutor();

  virtual FeedFetchList Run(const std::vector<std::string> &fetch_tensors) = 0;
};
}  // namespace details
}  // namespace framework
}  // namespace paddle
