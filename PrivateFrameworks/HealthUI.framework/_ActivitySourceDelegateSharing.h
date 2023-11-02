
@interface _ActivitySourceDelegateSharing : _ActivitySourceDelegate {
    NSCalendar * _calendar;
    NSDictionary * _timescopeToSummariesTable;
}

@property (nonatomic, retain) NSCalendar *calendar;
@property (nonatomic, retain) NSDictionary *timescopeToSummariesTable;

- (void).cxx_destruct;
- (id)_filterSummaries:(id)arg1 dateRange:(id)arg2;
- (id)activitySummariesForDateRange:(id)arg1 timeScope:(long long)arg2;
- (id)calendar;
- (id)initWithTimescopeToSummariesTable:(id)arg1 activityValue:(long long)arg2 displayTypeController:(id)arg3 unitPreferenceController:(id)arg4 calendar:(id)arg5;
- (void)setCalendar:(id)arg1;
- (void)setTimescopeToSummariesTable:(id)arg1;
- (void)setUpdateDelegate:(id)arg1;
- (id)timescopeToSummariesTable;

@end
