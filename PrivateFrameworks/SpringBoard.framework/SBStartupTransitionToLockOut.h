
@interface SBStartupTransitionToLockOut : SBBaseStartupTransition {
    SBFUserAuthenticationController * _authController;
    SBLockScreenManager * _lockScreenManager;
}

@property (nonatomic, readonly) SBLockScreenManager *lockScreenManager;

- (void).cxx_destruct;
- (id)initWithDestination:(unsigned long long)arg1 context:(id)arg2;
- (id)lockScreenManager;
- (void)performTransitionWithCompletionBlock:(id /* block */)arg1;
- (id)suggestedLockAnimationForTransitionRequest:(id)arg1;

@end
