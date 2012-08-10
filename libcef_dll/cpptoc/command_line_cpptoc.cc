// Copyright (c) 2012 The Chromium Embedded Framework Authors. All rights
// reserved. Use of this source code is governed by a BSD-style license that
// can be found in the LICENSE file.
//
// ---------------------------------------------------------------------------
//
// This file was generated by the CEF translator tool. If making changes by
// hand only do so within the body of existing method and function
// implementations. See the translator.README.txt file in the tools directory
// for more information.
//

#include "libcef_dll/cpptoc/command_line_cpptoc.h"
#include "libcef_dll/transfer_util.h"


// GLOBAL FUNCTIONS - Body may be edited by hand.

CEF_EXPORT cef_command_line_t* cef_command_line_create() {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  CefRefPtr<CefCommandLine> _retval = CefCommandLine::CreateCommandLine();

  // Return type: refptr_same
  return CefCommandLineCppToC::Wrap(_retval);
}

CEF_EXPORT cef_command_line_t* cef_command_line_get_global() {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  CefRefPtr<CefCommandLine> _retval = CefCommandLine::GetGlobalCommandLine();

  // Return type: refptr_same
  return CefCommandLineCppToC::Wrap(_retval);
}


// MEMBER FUNCTIONS - Body may be edited by hand.

int CEF_CALLBACK command_line_is_valid(struct _cef_command_line_t* self) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return 0;

  // Execute
  bool _retval = CefCommandLineCppToC::Get(self)->IsValid();

  // Return type: bool
  return _retval;
}

int CEF_CALLBACK command_line_is_read_only(struct _cef_command_line_t* self) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return 0;

  // Execute
  bool _retval = CefCommandLineCppToC::Get(self)->IsReadOnly();

  // Return type: bool
  return _retval;
}

struct _cef_command_line_t* CEF_CALLBACK command_line_copy(
    struct _cef_command_line_t* self) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return NULL;

  // Execute
  CefRefPtr<CefCommandLine> _retval = CefCommandLineCppToC::Get(self)->Copy();

  // Return type: refptr_same
  return CefCommandLineCppToC::Wrap(_retval);
}

void CEF_CALLBACK command_line_init_from_argv(struct _cef_command_line_t* self,
    int argc, const char* const* argv) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return;
  // Verify param: argv; type: simple_byaddr
  DCHECK(argv);
  if (!argv)
    return;

  // Execute
  CefCommandLineCppToC::Get(self)->InitFromArgv(
      argc,
      argv);
}

void CEF_CALLBACK command_line_init_from_string(
    struct _cef_command_line_t* self, const cef_string_t* command_line) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return;
  // Verify param: command_line; type: string_byref_const
  DCHECK(command_line);
  if (!command_line)
    return;

  // Execute
  CefCommandLineCppToC::Get(self)->InitFromString(
      CefString(command_line));
}

void CEF_CALLBACK command_line_reset(struct _cef_command_line_t* self) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return;

  // Execute
  CefCommandLineCppToC::Get(self)->Reset();
}

cef_string_userfree_t CEF_CALLBACK command_line_get_command_line_string(
    struct _cef_command_line_t* self) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return NULL;

  // Execute
  CefString _retval = CefCommandLineCppToC::Get(self)->GetCommandLineString();

  // Return type: string
  return _retval.DetachToUserFree();
}

cef_string_userfree_t CEF_CALLBACK command_line_get_program(
    struct _cef_command_line_t* self) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return NULL;

  // Execute
  CefString _retval = CefCommandLineCppToC::Get(self)->GetProgram();

  // Return type: string
  return _retval.DetachToUserFree();
}

void CEF_CALLBACK command_line_set_program(struct _cef_command_line_t* self,
    const cef_string_t* program) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return;
  // Verify param: program; type: string_byref_const
  DCHECK(program);
  if (!program)
    return;

  // Execute
  CefCommandLineCppToC::Get(self)->SetProgram(
      CefString(program));
}

int CEF_CALLBACK command_line_has_switches(struct _cef_command_line_t* self) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return 0;

  // Execute
  bool _retval = CefCommandLineCppToC::Get(self)->HasSwitches();

  // Return type: bool
  return _retval;
}

int CEF_CALLBACK command_line_has_switch(struct _cef_command_line_t* self,
    const cef_string_t* name) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return 0;
  // Verify param: name; type: string_byref_const
  DCHECK(name);
  if (!name)
    return 0;

  // Execute
  bool _retval = CefCommandLineCppToC::Get(self)->HasSwitch(
      CefString(name));

  // Return type: bool
  return _retval;
}

cef_string_userfree_t CEF_CALLBACK command_line_get_switch_value(
    struct _cef_command_line_t* self, const cef_string_t* name) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return NULL;
  // Verify param: name; type: string_byref_const
  DCHECK(name);
  if (!name)
    return NULL;

  // Execute
  CefString _retval = CefCommandLineCppToC::Get(self)->GetSwitchValue(
      CefString(name));

  // Return type: string
  return _retval.DetachToUserFree();
}

void CEF_CALLBACK command_line_get_switches(struct _cef_command_line_t* self,
    cef_string_map_t switches) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return;
  // Verify param: switches; type: string_map_single_byref
  DCHECK(switches);
  if (!switches)
    return;

  // Translate param: switches; type: string_map_single_byref
  std::map<CefString, CefString> switchesMap;
  transfer_string_map_contents(switches, switchesMap);

  // Execute
  CefCommandLineCppToC::Get(self)->GetSwitches(
      switchesMap);

  // Restore param: switches; type: string_map_single_byref
  cef_string_map_clear(switches);
  transfer_string_map_contents(switchesMap, switches);
}

void CEF_CALLBACK command_line_append_switch(struct _cef_command_line_t* self,
    const cef_string_t* name) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return;
  // Verify param: name; type: string_byref_const
  DCHECK(name);
  if (!name)
    return;

  // Execute
  CefCommandLineCppToC::Get(self)->AppendSwitch(
      CefString(name));
}

void CEF_CALLBACK command_line_append_switch_with_value(
    struct _cef_command_line_t* self, const cef_string_t* name,
    const cef_string_t* value) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return;
  // Verify param: name; type: string_byref_const
  DCHECK(name);
  if (!name)
    return;
  // Verify param: value; type: string_byref_const
  DCHECK(value);
  if (!value)
    return;

  // Execute
  CefCommandLineCppToC::Get(self)->AppendSwitchWithValue(
      CefString(name),
      CefString(value));
}

int CEF_CALLBACK command_line_has_arguments(struct _cef_command_line_t* self) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return 0;

  // Execute
  bool _retval = CefCommandLineCppToC::Get(self)->HasArguments();

  // Return type: bool
  return _retval;
}

void CEF_CALLBACK command_line_get_arguments(struct _cef_command_line_t* self,
    cef_string_list_t arguments) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return;
  // Verify param: arguments; type: string_vec_byref
  DCHECK(arguments);
  if (!arguments)
    return;

  // Translate param: arguments; type: string_vec_byref
  std::vector<CefString> argumentsList;
  transfer_string_list_contents(arguments, argumentsList);

  // Execute
  CefCommandLineCppToC::Get(self)->GetArguments(
      argumentsList);

  // Restore param: arguments; type: string_vec_byref
  cef_string_list_clear(arguments);
  transfer_string_list_contents(argumentsList, arguments);
}

void CEF_CALLBACK command_line_append_argument(struct _cef_command_line_t* self,
    const cef_string_t* argument) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return;
  // Verify param: argument; type: string_byref_const
  DCHECK(argument);
  if (!argument)
    return;

  // Execute
  CefCommandLineCppToC::Get(self)->AppendArgument(
      CefString(argument));
}


// CONSTRUCTOR - Do not edit by hand.

CefCommandLineCppToC::CefCommandLineCppToC(CefCommandLine* cls)
    : CefCppToC<CefCommandLineCppToC, CefCommandLine, cef_command_line_t>(cls) {
  struct_.struct_.is_valid = command_line_is_valid;
  struct_.struct_.is_read_only = command_line_is_read_only;
  struct_.struct_.copy = command_line_copy;
  struct_.struct_.init_from_argv = command_line_init_from_argv;
  struct_.struct_.init_from_string = command_line_init_from_string;
  struct_.struct_.reset = command_line_reset;
  struct_.struct_.get_command_line_string =
      command_line_get_command_line_string;
  struct_.struct_.get_program = command_line_get_program;
  struct_.struct_.set_program = command_line_set_program;
  struct_.struct_.has_switches = command_line_has_switches;
  struct_.struct_.has_switch = command_line_has_switch;
  struct_.struct_.get_switch_value = command_line_get_switch_value;
  struct_.struct_.get_switches = command_line_get_switches;
  struct_.struct_.append_switch = command_line_append_switch;
  struct_.struct_.append_switch_with_value =
      command_line_append_switch_with_value;
  struct_.struct_.has_arguments = command_line_has_arguments;
  struct_.struct_.get_arguments = command_line_get_arguments;
  struct_.struct_.append_argument = command_line_append_argument;
}

#ifndef NDEBUG
template<> long CefCppToC<CefCommandLineCppToC, CefCommandLine,
    cef_command_line_t>::DebugObjCt = 0;
#endif

