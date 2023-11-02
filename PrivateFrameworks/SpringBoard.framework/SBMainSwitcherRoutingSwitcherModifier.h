
@interface SBMainSwitcherRoutingSwitcherModifier : SBSwitcherModifier <SBChainableModifierDelegate, SBRoutingSwitcherModifierDelegate> {
    SBSwitcherModifier * _activeSubtree;
    long long  _currentEnvironmentMode;
    SBSwitcherModifier * _currentScrollableSubtree;
    SBSwitcherModifier * _floatingModifierSubtree;
    bool  _floatingSwitcherVisible;
    SBSwitcherModifier * _mainModifierSubtree;
    SBRoutingSwitcherModifier * _routingModifier;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_modifierToHandleLayoutElement:(id)arg1;
- (bool)canPerformKeyboardShortcutAction:(long long)arg1 forBundleIdentifier:(id)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugPotentialChildModifiers;
- (id)fallbackModifierForRoutingModifier:(id)arg1;
- (id)handleGestureEvent:(id)arg1;
- (id)handleTransitionEvent:(id)arg1;
- (id)homeScreenModifierForRoutingModifier:(id)arg1;
- (id)initWithMainModifierSubtree:(id)arg1 floatingModifierSubtree:(id)arg2;
- (id)routingModifier:(id)arg1 animationAttributesModifierForLayoutElement:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })routingModifier:(id)arg1 containerViewBoundsForModifier:(id)arg2;
- (id)routingModifier:(id)arg1 event:(id)arg2 forModifier:(id)arg3;
- (id)routingModifier:(id)arg1 filteredAppLayouts:(id)arg2 forModifier:(id)arg3;
- (id)routingModifier:(id)arg1 filteredContinuousExposeIdentifiers:(id)arg2 forModifier:(id)arg3;
- (id)routingModifier:(id)arg1 modifierForAppLayout:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })routingModifier:(id)arg1 switcherViewBoundsForModifier:(id)arg2;
- (id)scrollModifierForRoutingModifier:(id)arg1;
- (id)transactionCompletionOptionsModifierForRoutingModifier:(id)arg1;

@end
