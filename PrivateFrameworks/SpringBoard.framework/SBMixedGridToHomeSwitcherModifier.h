
@interface SBMixedGridToHomeSwitcherModifier : SBTransitionSwitcherModifier {
    long long  _direction;
    SBSwitcherModifier<SBMixedGridSwitcherProviding> * _mixedGridModifier;
}

- (void).cxx_destruct;
- (id)_newMixedGridModifier;
- (struct SBSwitcherAsyncRenderingAttributes { bool x1; bool x2; })asyncRenderingAttributesForAppLayout:(id)arg1;
- (struct CGPoint { double x1; double x2; })contentOffsetForIndex:(unsigned long long)arg1 alignment:(long long)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForIndex:(unsigned long long)arg1;
- (id)initWithTransitionID:(id)arg1 direction:(long long)arg2 mixedGridModifier:(id)arg3;
- (id)topMostLayoutElements;
- (id)transitionWillBegin;

@end
