
@protocol SBRoutingSwitcherModifierDelegate <NSObject>

@required

- (SBSwitcherModifier *)fallbackModifierForRoutingModifier:(SBRoutingSwitcherModifier *)arg1;
- (SBSwitcherModifier *)homeScreenModifierForRoutingModifier:(SBRoutingSwitcherModifier *)arg1;
- (SBSwitcherModifier *)routingModifier:(SBRoutingSwitcherModifier *)arg1 animationAttributesModifierForLayoutElement:(id <SBSwitcherLayoutElementProviding>)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })routingModifier:(SBRoutingSwitcherModifier *)arg1 containerViewBoundsForModifier:(SBSwitcherModifier *)arg2;
- (SBSwitcherModifierEvent *)routingModifier:(SBRoutingSwitcherModifier *)arg1 event:(SBSwitcherModifierEvent *)arg2 forModifier:(SBSwitcherModifier *)arg3;
- (NSArray *)routingModifier:(SBRoutingSwitcherModifier *)arg1 filteredAppLayouts:(NSArray *)arg2 forModifier:(SBSwitcherModifier *)arg3;
- (NSArray *)routingModifier:(SBRoutingSwitcherModifier *)arg1 filteredContinuousExposeIdentifiers:(NSArray *)arg2 forModifier:(SBSwitcherModifier *)arg3;
- (SBSwitcherModifier *)routingModifier:(SBRoutingSwitcherModifier *)arg1 modifierForAppLayout:(SBAppLayout *)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })routingModifier:(SBRoutingSwitcherModifier *)arg1 switcherViewBoundsForModifier:(SBSwitcherModifier *)arg2;
- (SBSwitcherModifier *)scrollModifierForRoutingModifier:(SBRoutingSwitcherModifier *)arg1;
- (SBSwitcherModifier *)transactionCompletionOptionsModifierForRoutingModifier:(SBRoutingSwitcherModifier *)arg1;

@optional

- (SBSwitcherShelf *)adjustedShelfForShelf:(SBSwitcherShelf *)arg1 forModifier:(SBSwitcherModifier *)arg2;
- (SBSwitcherShelf *)adjustedShelfForShelf:(SBSwitcherShelf *)arg1 fromModifier:(SBSwitcherModifier *)arg2;
- (NSArray *)routingModifier:(SBRoutingSwitcherModifier *)arg1 topMostLayoutElementsByModifier:(NSMapTable *)arg2;

@end
