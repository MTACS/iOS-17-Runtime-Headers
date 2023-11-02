
@interface MTCreateTimerIntentHandler : MTTimerIntentHandler <INCreateTimerIntentHandling>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)_checkNowPlayingMediaState:(id /* block */)arg1;
- (void)_createTimerWithIntent:(id)arg1 dryRun:(bool)arg2 completion:(id /* block */)arg3;
- (bool)_isPlayingMediaFromMRPlaybackState:(unsigned int)arg1;
- (id)_responseToCreateTimerIntent:(id)arg1 withCreatedTimer:(id)arg2 error:(id)arg3 dryRun:(bool)arg4;
- (bool)_timer:(id)arg1 conflictsWithRunningTimersInTimers:(id)arg2;
- (void)confirmCreateTimer:(id)arg1 completion:(id /* block */)arg2;
- (void)handleCreateTimer:(id)arg1 completion:(id /* block */)arg2;
- (void)resolveDurationForCreateTimer:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)resolveLabelForCreateTimer:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)resolveTypeForCreateTimer:(id)arg1 withCompletion:(id /* block */)arg2;

@end
