
@interface MTResetTimerIntentHandler : MTUpdateTimerIntentHandler <INResetTimerIntentHandling>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)_handleResetTimer:(id)arg1 dryRun:(bool)arg2 completion:(id /* block */)arg3;
- (id)_responseToResetTimerIntent:(id)arg1 withResetTimers:(id)arg2 error:(id)arg3 dryRun:(bool)arg4;
- (void)confirmResetTimer:(id)arg1 completion:(id /* block */)arg2;
- (void)handleResetTimer:(id)arg1 completion:(id /* block */)arg2;
- (void)resolveTargetTimerForResetTimer:(id)arg1 withCompletion:(id /* block */)arg2;

@end
