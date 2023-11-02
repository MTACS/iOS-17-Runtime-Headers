
@interface _ActivityCurrentValueDataSource : HKActivitySummaryAnnotationViewDataSource {
    <HKInteractiveChartCurrentValueViewCallbacks> * _currentValueViewCallbacks;
    bool  _currentValueViewHasNoData;
    UIView * _noDataView;
}

@property (nonatomic) <HKInteractiveChartCurrentValueViewCallbacks> *currentValueViewCallbacks;
@property (nonatomic) bool currentValueViewHasNoData;
@property (nonatomic, readonly) UIView *noDataView;

- (void).cxx_destruct;
- (id)_buildNoDataView;
- (id)_dateRangeFromComponents;
- (id)_dateRangeFromStartDate:(id)arg1 endDate:(id)arg2;
- (id)_localizedCurrentValueViewDateRange;
- (id)currentValueViewCallbacks;
- (bool)currentValueViewHasNoData;
- (id)dateViewWithOrientation:(long long)arg1;
- (id)initWithDisplayTypeController:(id)arg1 unitController:(id)arg2 wheelchairUseCharacteristicCache:(id)arg3 currentValueViewContext:(bool)arg4 firstWeekday:(long long)arg5 activityOptions:(unsigned long long)arg6 currentValueViewCallbacks:(id)arg7;
- (id)leftMarginViewWithOrientation:(long long)arg1;
- (id)noDataView;
- (long long)numberOfValuesForAnnotationView:(id)arg1;
- (void)setCurrentValueViewCallbacks:(id)arg1;
- (void)setCurrentValueViewHasNoData:(bool)arg1;
- (id)valueViewForColumnAtIndex:(long long)arg1 orientation:(long long)arg2;

@end
