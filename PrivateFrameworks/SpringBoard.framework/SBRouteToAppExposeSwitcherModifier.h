
@interface SBRouteToAppExposeSwitcherModifier : SBTransitionSwitcherModifier {
    SBAppExposeGridSwitcherModifier * _appExposeModifier;
    bool  _isTransitioningOutOfAppExpose;
}

@property (nonatomic) bool reversesFloatingCardDirection;

- (void).cxx_destruct;
- (id)adjustedAppLayoutsForAppLayouts:(id)arg1;
- (id)appExposeAccessoryButtonsBundleIdentifier;
- (long long)appExposeAccessoryButtonsOverrideUserInterfaceStyle;
- (struct CGPoint { double x1; double x2; })contentOffsetForIndex:(unsigned long long)arg1 alignment:(long long)arg2;
- (double)contentPageViewScaleForAppLayout:(id)arg1 withScale:(double)arg2;
- (id)handleTransitionEvent:(id)arg1;
- (id)initWithTransitionID:(id)arg1 appExposeModifier:(id)arg2;
- (long long)plusButtonStyle;
- (struct CGPoint { double x1; double x2; })restingOffsetForScrollOffset:(struct CGPoint { double x1; double x2; })arg1 velocity:(struct CGPoint { double x1; double x2; })arg2;
- (bool)reversesFloatingCardDirection;
- (id)scrollViewAttributes;
- (void)setReversesFloatingCardDirection:(bool)arg1;
- (double)snapshotScaleForLayoutRole:(long long)arg1 inAppLayout:(id)arg2;

@end
