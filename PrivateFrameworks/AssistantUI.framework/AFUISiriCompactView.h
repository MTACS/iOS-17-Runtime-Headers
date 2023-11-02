
@interface AFUISiriCompactView : UIView <AFUIPasscodeContainerViewDelegate, AFUISiriContent, AFUITouchInputViewDelegate, SUICOrbViewControlling, SiriUIBackgroundBlurViewControllerDelegate, UIGestureRecognizerDelegate> {
    bool  _auxiliaryViewsHidden;
    bool  _blurViewVisible;
    UIView * _blurringAndLockContainer;
    <AFUISiriCompactViewDelegate> * _compactViewDelegate;
    AFUISiriCompactDimmingView * _dimmingBackdropView;
    bool  _dimmingViewVisible;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _dockFrame;
    AFUISiriEyesFreeView * _eyesFreeView;
    UIView * _foregroundContainerView;
    SiriUIBackgroundBlurViewController * _fullScreenBlurViewController;
    bool  _ignoreSiriSessionUpdates;
    bool  _inFluidDismissal;
    bool  _inHideUnlockViewAnimation;
    bool  _inShowUnlockViewAnimation;
    bool  _isAttending;
    bool  _isEyesFree;
    AFUIPasscodeContainerView * _lockContainerView;
    bool  _lockViewHidden;
    UILongPressGestureRecognizer * _longPressRecognizer;
    long long  _mode;
    SUICOrbView * _orbView;
    UIView * _orbViewContainer;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _orbViewContainerFrame;
    UIView * _remoteContentView;
    bool  _remoteContentViewHidden;
    SiriUIContentButton * _reportBugButton;
    bool  _shouldUpdatePowerLevel;
    <AFUISiriContentDelegate> * _siriContentDelegate;
    long long  _siriSessionState;
    UIView * _siriXIndicator;
    AFUITouchInputView * _touchInputView;
    UIView * _voiceActivationMaskView;
}

@property (getter=isBlurViewVisible, nonatomic, readonly) bool blurViewVisible;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isDimmingViewVisible, nonatomic, readonly) bool dimmingViewVisible;
@property (nonatomic, readonly) UIView *foregroundContainerView;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long mode;
@property (nonatomic, retain) UIView *remoteContentView;
@property (getter=shouldRequestStatusBar, nonatomic, readonly) bool requestStatusBar;
@property (nonatomic) long long siriSessionState;
@property (readonly) Class superclass;

+ (void)_animateView:(id)arg1 fromYPosition:(double)arg2 toYPosition:(double)arg3 fade:(long long)arg4 completion:(id /* block */)arg5;

- (void).cxx_destruct;
- (void)_animateLockViewIsAnimatingIn:(bool)arg1 completion:(id /* block */)arg2;
- (void)_constructAndAddBugReportButtonWithImage:(id)arg1;
- (void)_constructAndAddSiriXIndicator;
- (void)_handleTouchEndedForNonAttendingConfiguration;
- (void)_loadReportBugButtonTemplateImageInBackgroundWithCompletion:(id /* block */)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_lockViewFrame;
- (void)_orbButtonHeld:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_orbViewContainerFrame;
- (double)_originXForOrbContainer;
- (void)_playHaptic;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_remoteContentViewFrame;
- (void)_reportBugButtonLongPressed;
- (void)_reportBugButtonTapped;
- (void)_setUpEyesFreePresentation:(long long)arg1;
- (void)_setupBugReportButtonIfNeeded;
- (void)_setupContentViews;
- (void)_setupVoiceActivationMaskView;
- (bool)_shouldShowBugReportButton;
- (struct CGSize { double x1; double x2; })_sizeForOrbView;
- (struct CGSize { double x1; double x2; })_sizeForOrbViewContainer;
- (void)animateOrbViewDismissalWithCompletion:(id /* block */)arg1;
- (void)animateOrbViewToOffWithCompletion:(id /* block */)arg1;
- (void)backgroundBlurViewController:(id)arg1 didSetBlurVisibilityTo:(bool)arg2;
- (double)bugReportDimension;
- (void)dealloc;
- (id)foregroundContainerView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 compactViewDelegate:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 eyesFreeMode:(long long)arg2;
- (bool)isBlurViewVisible;
- (bool)isDimmingViewVisible;
- (void)layoutSubviews;
- (long long)mode;
- (void)passcodeView:(id)arg1 animateShowPasscodeWithCompletionHandler:(id /* block */)arg2;
- (bool)passcodeView:(id)arg1 attemptUnlockWithPassword:(id)arg2;
- (void)passcodeView:(id)arg1 hideLockViewWithResult:(long long)arg2 unlockCompletionHandler:(id /* block */)arg3;
- (void)reduceOrbOpacity:(bool)arg1;
- (id)remoteContentView;
- (void)requestBlurVisible:(bool)arg1 reason:(long long)arg2 fence:(id)arg3;
- (void)setAuxiliaryViewsHidden:(bool)arg1 animated:(bool)arg2;
- (void)setContentViewsAlpha:(double)arg1;
- (void)setDockFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setFullScreenDimmingLayerVisible:(bool)arg1 animated:(bool)arg2;
- (void)setInFluidDismissal:(bool)arg1;
- (void)setInputPowerLevel:(float)arg1;
- (void)setMode:(long long)arg1;
- (void)setOutputPowerLevel:(float)arg1;
- (void)setRemoteContentView:(id)arg1;
- (void)setRequestHandlingStatus:(unsigned long long)arg1;
- (void)setSiriContentDelegate:(id)arg1;
- (void)setSiriSessionState:(long long)arg1;
- (void)setVoiceActivationMaskViewVisible:(bool)arg1;
- (bool)shouldRequestStatusBar;
- (void)showPasscodeUnlockWithStatusText:(id)arg1 subtitle:(id)arg2 completionHandler:(id /* block */)arg3 unlockCompletionHandler:(id /* block */)arg4;
- (long long)siriSessionState;
- (double)siriXIndicatorDimension;
- (void)touchesBeganForInputView:(id)arg1;
- (void)touchesEndedForInputView:(id)arg1;

@end
