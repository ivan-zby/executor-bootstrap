#include <cctest/cctest.h>
#include "executor/executor.h"
#include "executor_id.h"
#include "mcl/log.h"

FIXTURE(ExecutorTest) {
	BEFORE {
		MCL_INFO("TEST SETUP");
	}

	AFTER{
		MCL_INFO("TEST TEARDOWN");
	}

	TEST("should get executor name") {
		MCL_DBG("TEST RUNING...");
		ASSERT_EQ(0, executor_get_id());
		MCL_SUCC("TEST SUCCESS!");
	}
};
