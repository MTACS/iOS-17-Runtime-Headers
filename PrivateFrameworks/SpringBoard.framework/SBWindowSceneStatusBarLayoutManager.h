
@interface SBWindowSceneStatusBarLayoutManager : NSObject <BSDescriptionProviding> {
    NSMutableSet * _activeLayoutLayers;
    double  _defaultWindowLevel;
    NSMutableDictionary * _edgeInsetsDictionary;
    NSMutableDictionary * _orientationWindowDictionary;
    <BSInvalidatable> * _stateCaptureAssertion;
    NSMutableDictionary * _windowLevelOverrideMap;
    NSMutableOrderedSet * _windowLevelOverrideReasons;
    SBWindowScene * _windowScene;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } statusBarEdgeInsets;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned long long topmostActiveLayoutLayer;

- (void).cxx_destruct;
- (void)_applyEdgeInsetsToStatusBar;
- (void)_updateStatusBarOrientationForTopMostActiveLayer;
- (void)_updateWindowLevel;
- (void)addActiveLayoutLayer:(unsigned long long)arg1;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)initWithWindowScene:(id)arg1;
- (id)orientationWindowForLayoutLayer:(unsigned long long)arg1;
- (void)removeActiveLayoutLayer:(unsigned long long)arg1;
- (void)removeWindowLevelOverrideReason:(id)arg1;
- (void)setDefaultWindowLevel:(double)arg1;
- (void)setOrientationWindow:(id)arg1 forStatusBarLayoutLayer:(unsigned long long)arg2;
- (void)setStatusBarEdgeInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1 forLayoutLayer:(unsigned long long)arg2;
- (void)setWindowLevel:(double)arg1 forOverrideReason:(id)arg2;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })statusBarEdgeInsets;
- (bool)statusBarOrientationShouldFollowWindow:(id)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (unsigned long long)topmostActiveLayoutLayer;

@end
