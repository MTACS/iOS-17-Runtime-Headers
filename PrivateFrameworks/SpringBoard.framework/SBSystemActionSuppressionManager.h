
@interface SBSystemActionSuppressionManager : NSObject <BLSBacklightStateObserving, CMPocketStateDelegate, SBSystemActionDataSourceObserver> {
    NSHashTable * _observers;
    CMPocketStateManager * _pocketStateManager;
    SBSystemActionSuppressionManagerState * _state;
    SBSystemActionSuppressionManagerStateReducer * _stateReducer;
    bool  _subscribedToViewObstructionEvents;
    CMSuppressionManager * _suppressionManager;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_didReduceState:(id)arg1;
- (void)_queryPocketState;
- (void)_subscribeToViewObstructionEvents;
- (void)_unsubscribeFromViewObstructionEvents;
- (void)_updateViewObstructionSubscription;
- (void)backlight:(id)arg1 didChangeAlwaysOnEnabled:(bool)arg2;
- (void)backlight:(id)arg1 didCompleteUpdateToState:(long long)arg2 forEvent:(id)arg3;
- (void)pocketStateManager:(id)arg1 didUpdateState:(long long)arg2;
- (void)systemActionDataSource:(id)arg1 didUpdateSelectedAction:(id)arg2;

@end
