
@protocol SBIconListLayoutDelegate <NSObject>

@optional

- (NSString *)iconListView:(SBIconListView *)arg1 alternateIconLocationForListWithNonDefaultSizedIcons:(bool)arg2;
- (<SBIconListLayoutAnimating> *)iconListView:(SBIconListView *)arg1 animatorForLayingOutIconView:(SBIconView *)arg2 proposedAnimator:(id <SBIconListLayoutAnimating>)arg3;
- (<SBIconListLayoutAnimating> *)iconListView:(SBIconListView *)arg1 animatorForRemovingIcons:(NSArray *)arg2 proposedAnimator:(id <SBIconListLayoutAnimating>)arg3;
- (struct CGPoint { double x1; double x2; })iconListView:(SBIconListView *)arg1 centerForIconCoordinate:(struct SBIconCoordinate { long long x1; long long x2; })arg2 metrics:(SBIconListViewLayoutMetrics *)arg3 proposedCenter:(struct CGPoint { double x1; double x2; })arg4;
- (struct CGPoint { double x1; double x2; })iconListView:(SBIconListView *)arg1 originForIconCoordinate:(struct SBIconCoordinate { long long x1; long long x2; })arg2 metrics:(SBIconListViewLayoutMetrics *)arg3 proposedOrigin:(struct CGPoint { double x1; double x2; })arg4;
- (unsigned long long)iconListView:(SBIconListView *)arg1 rowAtPoint:(struct CGPoint { double x1; double x2; })arg2 metrics:(SBIconListViewLayoutMetrics *)arg3 proposedRow:(unsigned long long)arg4;
- (struct CGSize { double x1; double x2; })iconListView:(SBIconListView *)arg1 sizeThatFits:(struct CGSize { double x1; double x2; })arg2 metrics:(SBIconListViewLayoutMetrics *)arg3 proposedSize:(struct CGSize { double x1; double x2; })arg4;
- (void)iconListView:(void *)arg1 wantsAnimatedLayoutForIconView:(void *)arg2 withParameters:(void *)arg3 alongsideAnimationBlock:(void *)arg4; // needs 4 arg types, found 8: SBIconListView *, SBIconView *, struct SBIconListLayoutAnimationParameters { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; double x2; struct SBIconImageInfo { struct CGSize { double x_1_2_1; double x_1_2_2; } x_3_1_1; double x_3_1_2; double x_3_1_3; } x3; bool x4; struct SBIconCoordinate { long long x_5_1_1; long long x_5_1_2; } x5; bool x6; bool x7; unsigned long long x8; }, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)iconListView:(SBIconListView *)arg1 willLayoutIconView:(SBIconView *)arg2;
- (void)iconListViewDidLayoutIcons:(SBIconListView *)arg1;

@end
