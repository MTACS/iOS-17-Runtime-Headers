
@protocol HKCurrentValueViewDataSourceDelegate <NSObject>

@optional

- (HKValueRange *)dateRangeFromSelectionContext:(HKGraphViewPointSelectionContext *)arg1 timeScope:(long long)arg2;
- (bool)infographicSupportedForDisplayType:(HKDisplayType *)arg1 healthStore:(HKHealthStore *)arg2;
- (UIViewController *)infographicViewControllerForDisplayType:(HKDisplayType *)arg1 healthStore:(HKHealthStore *)arg2;
- (void)processSelectedRangeData:(HKSelectedRangeData *)arg1 displayType:(HKDisplayType *)arg2;
- (NSString *)stringForValueRange:(HKValueRange *)arg1 timeScope:(long long)arg2;
- (NSAttributedString *)titleForSelectedRangeData:(HKSelectedRangeData *)arg1 displayType:(HKDisplayType *)arg2;
- (NSAttributedString *)valueForSelectedRangeData:(HKSelectedRangeData *)arg1;

@end
