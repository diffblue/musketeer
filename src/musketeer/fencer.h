/*******************************************************************\

Module: Fence inference

Author: Vincent Nimal

\*******************************************************************/

/// \file
/// Fence inference

#ifndef CPROVER_MUSKETEER_FENCER_H
#define CPROVER_MUSKETEER_FENCER_H

#include <goto-instrument/wmm/wmm.h>
#include <goto-instrument/wmm/weak_memory.h>

#include "infer_mode.h"

class message_handlert;
class value_setst;
class goto_modelt;

void fence_weak_memory(
  memory_modelt model,
  value_setst &,
  goto_modelt &,
  bool SCC,
  instrumentation_strategyt event_strategy,
  unsigned unwinding_bound,
  bool no_cfg_kill,
  bool no_dependencies,
  loop_strategyt duplicate_body,
  unsigned max_var,
  unsigned max_po_trans,
  bool render_po,
  bool render_file,
  bool render_function,
  bool cav11_option,
  bool hide_internals,
  bool print_graph,
  infer_modet mode,
  message_handlert &,
  bool ignore_arrays);

#endif // CPROVER_MUSKETEER_FENCER_H
