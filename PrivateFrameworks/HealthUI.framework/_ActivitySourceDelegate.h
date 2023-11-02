
@interface _ActivitySourceDelegate : NSObject <HKDateRangeDataSourceDelegate> {
    long long  _activityValue;
    NSCalendar * _currentCalendar;
    HKDisplayTypeController * _displayTypeController;
    HKUnitPreferenceController * _unitPreferenceController;
}

@property (nonatomic, readonly) long long activityValue;
@property (nonatomic, readonly) NSCalendar *currentCalendar;
@property (nonatomic, readonly) HKDisplayTypeController *displayTypeController;
@property (nonatomic, readonly) HKUnitPreferenceController *unitPreferenceController;

- (void).cxx_destruct;
- (double)_centerOffsetForTimeScope:(long long)arg1 startDate:(id)arg2 calendar:(id)arg3;
- (id)_chartPointForActivityValue:(long long)arg1 summary:(id)arg2 timeScope:(long long)arg3;
- (id)_healthChartPointForQuantity:(id)arg1 quantityType:(id)arg2 activityValue:(long long)arg3 referenceDisplayType:(id)arg4 activitySummaryData:(id)arg5 preferredUnit:(id)arg6 date:(id)arg7 createBarValue:(bool)arg8;
- (id)_quantityForActivityValue:(long long)arg1 summary:(id)arg2;
- (id)activitySummariesForDateRange:(id)arg1 timeScope:(long long)arg2;
- (long long)activityValue;
- (id)currentCalendar;
- (id)dataForDateRange:(id)arg1 timeScope:(long long)arg2;
- (id)displayTypeController;
- (id)initWithActivityValue:(long long)arg1 displayTypeController:(id)arg2 unitPreferenceController:(id)arg3;
- (void)setUpdateDelegate:(id)arg1;
- (id)unitPreferenceController;

@end
