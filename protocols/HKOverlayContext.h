
@protocol HKOverlayContext <NSObject>

@required

- (HKDisplayTypeContextItem *)contextItemForLastUpdate;
- (HKDisplayType *)overlayDisplayTypeForTimeScope:(long long)arg1;
- (long long)resolutionForTimeScope:(long long)arg1 traitResolution:(long long)arg2;
- (HKSampleType *)sampleTypeForDateRangeUpdates;
- (void)updateContextItemForDateInterval:(void *)arg1 overlayController:(void *)arg2 timeScope:(void *)arg3 resolution:(void *)arg4 completion:(void *)arg5; // needs 5 arg types, found 11: NSDateInterval *, HKInteractiveChartOverlayViewController *, long long, long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*

@optional

- (HKDisplayType *)baseDisplayTypeForOverlay:(long long)arg1;
- (bool)canSelectOverlayContextItem:(HKDisplayTypeContextItem *)arg1 isDeselecting:(bool)arg2 timeScope:(long long)arg3 chartController:(HKInteractiveChartViewController *)arg4;
- (void)invalidateContextItem;
- (void)overlayStateDidChange:(bool)arg1 contextItem:(HKDisplayTypeContextItem *)arg2 chartController:(HKInteractiveChartViewController *)arg3;
- (void)overlayStateWillChange:(bool)arg1 contextItem:(HKDisplayTypeContextItem *)arg2 chartController:(HKInteractiveChartViewController *)arg3;
- (void)overlayWasExplicitlySelected:(HKDisplayTypeContextItem *)arg1 chartController:(HKInteractiveChartViewController *)arg2;
- (void)prepareContextForDateInterval:(NSDateInterval *)arg1 overlayController:(HKInteractiveChartOverlayViewController *)arg2 timeScope:(long long)arg3 resolution:(long long)arg4;
- (bool)unselectedContextShouldUseContextBaseType;

@end
