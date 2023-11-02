
@interface HealthRecordsUI.SingleValueCurrentValueViewDataSource : HKCurrentValueViewDataSource <HKCurrentValueViewDataSourceDelegate> {
    void lastCachedNumberOfChartPoints;
}

- (id)init;
- (id)initWithDateCache:(id)arg1 healthStore:(id)arg2 selectedRangeFormatter:(id)arg3;
- (id)titleFor:(id)arg1;
- (void)updateDataSourceWithGraphView:(id)arg1 displayType:(id)arg2 timeScope:(long long)arg3;

@end
