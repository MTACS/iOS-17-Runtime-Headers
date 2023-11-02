
@interface _UIHostedWindow : UIWindow {
    NSString * __hostBundleIdentifier;
    UIColor * __hostTintColor;
    bool  __hostViewUnderlapsStatusBar;
    <_UIHostedWindowDelegate> * __hostedWindowDelegate;
    struct { 
        unsigned int val[8]; 
    }  _hostAuditToken;
    bool  _hostSupportsStrictTouchVerification;
    long long  _hostTintAdjustmentMode;
    UITraitCollection * _hostTraitCollection;
    bool  _wantsTraitPropagation;
}

@property (setter=_setHostTintAdjustmentMode:, nonatomic) long long _hostTintAdjustmentMode;
@property (setter=_setHostTintColor:, nonatomic, retain) UIColor *_hostTintColor;
@property (setter=_setHostTraitCollection:, nonatomic, retain) UITraitCollection *_hostTraitCollection;
@property (nonatomic) <_UIHostedWindowDelegate> *_hostedWindowDelegate;
@property (setter=_setWantsTraitPropagation:, nonatomic) bool _wantsTraitPropagation;
@property (nonatomic, readonly) _UIHostedWindowHostingHandle *hostingHandle;

- (void).cxx_destruct;
- (bool)__hostViewUnderlapsStatusBar;
- (void)__setHostViewUnderlapsStatusBar:(bool)arg1;
- (bool)_allowsLinkPreviewInteractionInViewServices;
- (bool)_canPromoteFromKeyWindowStack;
- (void)_configureContextOptions:(id)arg1;
- (long long)_defaultTintAdjustmentMode;
- (void)_didCreateRootPresentationController;
- (void)_didMoveFromScreen:(id)arg1 toScreen:(id)arg2;
- (bool)_extendsScreenSceneLifetime;
- (long long)_hostTintAdjustmentMode;
- (id)_hostTintColor;
- (id)_hostTraitCollection;
- (id)_hostedWindowDelegate;
- (bool)_isWindowServerHostingManaged;
- (bool)_needsShakesWhenInactive;
- (id)_normalInheritedTintColor;
- (long long)_orientationForRootTransform;
- (long long)_orientationForSceneTransform;
- (long long)_orientationForViewTransform;
- (bool)_preventsRootPresentationController;
- (void)_registerScrollToTopView:(id)arg1;
- (void)_setFirstResponder:(id)arg1;
- (void)_setHostTintAdjustmentMode:(long long)arg1;
- (void)_setHostTintColor:(id)arg1;
- (void)_setHostTraitCollection:(id)arg1;
- (void)_setWantsTraitPropagation:(bool)arg1;
- (bool)_shouldPropagateTraitCollectionChanges;
- (double)_systemReferenceAngle;
- (unsigned long long)_systemReferenceAngleMode;
- (id)_systemReferenceAngleProvider;
- (id)_traitCollectionForSize:(struct CGSize { double x1; double x2; })arg1 parentCollection:(id)arg2;
- (void)_unregisterScrollToTopView:(id)arg1;
- (void)_updateStrictTouchVerificationIfNecessary;
- (void)_updateWindowTraitsAndNotify:(bool)arg1;
- (bool)_updatesSafeAreaInsetsOnRead;
- (bool)_usesWindowServerHitTesting;
- (bool)_wantsTraitPropagation;
- (unsigned int)contextID;
- (void)dealloc;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)hostingHandle;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)set_hostedWindowDelegate:(id)arg1;

@end
