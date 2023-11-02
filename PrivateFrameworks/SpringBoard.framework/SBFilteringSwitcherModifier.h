
@interface SBFilteringSwitcherModifier : SBSwitcherModifier <SBRoutingSwitcherModifierDelegate> {
    NSArray * _appLayoutsToFilter;
    NSSet * _displayItemsToFilter;
    SBSwitcherModifier * _modifier;
    _SBFilteringPassthroughTargetSwitcherModifier * _passthroughModifier;
    SBRoutingSwitcherModifier * _routingModifier;
}

@property (nonatomic, readonly, copy) NSArray *appLayoutsToFilter;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) SBSwitcherModifier *modifier;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)appLayoutsToFilter;
- (void)didMoveToParentModifier:(id)arg1;
- (id)fallbackModifierForRoutingModifier:(id)arg1;
- (id)homeScreenModifierForRoutingModifier:(id)arg1;
- (id)initWithAppLayouts:(id)arg1 modifier:(id)arg2;
- (id)modifier;
- (id)routingModifier:(id)arg1 animationAttributesModifierForLayoutElement:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })routingModifier:(id)arg1 containerViewBoundsForModifier:(id)arg2;
- (id)routingModifier:(id)arg1 event:(id)arg2 forModifier:(id)arg3;
- (id)routingModifier:(id)arg1 filteredAppLayouts:(id)arg2 forModifier:(id)arg3;
- (id)routingModifier:(id)arg1 filteredContinuousExposeIdentifiers:(id)arg2 forModifier:(id)arg3;
- (id)routingModifier:(id)arg1 modifierForAppLayout:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })routingModifier:(id)arg1 switcherViewBoundsForModifier:(id)arg2;
- (id)scrollModifierForRoutingModifier:(id)arg1;
- (void)setState:(long long)arg1;
- (id)transactionCompletionOptionsModifierForRoutingModifier:(id)arg1;

@end
