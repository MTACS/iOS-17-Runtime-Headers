
@interface SBSplitDisplayItemCrossblurSwitcherModifier : SBSwitcherModifier {
    long long  _floatingConfiguration;
    SBAppLayout * _fromAppLayout;
    long long  _layoutRole;
    SBAppLayout * _toAppLayout;
    SBSplitDisplayItemSwitcherModifier * _toSplitDisplayItemModifier;
}

@property (nonatomic, readonly) SBAppLayout *fromAppLayout;
@property (nonatomic, readonly) long long layoutRole;
@property (nonatomic, readonly) SBAppLayout *toAppLayout;

- (void).cxx_destruct;
- (id)_previousHomeAffordanceAppLayout;
- (id)appLayoutContainingAppLayout:(id)arg1;
- (id)containerLeafAppLayoutForShelf:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForShelf:(id)arg1;
- (id)fromAppLayout;
- (id)handleEvent:(id)arg1;
- (id)handleTransitionEvent:(id)arg1;
- (id)homeAffordanceLayoutElementToPortalIntoShelf:(id)arg1;
- (id)initWithTransitionID:(id)arg1 fromAppLayout:(id)arg2 toAppLayout:(id)arg3 layoutRole:(long long)arg4;
- (long long)layoutRole;
- (id)toAppLayout;
- (id)topMostLayoutElements;
- (id)visibleHomeAffordanceLayoutElements;

@end
