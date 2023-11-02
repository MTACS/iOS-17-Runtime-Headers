
@protocol HKInteractiveChartAnnotationViewDataSourceProtocol <NSObject>

@required

- (UIView *)dateViewWithOrientation:(long long)arg1;
- (UIView *)leftMarginViewWithOrientation:(long long)arg1;
- (long long)numberOfValuesForAnnotationView:(HKInteractiveChartAnnotationView *)arg1;
- (bool)showSeparators;
- (UIView *)valueViewForColumnAtIndex:(long long)arg1 orientation:(long long)arg2;

@optional

- (bool)pendingData;
- (bool)reverseColumnsInRightToLeftLayoutDirection;

@end
