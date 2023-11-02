
@interface WDAppleStandHourStatisticsListDataProvider : WDSampleListDataProvider {
    NSDateFormatter * _dateFormatter;
    NSMutableArray * _orderedTimePeriods;
    NSMutableDictionary * _totalsByTimePeriod;
    HKDisplayTypeValueFormatter * _valueFormatter;
}

- (void).cxx_destruct;
- (void)_callUpdateHandler;
- (void)_removeSamplesInDateRange:(id)arg1;
- (id)_samplesSortDescriptor;
- (long long)cellStyle;
- (void)deleteAllData;
- (void)deleteObjectsAtIndexPath:(id)arg1 healthStore:(id)arg2 options:(unsigned long long)arg3 completion:(id /* block */)arg4;
- (id)initWithDisplayType:(id)arg1 profile:(id)arg2;
- (unsigned long long)numberOfObjectsForSection:(unsigned long long)arg1;
- (unsigned long long)numberOfSections;
- (id)objectAtIndex:(unsigned long long)arg1 forSection:(unsigned long long)arg2;
- (id)predicateForType:(id)arg1;
- (void)removeObjectAtIndex:(unsigned long long)arg1 forSection:(unsigned long long)arg2 sectionRemoved:(bool*)arg3;
- (id)sampleTypes;
- (id)secondaryTextForObject:(id)arg1;
- (id)textForObject:(id)arg1;
- (id)titleForSection:(unsigned long long)arg1;
- (id)viewControllerForItemAtIndexPath:(id)arg1;

@end
