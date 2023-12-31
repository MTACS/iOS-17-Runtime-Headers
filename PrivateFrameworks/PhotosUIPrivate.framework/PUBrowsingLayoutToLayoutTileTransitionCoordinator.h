
@interface PUBrowsingLayoutToLayoutTileTransitionCoordinator : PUDefaultLayoutToLayoutTileTransitionCoordinator

- (id)finalLayoutInfoForDisappearingTileController:(id)arg1 fromLayoutInfo:(id)arg2;
- (id)newTileAnimationOptions;
- (id)optionsForAnimatingTileController:(id)arg1 toLayoutInfo:(id)arg2 withAnimationType:(long long)arg3;
- (bool)useDoubleSidedTransitionForUpdatedTileController:(id)arg1 toLayoutInfo:(id)arg2;

@end
