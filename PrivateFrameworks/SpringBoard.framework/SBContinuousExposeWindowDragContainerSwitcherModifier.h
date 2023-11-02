
@interface SBContinuousExposeWindowDragContainerSwitcherModifier : SBFilteringSwitcherModifier {
    SBAppLayout * _appLayoutContainingAppLayout;
    long long  _blinkCount;
    NSString * _continuousExposeSpringLoadReasonWithAppLayout;
    SBAppLayout * _initialAppLayout;
    SBDisplayItem * _selectedDisplayItem;
    SBAppLayout * _springLoadTargetAppLayout;
    SBContinuousExposeWindowDragContentSwitcherModifier * _windowDragContentSwitcherModifier;
    SBContinuousExposeWindowDragSwitcherModifier * _windowDragModifier;
    long long  _windowDragSpringLoadState;
}

@property (nonatomic, readonly) SBAppLayout *initialAppLayout;
@property (nonatomic, readonly) SBDisplayItem *selectedDisplayItem;
@property (nonatomic, readonly) SBContinuousExposeWindowDragContentSwitcherModifier *windowDragContentSwitcherModifier;
@property (nonatomic, readonly) SBContinuousExposeWindowDragSwitcherModifier *windowDragModifier;

- (void).cxx_destruct;
- (id)_appLayoutContainingDisplayItem:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_boundingBoxForCurrentStage;
- (id)_createInterceptableTransitionRequestForActivatingAppLayout:(id)arg1 withSelectedDisplayItem:(id)arg2;
- (double)_dockProgressForDraggedWindow;
- (id)adjustedContinuousExposeIdentifiersInStripFromPreviousIdentifiersInStrip:(id)arg1;
- (id)animationAttributesForLayoutElement:(id)arg1;
- (id)appLayoutOnStage;
- (id)appLayoutsForContinuousExposeIdentifier:(id)arg1;
- (double)blurDelayForLayoutRole:(long long)arg1 inAppLayout:(id)arg2;
- (double)continuousExposeStripProgress;
- (void)didMoveToParentModifier:(id)arg1;
- (double)dimmingAlphaForLayoutRole:(long long)arg1 inAppLayout:(id)arg2;
- (double)dockProgress;
- (id)handleGestureEvent:(id)arg1;
- (id)handleTapAppLayoutEvent:(id)arg1;
- (id)handleTapOutsideToDismissEvent:(id)arg1;
- (id)handleTimerEvent:(id)arg1;
- (id)handleTransitionEvent:(id)arg1;
- (id)initWithAppLayouts:(id)arg1 initialAppLayout:(id)arg2 selectedDisplayItem:(id)arg3 windowDragContentSwitcherModifier:(id)arg4;
- (id)initialAppLayout;
- (bool)isLayoutRoleBlurred:(long long)arg1 inAppLayout:(id)arg2;
- (bool)isLayoutRoleMatchMovedToScene:(long long)arg1 inAppLayout:(id)arg2;
- (double)opacityForLayoutRole:(long long)arg1 inAppLayout:(id)arg2 atIndex:(unsigned long long)arg3;
- (id)routingModifier:(id)arg1 topMostLayoutElementsByModifier:(id)arg2;
- (id)selectedDisplayItem;
- (id)topMostLayoutElements;
- (bool)wantsDockBehaviorAssertion;
- (bool)wantsSceneResizesHostedContextForAppLayout:(id)arg1;
- (id)windowDragContentSwitcherModifier;
- (id)windowDragModifier;

@end
