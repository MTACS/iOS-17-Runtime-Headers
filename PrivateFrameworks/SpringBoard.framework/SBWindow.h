
@interface SBWindow : SBFWindow <SBMainDisplayInterfaceOrientationSource, SBRecycledViewsContainerProviding, SBWindowLayoutStrategyObserving> {
    NSMutableSet * _additionalHiddenReasons;
    SBUICoronaAnimationController * _coronaAnimationController;
    <SBWindowLayoutStrategy> * _layoutStrategy;
    SBRecycledViewsContainer * _recycledViewsContainerView;
    bool  _requestedHiddenValue;
    TRAParticipant * _traitsParticipant;
}

@property (getter=isActive, nonatomic, readonly) bool active;
@property (nonatomic, readonly) long long activeInterfaceOrientation;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <SBWindowLayoutStrategy> *layoutStrategy;
@property (nonatomic, readonly, copy) NSString *orientationSourceDescription;
@property (nonatomic, readonly) double orientationSourceLevel;
@property (nonatomic, readonly) UIView *recycledViewsContainer;
@property (readonly) Class superclass;
@property (nonatomic, readonly) TRAParticipant *traitsParticipant;

+ (id)defaultLayoutStrategy;
+ (bool)sb_autorotates;
+ (bool)sb_disableStatusBarHeightChanges;

- (void).cxx_destruct;
- (void)_addHiddenReason:(id)arg1;
- (void)_didDisableSecureRendering:(id)arg1;
- (void)_removeHiddenReason:(id)arg1;
- (void)_sb_updateAutorotatesFlagAndForceInterfaceOrientationUpdate:(bool)arg1;
- (void)_setTraitsParticipant:(id)arg1;
- (bool)_shouldResizeWithScene;
- (id)_traitsParticipant;
- (void)_updateHidingForSecureRendering:(bool)arg1;
- (void)_updateRealIsHidden;
- (void)_willEnableSecureRendering:(id)arg1;
- (long long)activeInterfaceOrientation;
- (void)dealloc;
- (id)description;
- (void)handleStatusBarChangeFromHeight:(double)arg1 toHeight:(double)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithWindowScene:(id)arg1 layoutStrategy:(id)arg2 role:(id)arg3 debugName:(id)arg4;
- (id)initWithWindowScene:(id)arg1 role:(id)arg2 debugName:(id)arg3;
- (id)initWithWindowScene:(id)arg1 rootViewController:(id)arg2 layoutStrategy:(id)arg3 role:(id)arg4 debugName:(id)arg5;
- (id)initWithWindowScene:(id)arg1 rootViewController:(id)arg2 role:(id)arg3 debugName:(id)arg4;
- (bool)isActive;
- (id)layoutStrategy;
- (void)layoutStrategyFrameOnScreenDidChange:(id)arg1;
- (void)makeKeyAndVisible;
- (void)moveToWindowSceneIfNeeded:(id)arg1;
- (id)orientationSourceDescription;
- (double)orientationSourceLevel;
- (id)recycledViewsContainer;
- (id)sb_coronaAnimationController;
- (void)sb_updateAutorotatesFlag;
- (void)setAlphaAndObeyBecauseIAmTheWindowManager:(double)arg1;
- (void)setAutorotates:(bool)arg1 forceUpdateInterfaceOrientation:(bool)arg2;
- (void)setHidden:(bool)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (id)traitsParticipant;

@end
