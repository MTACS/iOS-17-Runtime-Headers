
@interface MTDeleteTimerIntentHandler : MTTimerIntentHandler <INDeleteTimerIntentHandling>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)_deleteTimer:(id)arg1 multiple:(bool)arg2 dryRun:(bool)arg3 completion:(id /* block */)arg4;
- (id)_responseToDeleteTimerIntent:(id)arg1 withDeletedTimers:(id)arg2 error:(id)arg3 dryRun:(bool)arg4;
- (id)_timerFromIntentTargetTimer:(id)arg1 defaultState:(long long)arg2;
- (void)confirmDeleteTimer:(id)arg1 completion:(id /* block */)arg2;
- (void)handleDeleteTimer:(id)arg1 completion:(id /* block */)arg2;
- (void)resolveDeleteMultipleForDeleteTimer:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)resolveTargetTimerForDeleteTimer:(id)arg1 withCompletion:(id /* block */)arg2;

@end
