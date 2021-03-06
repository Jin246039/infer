/*
 * Copyright (c) 2016 - present Facebook, Inc.
 * All rights reserved.
 *
 * This source code is licensed under the BSD style license found in the
 * LICENSE file in the root directory of this source tree. An additional grant
 * of patent rights can be found in the PATENTS file in the same directory.
 */

namespace infer_traits {
// all friends of this class and will be translated as type T by infer
// frontend instead of their own type
template <class T>
class TranslateAsType {};
} // namespace infer_traits
