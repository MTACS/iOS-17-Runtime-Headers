
@interface PFAutoBugCaptureBugReporter : NSObject {
    NSObject<OS_dispatch_queue> * _reportQueue;
    SDRDiagnosticReporter * _reporter;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_executeSubmitBugReport:(id)arg1 userInfo:(id /* block */)arg2 withMaximumSubmissionCadence:(double)arg3;
- (id)_lastSubmissionTimeForReport:(id)arg1;
- (id)_processName;
- (void)_reportSignature:(id)arg1 forReport:(id)arg2;
- (void)_scheduleSubmissionOfBugReport:(id)arg1 withUserInfo:(id)arg2;
- (void)_setLastSubmissionTime:(id)arg1 forReport:(id)arg2;
- (void)_submitBugReport:(id)arg1 withUserInfo:(id)arg2;
- (bool)_timeSinceLastSimilarReport:(id)arg1 hasExceededElapsedTimeThreshold:(double)arg2;
- (bool)canSubmitNewReport:(id)arg1 withMinimumElapsedTime:(double)arg2;
- (id)init;
- (void)submitBugReport:(id)arg1 userInfo:(id /* block */)arg2 withMaximumSubmissionCadence:(double)arg3;

@end
