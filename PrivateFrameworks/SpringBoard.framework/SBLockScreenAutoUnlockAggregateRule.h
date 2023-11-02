
@interface SBLockScreenAutoUnlockAggregateRule : SBAutoUnlockComposableRule {
    SBSyncController * _syncController;
    SBFUserAuthenticationController * _userAuthenticationController;
}

@property (getter=_syncController, setter=_setSyncController:, nonatomic, retain) SBSyncController *syncController;
@property (nonatomic, readonly) SBFUserAuthenticationController *userAuthenticationController;

- (void).cxx_destruct;
- (id)_initWithUserAuthenticationController:(id)arg1 syncController:(id)arg2;
- (void)_setSyncController:(id)arg1;
- (id)_syncController;
- (id)initWithUserAuthenticationController:(id)arg1;
- (bool)shouldAutoUnlockForSource:(int)arg1;
- (id)userAuthenticationController;

@end
