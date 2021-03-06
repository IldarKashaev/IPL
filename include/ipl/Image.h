// Copyright (c) 2022, Ildar Kashaev. All rights reserved.
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

#ifndef IPL_IMAGE_H_
#define IPL_IMAGE_H_

#include <initializer_list>
#include <vector>

namespace ipl {

class Image {
 public:
  Image(std::initializer_list<int> size, void* data);
  ~Image();

  void* get_data() const;
  const std::vector<int> get_size() const;

 private:
  std::vector<int> size_;
  void* decoded_data_;
};

}  // namespace ipl

#endif  // IPL_IMAGE_H_
