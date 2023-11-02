
@protocol TabOverviewPresentationObserving <TabThumbnailCollectionViewPresentationObserving>

@optional

- (void)tabOverview:(TabOverview *)arg1 didUpdateScalePercentageForActiveItem:(double)arg2;
- (void)tabOverviewDidUpdateInteractivePresentation:(TabOverview *)arg1;
- (void)tabOverviewWillBeginInteractivePresentation:(TabOverview *)arg1;
- (void)tabOverviewWillEndInteractivePresentation:(TabOverview *)arg1;
- (void)tabOverviewWillShiftScrollPositionForBoundsChange:(TabOverview *)arg1;

@end
