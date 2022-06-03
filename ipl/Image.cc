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

#include "ipl/Image.h"

namespace ipl {

Image::Image(std::initializer_list<int> size, void* data,
             const std::vector<char>& encoded_data)
    : size_(size), decoded_data_(data), encoded_data_(encoded_data) {}

Image::~Image() {}

}  // namespace ipl
