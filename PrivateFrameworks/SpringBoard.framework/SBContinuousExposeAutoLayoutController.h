
@interface SBContinuousExposeAutoLayoutController : NSObject {
    bool  _reentrancyGuard;
}

- (void)_compactSpacingBetweenItemsInSpace:(id)arg1 configuration:(id)arg2;
- (id)_fullyOccludedItemsForSpace:(id)arg1 configuration:(id)arg2;
- (id)_itemsSortedByXInSpace:(id)arg1 configuration:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_performAutoLayoutWithSpace:(id)arg1 configuration:(id)arg2 stageInset:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg3;
- (void)_snapPositionForAppToEdgesAndCenterOfRectForItem:(id)arg1 rect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 centerSnapPadding:(double)arg3 edgeSnapPadding:(double)arg4 requireBothAxesToSnap:(bool)arg5 configuration:(id)arg6;
- (void)_updateCompactedFramesForSpace:(id)arg1 configuration:(id)arg2;
- (void)_updateItemsCoveredByFullyOccludedPeekingItemsInSpace:(id)arg1 configuration:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })boundingBoxForSpace:(id)arg1 configuration:(id)arg2;
- (void)dodgeFullyOccludedWindowsToNearestVisibleEdgeForSpace:(id)arg1 configuration:(id)arg2;
- (void)snapPositionToNearestEdgesIfNecessaryForSpace:(id)arg1 stageArea:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 configuration:(id)arg3;
- (id)spaceByPerformingAutoLayoutWithSpace:(id)arg1 previousSpace:(id)arg2 configuration:(id)arg3 options:(unsigned long long)arg4;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })stageAreaForSpace:(id)arg1 configuration:(id)arg2;
- (void)updateOverlappingScaleAnchorPositionsForSpace:(id)arg1 configuration:(id)arg2;
- (id)validBottomStageAreaInsetsWithConfiguration:(id)arg1;
- (id)validLeadingStageAreaInsetsWithConfiguration:(id)arg1;
- (id)validTopStageAreaInsetsWithConfiguration:(id)arg1;
- (id)validTrailingStageAreaInsetsWithConfiguration:(id)arg1;

@end
