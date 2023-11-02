
@interface SBWindowSceneStatusBarManager : UIStatusBarManager <BSDescriptionProviding> {
    SBWindowSceneStatusBarAssertionManager * _assertionManager;
    NSMutableDictionary * _globalAvoidanceFrames;
    NSMapTable * _instanceAvoidanceFrames;
    SBWindowSceneStatusBarLayoutManager * _layoutManager;
    NSHashTable * _observers;
    SBStatusBarReusePool * _reusePool;
    UIStatusBar * _statusBar;
    UIStatusBarWindow * _statusBarWindow;
}

@property (nonatomic, readonly) SBWindowSceneStatusBarAssertionManager *assertionManager;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) SBWindowSceneStatusBarLayoutManager *layoutManager;
@property (nonatomic, readonly) SBStatusBarReusePool *reusePool;
@property (nonatomic, readonly) UIStatusBar *statusBar;
@property (getter=isStatusBarEffectivelyHidden, nonatomic, readonly) bool statusBarEffectivelyHidden;
@property (nonatomic) long long statusBarOrientation;
@property (nonatomic, readonly) UIStatusBarWindow *statusBarWindow;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } statusBarWindowFrame;
@property (readonly) Class superclass;

+ (id)windowSceneStatusBarManagerForEmbeddedDisplay;

- (void).cxx_destruct;
- (void)_applyAvoidanceFrameToStatusBar:(id)arg1 withGlobalAvoidanceFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 animationSettings:(id)arg3 reason:(id)arg4 options:(unsigned long long)arg5;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_combineAvoidanceFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 withFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_globalAvoidanceFrame;
- (bool)_isEmbeddedDisplay;
- (id)_transientOverlayPresentationManagerActiveStatusBarStyleRequest;
- (id)assertionManager;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })avoidanceFrameForStatusBar:(id)arg1;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)frontmostStatusBarStyleRequest;
- (id)initWithScene:(id)arg1;
- (bool)isStatusBarEffectivelyHidden;
- (id)layoutManager;
- (id)leadingStatusBarStyleRequest;
- (id)reusePool;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })sb_statusBarFrameForStatusBarHeight:(double)arg1;
- (void)sbf_addObserver:(id)arg1;
- (void)sbf_removeObserver:(id)arg1;
- (void)setAvoidanceFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 reason:(id)arg2 statusBar:(id)arg3 animationSettings:(id)arg4;
- (void)setAvoidanceFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 reason:(id)arg2 statusBar:(id)arg3 animationSettings:(id)arg4 options:(unsigned long long)arg5;
- (void)setStatusBarOrientation:(long long)arg1;
- (id)statusBar;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })statusBarFrame;
- (long long)statusBarOrientation;
- (id)statusBarWindow;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })statusBarWindowFrame;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (id)trailingStatusBarStyleRequest;
- (void)windowSceneDidConnect:(id)arg1;

@end
