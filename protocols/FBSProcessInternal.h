
@protocol FBSProcessInternal <FBSProcessIdentity>

@required

- (void)_terminateWithRequest:(FBSProcessTerminationRequest *)arg1 forWatchdog:(FBSProcessWatchdog *)arg2;
- (bool)_watchdog:(FBSProcessWatchdog *)arg1 shouldTerminateWithDeclineReason:(out id*)arg2;
- (FBSProcessTerminationRequest *)_watchdog:(FBSProcessWatchdog *)arg1 terminationRequestForViolatedProvision:(FBSProcessExecutionProvision *)arg2 error:(NSError *)arg3;

@end
