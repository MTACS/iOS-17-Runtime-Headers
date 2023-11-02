
@interface MTPauseResumeTimerIntentHandler : MTUpdateTimerIntentHandler <INPauseTimerIntentHandling, INResumeTimerIntentHandling>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)_handlePauseTimer:(id)arg1 dryRun:(bool)arg2 completion:(id /* block */)arg3;
- (void)_handleResumeTimer:(id)arg1 dryRun:(bool)arg2 completion:(id /* block */)arg3;
- (id)_responseToPauseTimerIntent:(id)arg1 withPausedTimers:(id)arg2 error:(id)arg3 dryRun:(bool)arg4;
- (id)_responseToResumeTimerIntent:(id)arg1 withResumedTimers:(id)arg2 error:(id)arg3 dryRun:(bool)arg4;
- (void)confirmPauseTimer:(id)arg1 completion:(id /* block */)arg2;
- (void)confirmResumeTimer:(id)arg1 completion:(id /* block */)arg2;
- (void)handlePauseTimer:(id)arg1 completion:(id /* block */)arg2;
- (void)handleResumeTimer:(id)arg1 completion:(id /* block */)arg2;
- (void)resolvePauseMultipleForPauseTimer:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)resolveResumeMultipleForResumeTimer:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)resolveTargetTimerForPauseTimer:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)resolveTargetTimerForResumeTimer:(id)arg1 withCompletion:(id /* block */)arg2;

@end
