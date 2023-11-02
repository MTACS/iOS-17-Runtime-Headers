
@interface SBContinuousExposeWindowDropSwitcherModifier : SBTransitionSwitcherModifier {
    SBDisplayItem * _selectedDisplayItem;
    SBAppLayout * _toAppLayout;
}

@property (nonatomic, readonly) SBDisplayItem *selectedDisplayItem;
@property (nonatomic, readonly) SBAppLayout *toAppLayout;

- (void).cxx_destruct;
- (id)_appLayoutContainingDisplayItem:(id)arg1;
- (bool)_isLayoutRolePartOfWindowDragInteraction:(long long)arg1 inAppLayout:(id)arg2;
- (id)animationAttributesForLayoutElement:(id)arg1;
- (bool)asyncRenderingDisabled;
- (id)handleSceneReadyEvent:(id)arg1;
- (id)handleTransitionEvent:(id)arg1;
- (id)initWithTransitionID:(id)arg1 selectedDisplayItem:(id)arg2 toAppLayout:(id)arg3 initialAppLayout:(id)arg4;
- (bool)isLayoutRoleMatchMovedToScene:(long long)arg1 inAppLayout:(id)arg2;
- (id)selectedDisplayItem;
- (bool)shouldUseAnchorPointToPinLayoutRolesToSpace:(unsigned long long)arg1;
- (id)toAppLayout;
- (id)transitionDidEnd;

@end
