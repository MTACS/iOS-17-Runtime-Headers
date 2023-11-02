
@interface SBHomeGestureToMixedGridSwitcherSwitcherModifier : SBTransitionSwitcherModifier {
    SBAppLayout * _appLayout;
    struct CGPoint { 
        double x; 
        double y; 
    }  _liftOffTranslation;
    struct CGPoint { 
        double x; 
        double y; 
    }  _liftOffVelocity;
    SBSwitcherModifier<SBMixedGridSwitcherProviding> * _mixedGridModifier;
    long long  _startingEnvironmentMode;
}

- (void).cxx_destruct;
- (id)_appLayoutToScrollTo;
- (id)_dismissForEmptySwitcherResponseName;
- (id)_firstFloatingAppLayout:(id)arg1;
- (id)_newMixedGridModifier;
- (void)_performBlockWhileSimulatingPostPresentationScrollViewContentOffset:(id /* block */)arg1;
- (struct CGPoint { double x1; double x2; })contentOffsetForIndex:(unsigned long long)arg1 alignment:(long long)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForIndex:(unsigned long long)arg1;
- (id)initWithTransitionID:(id)arg1 mixedGridModifier:(id)arg2 selectedAppLayout:(id)arg3 startingEnvironmentMode:(long long)arg4 liftOfVelocity:(struct CGPoint { double x1; double x2; })arg5 liftOffTranslation:(struct CGPoint { double x1; double x2; })arg6 floatingAppLayout:(id)arg7 floatingConfiguration:(long long)arg8;
- (id)responseForProposedChildResponse:(id)arg1 childModifier:(id)arg2 event:(id)arg3;
- (double)scaleForIndex:(unsigned long long)arg1;
- (id)visibleAppLayouts;

@end
