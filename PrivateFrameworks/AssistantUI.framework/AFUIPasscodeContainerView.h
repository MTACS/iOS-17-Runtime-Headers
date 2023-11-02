
@interface AFUIPasscodeContainerView : UIView <SBUIPasscodeLockViewDelegate> {
    _UIBackdropView * _backdropView;
    <AFUIPasscodeContainerViewDelegate> * _delegate;
    Class  _factoryClass;
    UIView<SBUIPasscodeLockView> * _lockView;
    long long  _mode;
    AFUIPasscodeBlurView * _passcodeBlurView;
    unsigned long long  _unlockAttemptCount;
    id /* block */  _unlockCompletion;
}

@property (nonatomic) _UIBackdropView *backdropView;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <AFUIPasscodeContainerViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIView<SBUIPasscodeLockView> *lockView;
@property (readonly) Class superclass;
@property (nonatomic) unsigned long long unlockAttemptCount;
@property (nonatomic, copy) id /* block */ unlockCompletion;

+ (long long)maxUnlockAttempts;

- (void).cxx_destruct;
- (id)_lockViewLegibilityProvider;
- (id)backdropView;
- (void)cancelShowingPasscodeUnlock;
- (void)cleanupWithResult:(long long)arg1;
- (id)delegate;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 backdropView:(id)arg2 mode:(long long)arg3 passcodeViewFactoryClass:(Class)arg4;
- (id)lockView;
- (void)passcodeLockViewCancelButtonPressed:(id)arg1;
- (void)passcodeLockViewPasscodeEntered:(id)arg1;
- (void)passcodeLockViewPasscodeEnteredViaMesa:(id)arg1;
- (void)setBackdropView:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setLockView:(id)arg1;
- (void)setUnlockAttemptCount:(unsigned long long)arg1;
- (void)setUnlockCompletion:(id /* block */)arg1;
- (void)showPasscodeUnlockWithStatusText:(id)arg1 subtitle:(id)arg2 completionHandler:(id /* block */)arg3 unlockCompletionHandler:(id /* block */)arg4;
- (unsigned long long)unlockAttemptCount;
- (id /* block */)unlockCompletion;

@end
