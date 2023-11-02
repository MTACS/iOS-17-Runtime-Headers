
@interface MTTimerIntentHandler : NSObject {
    <MTTimerManagerIntentSupport> * _timerManager;
    <MTTimerManagerProviding> * _timerManagerProvider;
}

@property (nonatomic, retain) <MTTimerManagerIntentSupport> *timerManager;
@property (nonatomic) <MTTimerManagerProviding> *timerManagerProvider;

- (void).cxx_destruct;
- (id)_alternateTimersForTargetTimerState:(long long)arg1 type:(long long)arg2 inTimers:(id)arg3 allowedTimerStates:(id)arg4;
- (void)_genericallyResolveTargetTimer:(id)arg1 multiple:(bool)arg2 allowedTimerStatesForFollowup:(id)arg3 completion:(id /* block */)arg4;
- (bool)_isDefaultTimer:(id)arg1;
- (void)_matchTimersFromIntentsTimer:(id)arg1 excludeStoppedTimers:(bool)arg2 completion:(id /* block */)arg3;
- (id)_onlyUnnamedTimerInTimers:(id)arg1 forTargetTimer:(id)arg2 allowMultiple:(bool)arg3;
- (id)_timerManager;
- (void)setTimerManager:(id)arg1;
- (void)setTimerManagerProvider:(id)arg1;
- (id)timerManager;
- (id)timerManagerProvider;

@end
