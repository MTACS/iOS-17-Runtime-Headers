
@interface SBSplitDisplayItemSwitcherModifier : SBSwitcherModifier {
    SBDisplayItem * _displayItem;
    bool  _hasInvalidatedAppLayoutsForInsertion;
    bool  _hasInvalidatedAppLayoutsForRemoval;
    SBAppLayout * _overrideAndPromoteChildAppLayout;
    SBSwitcherModifier * _wrappingModifier;
}

@property (nonatomic, readonly) SBDisplayItem *displayItem;
@property (nonatomic) bool hasInvalidatedAppLayoutsForInsertion;
@property (nonatomic) bool hasInvalidatedAppLayoutsForRemoval;
@property (nonatomic, retain) SBAppLayout *overrideAndPromoteChildAppLayout;
@property (nonatomic, readonly) SBSwitcherModifier *wrappingModifier;

- (void).cxx_destruct;
- (void)_performOverrideAndPromoteChildAppLayoutToParent:(id)arg1 withBlock:(id /* block */)arg2;
- (id)adjustedAppLayoutsForAppLayouts:(id)arg1;
- (id)appLayoutContainingAppLayout:(id)arg1;
- (id)appLayoutsToEnsureExistForMainTransitionEvent:(id)arg1;
- (bool)completesWhenChildrenComplete;
- (id)displayItem;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForIndex:(unsigned long long)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForLayoutRole:(long long)arg1 inAppLayout:(id)arg2 withBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (id)handleEvent:(id)arg1;
- (bool)hasInvalidatedAppLayoutsForInsertion;
- (bool)hasInvalidatedAppLayoutsForRemoval;
- (id)initWithDisplayItem:(id)arg1;
- (id)initWithDisplayItem:(id)arg1 wrappingModifier:(id)arg2;
- (bool)isResizeGrabberVisibleForAppLayout:(id)arg1;
- (id)overrideAndPromoteChildAppLayout;
- (id)preferredAppLayoutToReuseAccessoryForAppLayout:(id)arg1 fromAppLayouts:(id)arg2;
- (id)resizeGrabberLayoutAttributesForAppLayout:(id)arg1;
- (void)setHasInvalidatedAppLayoutsForInsertion:(bool)arg1;
- (void)setHasInvalidatedAppLayoutsForRemoval:(bool)arg1;
- (void)setOverrideAndPromoteChildAppLayout:(id)arg1;
- (id)wrappingModifier;

@end
