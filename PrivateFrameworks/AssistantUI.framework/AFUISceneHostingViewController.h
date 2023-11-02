
@interface AFUISceneHostingViewController : UIViewController <AFUISceneControllerDelegate> {
    AFUISceneConfiguration * _configuration;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _currentFrame;
    long long  _currentOrientation;
    long long  _deferralMode;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _effectiveSafeAreaInsets;
    bool  _inFluidDismissal;
    bool  _pauseDeferrals;
    <BSInvalidatable> * _predicateInvalidationHandler;
    <UIScenePresenter> * _presentation;
    bool  _safeAreaInsetsAreSuspended;
    FBScene * _scene;
    AFUISceneController * _sceneController;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _suspendedSafeAreaInsets;
    UIView * _windowSceneHostingView;
}

@property (nonatomic, readonly) AFUISceneConfiguration *configuration;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } currentFrame;
@property (nonatomic) long long currentOrientation;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) long long deferralMode;
@property (readonly, copy) NSString *description;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } effectiveSafeAreaInsets;
@property (readonly) unsigned long long hash;
@property (getter=isInFluidDismissal, nonatomic) bool inFluidDismissal;
@property (nonatomic) bool pauseDeferrals;
@property (nonatomic, retain) <BSInvalidatable> *predicateInvalidationHandler;
@property (nonatomic, retain) <UIScenePresenter> *presentation;
@property (nonatomic) bool safeAreaInsetsAreSuspended;
@property (nonatomic, retain) FBScene *scene;
@property (nonatomic, retain) AFUISceneController *sceneController;
@property (readonly) Class superclass;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } suspendedSafeAreaInsets;
@property (nonatomic, retain) UIView *windowSceneHostingView;

- (void).cxx_destruct;
- (void)_audioCategoriesDisablingVolumeHUDDidChangeTo:(id)arg1;
- (void)_commonInit;
- (void)_handleInvalidationForReason:(unsigned long long)arg1 explanation:(id)arg2;
- (void)_handleSceneDidActivateWithIdentifier:(id)arg1;
- (bool)_hasScene;
- (void)_registerForAmbientPresentationTraitChange;
- (bool)_shouldDeferHIDEventsForMode;
- (void)_transitionContentsWithView:(id)arg1 forContentState:(long long)arg2;
- (void)_updateDeferralChainWithWindow:(id)arg1;
- (void)_updateSceneSettingsForAmbient;
- (void)_updateSceneSettingsToSize:(struct CGSize { double x1; double x2; })arg1 interfaceOrientation:(long long)arg2 withAnimationSettings:(id)arg3 animationFence:(id)arg4;
- (void)_updateSceneUIApplicationSceneSettingsWithBlock:(id /* block */)arg1;
- (id)configuration;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })currentFrame;
- (long long)currentOrientation;
- (void)deactivateScene;
- (long long)deferralMode;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })effectiveSafeAreaInsets;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)invalidateAndPauseDeferringHIDEvents;
- (void)invalidateSceneForReason:(unsigned long long)arg1 explanation:(id)arg2;
- (bool)isDeferringHIDEvents;
- (bool)isHostingScene;
- (bool)isInFluidDismissal;
- (bool)isSceneActive;
- (bool)pauseDeferrals;
- (id)predicateInvalidationHandler;
- (id)presentation;
- (void)reactivateScene;
- (bool)safeAreaInsetsAreSuspended;
- (id)scene;
- (id)sceneConfigurationForDelegate;
- (id)sceneController;
- (void)sceneController:(id)arg1 sceneContentStateDidChange:(id)arg2;
- (void)sceneController:(id)arg1 sceneDidUpdateClientSettings:(id)arg2;
- (void)sceneController:(id)arg1 sceneWasInvalidated:(id)arg2 forReason:(unsigned long long)arg3;
- (void)setCurrentFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setCurrentOrientation:(long long)arg1;
- (void)setEffectiveSafeAreaInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setInFluidDismissal:(bool)arg1;
- (void)setPauseDeferrals:(bool)arg1;
- (void)setPredicateInvalidationHandler:(id)arg1;
- (void)setPresentation:(id)arg1;
- (void)setSafeAreaInsetsAreSuspended:(bool)arg1;
- (void)setScene:(id)arg1;
- (void)setSceneController:(id)arg1;
- (void)setSuspendedSafeAreaInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setWindowSceneHostingView:(id)arg1;
- (void)startDeferringHIDEventsIfNeeded;
- (void)startHostingSceneForConfiguration:(id)arg1 withCompletionBlock:(id /* block */)arg2;
- (void)stopHostingScene;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })suspendedSafeAreaInsets;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateRemoteSceneWithFrontMostAppInterfaceOrientation:(long long)arg1;
- (void)updateSceneDeactivationReasonMask:(unsigned long long)arg1;
- (void)updateSceneWithConfiguration:(id)arg1;
- (void)viewDidMoveToWindow:(id)arg1 shouldAppearOrDisappear:(bool)arg2;
- (void)viewSafeAreaInsetsDidChange;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;
- (id)windowSceneHostingView;

@end
