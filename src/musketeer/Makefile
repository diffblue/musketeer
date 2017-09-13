SRC = cycles_visitor.cpp \
      fence_assert.cpp \
      fence_inserter.cpp \
      fence_shared.cpp \
      fence_user_def.cpp \
      fencer.cpp \
      graph_visitor.cpp \
      languages.cpp \
      musketeer_main.cpp \
      musketeer_parse_options.cpp \
      pensieve.cpp \
      propagate_const_function_pointers.cpp \
      # Empty last line

OBJ += ../../$(CPROVER_DIR)/ansi-c/ansi-c$(LIBEXT) \
      ../../$(CPROVER_DIR)/linking/linking$(LIBEXT) \
      ../../$(CPROVER_DIR)/big-int/big-int$(LIBEXT) \
      ../../$(CPROVER_DIR)/goto-programs/goto-programs$(LIBEXT) \
      ../../$(CPROVER_DIR)/goto-symex/goto-symex$(LIBEXT) \
      ../../$(CPROVER_DIR)/assembler/assembler$(LIBEXT) \
      ../../$(CPROVER_DIR)/pointer-analysis/pointer-analysis$(LIBEXT) \
      ../../$(CPROVER_DIR)/analyses/analyses$(LIBEXT) \
      ../../$(CPROVER_DIR)/langapi/langapi$(LIBEXT) \
      ../../$(CPROVER_DIR)/util/util$(LIBEXT) \
      ../../$(CPROVER_DIR)/solvers/solvers$(LIBEXT) \
      ../../$(CPROVER_DIR)/goto-instrument/wmm/weak_memory$(OBJEXT) \
      ../../$(CPROVER_DIR)/goto-instrument/wmm/fence$(OBJEXT) \
      ../../$(CPROVER_DIR)/goto-instrument/wmm/event_graph$(OBJEXT) \
      ../../$(CPROVER_DIR)/goto-instrument/wmm/goto2graph$(OBJEXT) \
      ../../$(CPROVER_DIR)/goto-instrument/wmm/data_dp$(OBJEXT) \
      ../../$(CPROVER_DIR)/goto-instrument/wmm/abstract_event$(OBJEXT) \
      ../../$(CPROVER_DIR)/goto-instrument/wmm/instrumenter_strategies$(OBJEXT) \
      ../../$(CPROVER_DIR)/goto-instrument/wmm/cycle_collection$(OBJEXT) \
      ../../$(CPROVER_DIR)/goto-instrument/wmm/shared_buffers$(OBJEXT) \
      ../../$(CPROVER_DIR)/goto-instrument/wmm/pair_collection$(OBJEXT) \
      ../../$(CPROVER_DIR)/goto-instrument/rw_set$(OBJEXT)

INCLUDES= -I .. -I ../../$(CPROVER_DIR)

LIBS =

CLEANFILES = musketeer$(EXEEXT)

include ../../$(CPROVER_DIR)/config.inc
include ../../$(CPROVER_DIR)/common

all: musketeer$(EXEEXT)

ifneq ($(LIB_GLPK),)
  LIBS += $(LIB_GLPK)
  CP_CXXFLAGS += -DHAVE_GLPK
endif

###############################################################################

musketeer$(EXEEXT): $(OBJ)
	$(LINKBIN)

.PHONY: musketeer-mac-signed

musketeer-mac-signed: musketeer$(EXEEXT)
	codesign -v -s $(OSX_IDENTITY) musketeer$(EXEEXT)
