
@interface _ActivitySourceDelegateProvider : _ActivitySourceDelegate <HKActivitySummaryDataProviderObserver> {
    HKActivitySummaryDataProvider * _dataProvider;
    <HKDateRangeDataUpdateDelegate> * _dateRangeDataUpdateDelegate;
}

@property (nonatomic, readonly) HKActivitySummaryDataProvider *dataProvider;
@property (nonatomic) <HKDateRangeDataUpdateDelegate> *dateRangeDataUpdateDelegate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)activitySummariesForDateRange:(id)arg1 timeScope:(long long)arg2;
- (void)activitySummaryDataProviderDidUpdateActivitySummaries:(id)arg1;
- (id)dataProvider;
- (id)dateRangeDataUpdateDelegate;
- (id)initWithDataProvider:(id)arg1 activityValue:(long long)arg2 displayTypeController:(id)arg3 unitPreferenceController:(id)arg4;
- (void)setDateRangeDataUpdateDelegate:(id)arg1;
- (void)setUpdateDelegate:(id)arg1;

@end
