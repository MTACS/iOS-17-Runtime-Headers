
@protocol HKOverlayStackedContext <NSObject>

@required

- (HKDisplayType *)stackedBaseDisplayTypeForOverlay:(long long)arg1;
- (HKDisplayType *)stackedOverlayDisplayTypeForTimeScope:(long long)arg1;
- (HKSampleType *)stackedSampleTypeForDateRangeUpdates;

@optional

- (void)stackedOverlayStateDidChange:(bool)arg1 contextItem:(HKDisplayTypeContextItem *)arg2 chartController:(HKInteractiveChartViewController *)arg3;
- (void)stackedOverlayStateWillChange:(bool)arg1 contextItem:(HKDisplayTypeContextItem *)arg2 chartController:(HKInteractiveChartViewController *)arg3;

@end
