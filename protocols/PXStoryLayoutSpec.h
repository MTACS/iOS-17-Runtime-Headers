
@protocol PXStoryLayoutSpec

@required

- (UIColor *)backgroundColor;
- (double)bottomTitleContentOffset;
- (double)browserGridCellCornersRadius;
- (PXExploreLayoutMetrics *)browserGridLayoutMetrics;
- (long long)browserGridScrollDecelerationRate;
- (struct CGSize { double x1; double x2; })bufferingIndicatorSize;
- (bool)canScaleWhenPressed;
- (double)distanceBetweenBufferingIndicatorCenterAndBottom;
- (double)distanceBetweenChapterTitleBaselineAndBottomWithChrome;
- (double)distanceBetweenChapterTitleBaselineAndBottomWithoutChrome;
- (double)interpageSpacing;
- (long long)scrollDecelerationRate;
- (struct CGSize { double x1; double x2; })scrubberCurrentAssetSize;
- (double)scrubberVerticalPadding;
- (double)styleSwitcherChromeButtonHorizontalMargin;
- (PXStoryChromeButtonSpec *)styleSwitcherChromeButtonSpec;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })styleSwitcherChromeInset;
- (long long)styleSwitcherLayoutDirection;
- (double)styleSwitcherPageControlHeight;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })styleSwitcherPageControlInset;
- (bool)styleSwitcherShowsRestartButton;
- (bool)styleSwitcherShowsTitle;
- (NSDictionary *)styleSwitcherTitleAttributes;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })styleSwitcherViewportInset;
- (double)styleSwitcherViewportSpacing;
- (double)thumbnailChromeButtonSpacing;
- (PXStoryChromeButtonSpec *)thumbnailChromeButtonSpec;
- (struct CGSize { double x1; double x2; })thumbnailChromeDetailsViewButtonPadding;
- (PXStoryDetailsViewButtonSpec *)thumbnailChromeDetailsViewButtonSpec;
- (struct CGSize { double x1; double x2; })thumbnailChromePadding;
- (PXStoryChromeButtonSpec *)thumbnailChromePlayButtonSpec;
- (bool)thumbnailChromeShowsActionMenuButton;
- (bool)thumbnailChromeShowsFavoriteButton;
- (bool)thumbnailChromeShowsPlayButton;
- (double)thumbnailCornerRadius;
- (bool)thumbnailMenuIncludesFavoriteAction;
- (bool)thumbnailMenuIncludesFeatureLessAction;
- (struct CGSize { double x1; double x2; })thumbnailPlayButtonPadding;
- (NSShadow *)thumbnailShadow;

@end
