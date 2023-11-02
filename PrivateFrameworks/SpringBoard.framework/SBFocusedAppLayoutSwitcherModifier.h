
@interface SBFocusedAppLayoutSwitcherModifier : SBSwitcherModifier {
    SBAppLayout * _focusedAppLayout;
}

- (void).cxx_destruct;
- (id)handleRemovalEvent:(id)arg1;
- (id)handleUpdateFocusedAppLayoutEvent:(id)arg1;
- (id)initWithFocusedAppLayout:(id)arg1;
- (bool)shouldShowBackdropViewAtIndex:(unsigned long long)arg1;
- (id)visibleAppLayouts;

@end
