
@interface MTUpdateTimerIntentHandler : MTTimerIntentHandler

- (id)_timerFromIntentTargetTimer:(id)arg1 defaultState:(long long)arg2;
- (void)_updateTimer:(id)arg1 dryRun:(bool)arg2 allowMultiple:(bool)arg3 excludeStoppedTimers:(bool)arg4 filterBlock:(id /* block */)arg5 updateBlock:(id /* block */)arg6 completion:(id /* block */)arg7;
- (void)_updateTimer:(id)arg1 dryRun:(bool)arg2 updateBlock:(id /* block */)arg3 completion:(id /* block */)arg4;

@end
