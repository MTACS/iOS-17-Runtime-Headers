
@protocol PUOneUpTilingLayoutDelegate <NSObject>

@optional

- (double)alphaForReviewScreenBarsInLayout:(PUOneUpTilingLayout *)arg1;
- (struct CGPoint { double x1; double x2; })layout:(PUOneUpTilingLayout *)arg1 accessoryOffsetForItemAtIndexPath:(NSIndexPath *)arg2;
- (double)layout:(PUOneUpTilingLayout *)arg1 aspectRatioForItemAtIndexPath:(NSIndexPath *)arg2;
- (struct CGSize { double x1; double x2; })layout:(PUOneUpTilingLayout *)arg1 assetExplorerReviewScreenBadgeSizeForItemAtIndexPath:(NSIndexPath *)arg2;
- (struct CGSize { double x1; double x2; })layout:(PUOneUpTilingLayout *)arg1 badgeSizeForItemAtIndexPath:(NSIndexPath *)arg2 contentWidth:(double)arg3;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })layout:(PUOneUpTilingLayout *)arg1 bestSquareRectForItemAtIndexPath:(NSIndexPath *)arg2;
- (struct CGPoint { double x1; double x2; })layout:(PUOneUpTilingLayout *)arg1 contentOffsetForItemAtIndexPath:(NSIndexPath *)arg2;
- (bool)layout:(PUOneUpTilingLayout *)arg1 disableInitialZoomToFillForItemAtIndexPath:(NSIndexPath *)arg2;
- (bool)layout:(PUOneUpTilingLayout *)arg1 isShowingInfoPanelForItemAtIndexPath:(NSIndexPath *)arg2;
- (double)layout:(PUOneUpTilingLayout *)arg1 leadingBadgesWidthForItemAtIndexPath:(NSIndexPath *)arg2 contentWidth:(double)arg3;
- (struct CGSize { double x1; double x2; })layout:(PUOneUpTilingLayout *)arg1 loadingIndicatorSizeForItemAtIndexPath:(NSIndexPath *)arg2;
- (double)layout:(PUOneUpTilingLayout *)arg1 minimumItemHeightNeededInAccessoryForItemAtIndexPath:(NSIndexPath *)arg2;
- (double)layout:(PUOneUpTilingLayout *)arg1 minimumVisibleAccessoryHeightForItemAtIndexPath:(NSIndexPath *)arg2;
- (double)layout:(PUOneUpTilingLayout *)arg1 minimumVisibleContentHeightForItemAtIndexPath:(NSIndexPath *)arg2;
- (PUModelTileTransform *)layout:(PUOneUpTilingLayout *)arg1 modelTileTransformForItemAtIndexPath:(NSIndexPath *)arg2;
- (bool)layout:(PUOneUpTilingLayout *)arg1 shouldMovePeopleRowForItemAtIndexPath:(NSIndexPath *)arg2;
- (bool)layout:(PUOneUpTilingLayout *)arg1 shouldMoveProgressIndicatorForItemAtIndexPath:(NSIndexPath *)arg2;
- (bool)layout:(PUOneUpTilingLayout *)arg1 shouldScaleToFitSafeInsetsForItemAtIndexPath:(NSIndexPath *)arg2;
- (bool)layout:(PUOneUpTilingLayout *)arg1 shouldShowAccessoryForItemAtIndexPath:(NSIndexPath *)arg2;
- (bool)layout:(PUOneUpTilingLayout *)arg1 shouldShowAttributionViewForItemAtIndexPath:(NSIndexPath *)arg2;
- (bool)layout:(PUOneUpTilingLayout *)arg1 shouldShowBufferingIndicatorForItemAtIndexPath:(NSIndexPath *)arg2;
- (bool)layout:(PUOneUpTilingLayout *)arg1 shouldShowCropButtonForItemAtIndexPath:(NSIndexPath *)arg2;
- (bool)layout:(PUOneUpTilingLayout *)arg1 shouldShowPeopleRowForItemAtIndexPath:(NSIndexPath *)arg2;
- (bool)layout:(PUOneUpTilingLayout *)arg1 shouldShowPlayButtonForItemAtIndexPath:(NSIndexPath *)arg2;
- (bool)layout:(PUOneUpTilingLayout *)arg1 shouldShowProgressIndicatorForItemAtIndexPath:(NSIndexPath *)arg2;
- (bool)layout:(PUOneUpTilingLayout *)arg1 shouldShowVideoPlaceholderForItemAtIndexPath:(NSIndexPath *)arg2;
- (bool)layout:(PUOneUpTilingLayout *)arg1 shouldUseSquareImageInAccessoryForItemAtIndexPath:(NSIndexPath *)arg2;
- (bool)layoutShouldShowReviewScreenScrubberBar:(PUOneUpTilingLayout *)arg1;

@end
