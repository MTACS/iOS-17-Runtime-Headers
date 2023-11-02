
@interface SBRouteToMixedGridSwitcherModifier : SBTransitionSwitcherModifier {
    bool  _isTransitioningOutOfAppSwitcher;
    SBSwitcherModifier<SBMixedGridSwitcherProviding> * _mixedGridModifier;
}

@property (nonatomic) bool reversesFloatingCardDirection;

- (void).cxx_destruct;
- (id)adjustedAppLayoutsForAppLayouts:(id)arg1;
- (id)appLayoutsToCacheSnapshots;
- (double)contentPageViewScaleForAppLayout:(id)arg1 withScale:(double)arg2;
- (id)handleTransitionEvent:(id)arg1;
- (id)initWithTransitionID:(id)arg1 mixedGridModifier:(id)arg2;
- (struct CGPoint { double x1; double x2; })restingOffsetForScrollOffset:(struct CGPoint { double x1; double x2; })arg1 velocity:(struct CGPoint { double x1; double x2; })arg2;
- (bool)reversesFloatingCardDirection;
- (id)scrollViewAttributes;
- (void)setReversesFloatingCardDirection:(bool)arg1;
- (double)snapshotScaleForLayoutRole:(long long)arg1 inAppLayout:(id)arg2;

@end
