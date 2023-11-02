
@interface HKSHSleepChartFormatter : HKInteractiveChartDataFormatter {
    HKHealthStore * _healthStore;
}

@property (nonatomic, retain) HKHealthStore *healthStore;

- (void).cxx_destruct;
- (id)_attributedValueString:(id)arg1 valueFont:(id)arg2;
- (id)_firstCalendarForSummaries:(id)arg1;
- (id)_firstDateForSummaries:(id)arg1;
- (id)_lastSleepGoalForSummaries:(id)arg1;
- (id)_localizedSchedulesFromSummaries:(id)arg1 timeFont:(id)arg2 amPmFont:(id)arg3;
- (id)_longTitleForSelectedRangeDataType:(long long)arg1 statisticsType:(long long)arg2;
- (id)_prefixColorForSleepValue:(long long)arg1 isPrefixColorActive:(id)arg2;
- (id)_rangeDataForAverageInBedStartTime:(id)arg1 averageInBedEndTime:(id)arg2 averageSleepStartTime:(id)arg3 averageSleepEndTime:(id)arg4 inBedDuration:(id)arg5 sleepDuration:(id)arg6 calendar:(id)arg7 firstDayStart:(id)arg8 timeFont:(id)arg9 amPmFont:(id)arg10 formatterOptions:(unsigned long long)arg11;
- (id)_rangeDataForDurationGoalWithSleepDaySummaries:(id)arg1 valueFont:(id)arg2 unitFont:(id)arg3;
- (id)_rangeDataForDurationValue:(id)arg1 dataType:(long long)arg2 sleepValue:(long long)arg3 isPrefixColorActive:(id)arg4 valueFont:(id)arg5 unitFont:(id)arg6 statisticsType:(long long)arg7 formatterOptions:(unsigned long long)arg8;
- (id)_rangeDataForInBedDuration:(id)arg1 sleepDuration:(id)arg2 awakeDuration:(id)arg3 asleepCoreDuration:(id)arg4 asleepDeepDuration:(id)arg5 asleepREMDuration:(id)arg6 overrideDuration:(id)arg7 arePrefixColorsActive:(id)arg8 statisticsType:(long long)arg9 valueFont:(id)arg10 unitFont:(id)arg11 formatterOptions:(unsigned long long)arg12;
- (id)_rangeDataForSleepScheduleWithSleepDaySummaries:(id)arg1 timeFont:(id)arg2 amPmFont:(id)arg3;
- (long long)_statisticsTypeForSummaries:(id)arg1 calendar:(id)arg2;
- (id)formattedSelectedRangeLabelDataWithChartData:(id)arg1 context:(long long)arg2;
- (id)healthStore;
- (id)initWithHealthStore:(id)arg1;
- (void)setHealthStore:(id)arg1;

@end
