
@interface SBContinuousExposeAppToAppModifier : SBTransitionSwitcherModifier {
    bool  _commandTabTransition;
    bool  _continuousExposeConfigurationChangeTransition;
    NSArray * _displayItemsChangingSize;
    SBAppLayout * _fromAppLayout;
    NSDictionary * _fromDisplayItemLayoutAttributesMap;
    long long  _fromInterfaceOrientation;
    SBDisplayItem * _fromTopMostDisplayItem;
    bool  _isTopAffordanceMenuTransition;
    bool  _launchingFromDockTransition;
    bool  _launchingFromSpotlightTransition;
    bool  _morphFromInAppViewTransition;
    NSMutableArray * _pendingDisplayItemSceneUpdates;
    SBAppLayout * _toAppLayout;
    NSDictionary * _toDisplayItemLayoutAttributesMap;
    long long  _toInterfaceOrientation;
    SBDisplayItem * _toTopMostDisplayItem;
}

@property (getter=isCommandTabTransition, nonatomic) bool commandTabTransition;
@property (getter=isContinuousExposeConfigurationChangeTransition, nonatomic) bool continuousExposeConfigurationChangeTransition;
@property (nonatomic, readonly) SBAppLayout *fromAppLayout;
@property (nonatomic, readonly, copy) NSDictionary *fromDisplayItemLayoutAttributesMap;
@property (nonatomic, readonly) long long fromInterfaceOrientation;
@property (nonatomic) bool isTopAffordanceMenuTransition;
@property (getter=isLaunchingFromDockTransition, nonatomic) bool launchingFromDockTransition;
@property (getter=isLaunchingFromSpotlightTransition, nonatomic) bool launchingFromSpotlightTransition;
@property (getter=isMorphFromInAppViewTransition, nonatomic) bool morphFromInAppViewTransition;
@property (nonatomic, readonly) SBAppLayout *toAppLayout;
@property (nonatomic, readonly, copy) NSDictionary *toDisplayItemLayoutAttributesMap;
@property (nonatomic, readonly) long long toInterfaceOrientation;

- (void).cxx_destruct;
- (id)_layoutSettings;
- (id)_topMostDisplayItemInDisplayItemLayoutAttributesMap:(id)arg1;
- (id)animationAttributesForLayoutElement:(id)arg1;
- (bool)asyncRenderingDisabled;
- (double)blurDelayForLayoutRole:(long long)arg1 inAppLayout:(id)arg2;
- (void)didMoveToParentModifier:(id)arg1;
- (id)fromAppLayout;
- (id)fromDisplayItemLayoutAttributesMap;
- (long long)fromInterfaceOrientation;
- (id)handleSceneReadyEvent:(id)arg1;
- (id)initWithTransitionID:(id)arg1 fromAppLayout:(id)arg2 fromInterfaceOrientation:(long long)arg3 toAppLayout:(id)arg4 toInterfaceOrientation:(long long)arg5 fromDisplayItemLayoutAttributesMap:(id)arg6 toDisplayItemLayoutAttributesMap:(id)arg7;
- (bool)isCommandTabTransition;
- (bool)isContinuousExposeConfigurationChangeTransition;
- (bool)isLaunchingFromDockTransition;
- (bool)isLaunchingFromSpotlightTransition;
- (bool)isLayoutRoleBlurred:(long long)arg1 inAppLayout:(id)arg2;
- (bool)isLayoutRoleMatchMovedToScene:(long long)arg1 inAppLayout:(id)arg2;
- (bool)isMorphFromInAppViewTransition;
- (bool)isTopAffordanceMenuTransition;
- (double)opacityForLayoutRole:(long long)arg1 inAppLayout:(id)arg2 atIndex:(unsigned long long)arg3;
- (double)perspectiveAngleForAppLayout:(id)arg1;
- (void)setCommandTabTransition:(bool)arg1;
- (void)setContinuousExposeConfigurationChangeTransition:(bool)arg1;
- (void)setIsTopAffordanceMenuTransition:(bool)arg1;
- (void)setLaunchingFromDockTransition:(bool)arg1;
- (void)setLaunchingFromSpotlightTransition:(bool)arg1;
- (void)setMorphFromInAppViewTransition:(bool)arg1;
- (id)toAppLayout;
- (id)toDisplayItemLayoutAttributesMap;
- (long long)toInterfaceOrientation;
- (id)topMostLayoutElements;
- (id)transitionWillBegin;

@end
