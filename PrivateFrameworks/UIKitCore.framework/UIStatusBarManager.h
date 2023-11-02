
@interface UIStatusBarManager : NSObject <_UISceneComponentProviding> {
    id /* block */  _debugMenuHandler;
    bool  _inStatusBarFadeAnimation;
    bool  _overriddingStatusBarHidden;
    double  _statusBarAlpha;
    bool  _statusBarHidden;
    NSDictionary * _statusBarPartStyles;
    long long  _statusBarResolvedStyle;
    long long  _statusBarStyle;
    UIWindowScene * _windowScene;
}

@property (getter=_isOverridingStatusBarHidden, setter=_setOverridingStatusBarHidden:, nonatomic) bool _overriddingStatusBarHidden;
@property (getter=_scene, setter=_setScene:, nonatomic) UIScene *_scene;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } _statusBarFrameIgnoringVisibility;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, copy) id /* block */ debugMenuHandler;
@property (nonatomic, readonly) double defaultStatusBarHeight;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isInStatusBarFadeAnimation, nonatomic, readonly) bool inStatusBarFadeAnimation;
@property (nonatomic, readonly) double statusBarAlpha;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } statusBarFrame;
@property (nonatomic, readonly) double statusBarHeight;
@property (getter=isStatusBarHidden, nonatomic, readonly) bool statusBarHidden;
@property (nonatomic, readonly) NSDictionary *statusBarPartStyles;
@property (nonatomic, readonly) long long statusBarResolvedStyle;
@property (nonatomic, readonly) long long statusBarStyle;
@property (readonly) Class superclass;
@property (nonatomic, retain) UIWindowScene *windowScene;

// Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore

+ (id)_implicitStatusBarAnimationParametersWithClass:(Class)arg1;

- (void).cxx_destruct;
- (struct CGPoint { double x1; double x2; })_adjustedLocationForXPosition:(double)arg1;
- (void)_handleScrollToTopAtXPosition:(double)arg1;
- (bool)_isOverridingStatusBarHidden;
- (id)_scene;
- (void)_setOverridingStatusBarHidden:(bool)arg1;
- (void)_setOverridingStatusBarHidden:(bool)arg1 animationParameters:(id)arg2;
- (void)_setScene:(id)arg1;
- (id)_settingsDiffActionsForScene:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_statusBarFrameIgnoringVisibility;
- (bool)_updateAlpha;
- (id /* block */)_updateStatusBarAppearanceWithClientSettings:(id)arg1 transitionContext:(id)arg2 animationParameters:(id)arg3;
- (bool)_updateStyleForWindow:(id)arg1 animationParameters:(id*)arg2;
- (bool)_updateVisibilityForWindow:(id)arg1 targetOrientation:(long long)arg2 animationParameters:(id*)arg3;
- (void)_visibilityChangedWithOriginalOrientation:(long long)arg1 targetOrientation:(long long)arg2 animationParameters:(id)arg3;
- (id)createLocalStatusBar;
- (id /* block */)debugMenuHandler;
- (double)defaultStatusBarHeight;
- (double)defaultStatusBarHeightInOrientation:(long long)arg1;
- (void)handleTapAction:(id)arg1;
- (id)initWithScene:(id)arg1;
- (bool)isInStatusBarFadeAnimation;
- (bool)isStatusBarHidden;
- (void)setDebugMenuHandler:(id /* block */)arg1;
- (void)setWindowScene:(id)arg1;
- (double)statusBarAlpha;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })statusBarFrame;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })statusBarFrameForStatusBarHeight:(double)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })statusBarFrameForStatusBarHeight:(double)arg1 inOrientation:(long long)arg2;
- (double)statusBarHeight;
- (bool)statusBarHidden;
- (id)statusBarPartStyles;
- (long long)statusBarResolvedStyle;
- (long long)statusBarStyle;
- (void)updateStatusBarAppearance;
- (void)updateStatusBarAppearanceWithAnimationParameters:(id)arg1;
- (id /* block */)updateStatusBarAppearanceWithClientSettings:(id)arg1 transitionContext:(id)arg2;
- (id)windowScene;

// Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation

- (void)sbf_addObserver:(id)arg1;
- (void)sbf_removeObserver:(id)arg1;

@end
