
@interface _UIRemoteInputViewHostWindow : UIAutoRotatingWindow {
    <_UIRemoteInputViewHostWindowDelegate> * _hostWindowDelegate;
}

@property (nonatomic) <_UIRemoteInputViewHostWindowDelegate> *hostWindowDelegate;

+ (bool)_isSecure;

- (void).cxx_destruct;
- (double)_adjustedWindowLevelFromLevel:(double)arg1;
- (bool)_alwaysGetsContexts;
- (void)_didChangeKeyplaneWithContext:(id)arg1;
- (bool)_isHostedInAnotherProcess;
- (bool)_isRemoteInputHostWindow;
- (bool)_isWindowServerHostingManaged;
- (long long)_orientationForRootTransform;
- (long long)_orientationForSceneTransform;
- (long long)_orientationForViewTransform;
- (bool)_usesWindowServerHitTesting;
- (bool)_wantsSceneAssociation;
- (bool)canBecomeKeyWindow;
- (id)firstResponder;
- (id)hostWindowDelegate;
- (bool)inhibitSetupOrientation;
- (id)initWithWindowScene:(id)arg1;
- (bool)isInternalWindow;
- (void)setHostWindowDelegate:(id)arg1;

@end
