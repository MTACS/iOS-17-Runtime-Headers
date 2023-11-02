
@interface SBHomeGesturePanGestureRecognizer : SBScreenEdgePanGestureRecognizer <PTSettingsKeyObserver, SBGestureRecognizerPanGestureProviding, SBGestureRecognizerTouchHistoryProviding> {
    SBHomeGestureSettings * _homeGestureSettings;
    bool  _installedAsSystemGesture;
    <SBHomeGesturePanGestureRecognizerInterfaceDelegate> * _interfaceDelegate;
    SBFluidSwitcherGestureExclusionTrapezoid * _landscapeExclusionTrapezoid;
    SBFluidSwitcherGestureExclusionTrapezoid * _portraitExclusionTrapezoid;
    bool  _preventHorizontalSwipesOutsideTrapezoid;
    SBTouchHistory * _touchHistory;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) SBHomeGestureSettings *homeGestureSettings;
@property (nonatomic) bool installedAsSystemGesture;
@property (nonatomic) <SBHomeGesturePanGestureRecognizerInterfaceDelegate> *interfaceDelegate;
@property (nonatomic, retain) SBFluidSwitcherGestureExclusionTrapezoid *landscapeExclusionTrapezoid;
@property (nonatomic, retain) SBFluidSwitcherGestureExclusionTrapezoid *portraitExclusionTrapezoid;
@property (nonatomic) bool preventHorizontalSwipesOutsideTrapezoid;
@property (readonly) Class superclass;
@property (nonatomic, retain) SBTouchHistory *touchHistory;
@property (nonatomic, readonly) UIView *viewForTouchHistory;

+ (id)homeGesturePanGestureRecognizerWithTarget:(id)arg1 action:(SEL)arg2;

- (void).cxx_destruct;
- (void)_SBLogTouchesWithMethodName:(id)arg1 withMethodName:(id)arg2;
- (id)_currentExclusionShapeForEdge:(unsigned long long)arg1;
- (id)_currentKeyboardExclusionCompositeShape;
- (bool)_isOutsideOfExclusionTrapezoid;
- (void)_setUpExclusionTrapezoids;
- (bool)_shouldBegin;
- (bool)_shouldBlockHomeGestureForKeyboardInputMode:(id)arg1;
- (long long)_touchInterfaceOrientation;
- (void)_updateHomeGestureParameters;
- (double)averageTouchPathAngleOverTimeDuration:(double)arg1;
- (struct CGPoint { double x1; double x2; })averageTouchVelocityOverTimeDuration:(double)arg1;
- (void)conformsToSBGestureRecognizerTouchHistoryProviding;
- (id)homeGestureSettings;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2 type:(long long)arg3 options:(unsigned long long)arg4;
- (bool)installedAsSystemGesture;
- (id)interfaceDelegate;
- (id)landscapeExclusionTrapezoid;
- (double)peakSpeed;
- (id)portraitExclusionTrapezoid;
- (bool)preventHorizontalSwipesOutsideTrapezoid;
- (void)reset;
- (void)sb_commonInitHomeGesturePanGestureRecognizer;
- (void)setHomeGestureSettings:(id)arg1;
- (void)setInstalledAsSystemGesture:(bool)arg1;
- (void)setInterfaceDelegate:(id)arg1;
- (void)setLandscapeExclusionTrapezoid:(id)arg1;
- (void)setPortraitExclusionTrapezoid:(id)arg1;
- (void)setPreventHorizontalSwipesOutsideTrapezoid:(bool)arg1;
- (void)setTouchHistory:(id)arg1;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (id)touchHistory;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (id)viewForTouchHistory;

@end
