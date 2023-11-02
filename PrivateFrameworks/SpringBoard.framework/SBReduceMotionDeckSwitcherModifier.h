
@interface SBReduceMotionDeckSwitcherModifier : SBDeckSwitcherModifier

- (double)_cardWidth;
- (struct CGSize { double x1; double x2; })_interpageSpacingForPaging;
- (struct CGPoint { double x1; double x2; })_pagingOrigin;
- (double)_switcherCardScale;
- (struct CGPoint { double x1; double x2; })adjustedOffsetForOffset:(struct CGPoint { double x1; double x2; })arg1 translation:(struct CGPoint { double x1; double x2; })arg2 startPoint:(struct CGPoint { double x1; double x2; })arg3 locationInView:(struct CGPoint { double x1; double x2; })arg4 horizontalVelocity:(inout double*)arg5 verticalVelocity:(inout double*)arg6;
- (double)depthForIndex:(unsigned long long)arg1 displayItemsCount:(unsigned long long)arg2 scrollProgress:(double)arg3;
- (double)homeScreenAlpha;
- (double)homeScreenScale;
- (unsigned long long)indexForScrollProgress:(double)arg1 displayItemsCount:(unsigned long long)arg2 frameOrigin:(double)arg3;
- (double)leadingOffsetForIndex:(unsigned long long)arg1 displayItemsCount:(unsigned long long)arg2 scrollProgress:(double)arg3;
- (double)opacityForIndex:(unsigned long long)arg1 scrollProgress:(double)arg2;
- (void)resetAdjustedScrollingState;
- (double)scrollProgressForIndex:(unsigned long long)arg1;
- (double)scrollProgressForIndex:(unsigned long long)arg1 displayItemsCount:(unsigned long long)arg2 frameOrigin:(double)arg3;
- (id)scrollViewAttributes;
- (double)titleAndIconOpacityForIndex:(unsigned long long)arg1;
- (double)titleOpacityForIndex:(unsigned long long)arg1 scrollProgress:(double)arg2;
- (double)wallpaperScale;

@end
