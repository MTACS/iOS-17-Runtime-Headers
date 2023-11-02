
@protocol PXStoryMutableStyleManager

@required

- (void)applyFocusedStyle;
- (void)applyFocusedStyleWithCustomizedColorGradeKind:(long long)arg1;
- (void)applyFocusedStyleWithCustomizedSongResource:(id <PXStorySongResource>)arg1;
- (void)applyStyleAtIndex:(long long)arg1 fromDataSource:(PXStoryStyleSelectionDataSource *)arg2;
- (double)selectionFocus;
- (void)setSelectionFocus:(double)arg1;

@end
