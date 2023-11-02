
@protocol SBSwitcherMultitaskingQueryProviding <SBSwitcherQueryProviding>

@required

- (NSArray *)adjustedContinuousExposeIdentifiersInStripFromPreviousIdentifiersInStrip:(NSArray *)arg1;
- (NSArray *)adjustedContinuousExposeIdentifiersInSwitcherFromPreviousIdentifiersInSwitcher:(NSArray *)arg1 identifiersInStrip:(NSArray *)arg2;
- (struct CGPoint { double x1; double x2; })adjustedOffsetForOffset:(struct CGPoint { double x1; double x2; })arg1 translation:(struct CGPoint { double x1; double x2; })arg2 startPoint:(struct CGPoint { double x1; double x2; })arg3 locationInView:(struct CGPoint { double x1; double x2; })arg4 horizontalVelocity:(inout double*)arg5 verticalVelocity:(inout double*)arg6;
- (struct CGPoint { double x1; double x2; })contentOffsetForIndex:(unsigned long long)arg1 alignment:(long long)arg2;
- (double)contentPageViewScaleForAppLayout:(SBAppLayout *)arg1 withScale:(double)arg2;
- (double)distanceToLeadingEdgeOfLeadingCardFromTrailingEdgeOfScreenWithVisibleIndexToStartSearch:(unsigned long long)arg1;
- (double)minimumTranslationToKillIndex:(unsigned long long)arg1;
- (void)resetAdjustedScrollingState;
- (struct CGPoint { double x1; double x2; })restingOffsetForScrollOffset:(struct CGPoint { double x1; double x2; })arg1 velocity:(struct CGPoint { double x1; double x2; })arg2;
- (SBSwitcherScrollViewAttributes *)scrollViewAttributes;
- (double)snapshotScaleForLayoutRole:(long long)arg1 inAppLayout:(SBAppLayout *)arg2;

@end
