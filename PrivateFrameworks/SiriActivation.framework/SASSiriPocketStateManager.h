
@interface SASSiriPocketStateManager : NSObject <CMPocketStateDelegate> {
    long long  _currentPocketState;
    CMPocketStateManager * _pocketStateManager;
}

@property (getter=_currentPocketState, setter=_setCurrentPocketState:, nonatomic) long long currentPocketState;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=_pocketStateManager, setter=_setPocketStateManager:, nonatomic, retain) CMPocketStateManager *pocketStateManager;
@property (readonly) Class superclass;

+ (id)new;
+ (id)sharedManager;

- (void).cxx_destruct;
- (long long)_currentPocketState;
- (id)_init;
- (id)_pocketStateManager;
- (void)_setCurrentPocketState:(long long)arg1;
- (void)_setPocketStateManager:(id)arg1;
- (id)_stringForPocketState:(long long)arg1;
- (void)_updateForPocketState:(long long)arg1;
- (id)init;
- (void)pocketStateManager:(id)arg1 didUpdateState:(long long)arg2;
- (bool)pocketStateShouldPreventVoiceTrigger;
- (bool)pocketStateShouldPreventVoiceTriggerForActivationRequest:(id)arg1;
- (void)queryForPocketStateWithCompletion:(id /* block */)arg1;

@end
