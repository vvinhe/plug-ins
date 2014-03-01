
//
// $(shortChipFamily) led blink sample (retargetted to $(traceDestination)).
//
// In debug configurations, demonstrate how to print a greeting message
// on the standard output. In release configurations the message is
// simply discarded. By default the trace messages are forwarded to the
// $(traceDestination) output, but can be rerouted via any device or completely
// suppressed by changing the definitions in misc/include/trace_impl.h.
//
// Then demonstrates how to blink a led with 1Hz, using a
// continuous loop and SysTick delays.
//
// On DEBUG, the uptime in seconds is also displayed on the standard output.
//
