
@interface _HKFixedValueDateSpanDelegate : NSObject <HKDateRangeDataSourceDelegate> {
    HKFixedValueDateSpanDataSource * _fixedValueDateSpanDataSource;
    <HKDateRangeDataUpdateDelegate> * _updateCallbackDelegate;
}

@property (nonatomic) HKFixedValueDateSpanDataSource *fixedValueDateSpanDataSource;
@property (nonatomic) <HKDateRangeDataUpdateDelegate> *updateCallbackDelegate;

- (void).cxx_destruct;
- (id)dataForDateRange:(id)arg1 timeScope:(long long)arg2;
- (id)fixedValueDateSpanDataSource;
- (void)setFixedValueDateSpanDataSource:(id)arg1;
- (void)setUpdateCallbackDelegate:(id)arg1;
- (void)setUpdateDelegate:(id)arg1;
- (id)updateCallbackDelegate;

@end
