/*
 * Copyright 2014, The Android Open Source Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef ABCC_LLVM_35_H
#define ABCC_LLVM_35_H

#define ARM_BASE_CFLAGS         "-float-abi=soft"
#define X86_BASE_CFLAGS         "-disable-fp-elim -force-align-stack -mattr=-ssse3,-sse4.1,-sse4.2,-sse4a,-popcnt -x86-force-gv-stack-cookie"

#define OPTION_FUNCTION_SECTION "-function-sections"

#endif
