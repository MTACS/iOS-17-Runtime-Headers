
@interface HealthUI.StateOfMindChartViewController : HKInteractiveChartOverlayViewController

- (void)didTapOnDateFromCurrentValueView:(id)arg1;
- (id)initWithDisplayTypes:(id)arg1 healthStore:(id)arg2 unitPreferenceController:(id)arg3 dateCache:(id)arg4 chartDataCacheController:(id)arg5 selectedTimeScopeController:(id)arg6 sampleTypeDateRangeController:(id)arg7 initialXValue:(id)arg8 currentCalendarOverride:(id)arg9 options:(unsigned long long)arg10;
- (id)initWithHealthStore:(id)arg1 primaryDisplayType:(id)arg2 unitPreferenceController:(id)arg3 dateCache:(id)arg4 chartDataCacheController:(id)arg5 selectedTimeScopeController:(id)arg6 sampleTypeDateRangeController:(id)arg7 initialXValue:(id)arg8 currentCalendarOverride:(id)arg9 options:(unsigned long long)arg10;
- (id)initWithStackedDisplayTypes:(id)arg1 healthStore:(id)arg2 unitPreferenceController:(id)arg3 dateCache:(id)arg4 chartDataCacheController:(id)arg5 selectedTimeScopeController:(id)arg6 sampleTypeDateRangeController:(id)arg7 initialXValue:(id)arg8 currentCalendarOverride:(id)arg9 options:(unsigned long long)arg10 timeScopeRanges:(id)arg11;
- (id)initWithStackedDisplayTypes:(id)arg1 primaryDisplayTypeStackIndex:(id)arg2 stackedDisplayTypeProportions:(id)arg3 healthStore:(id)arg4 unitPreferenceController:(id)arg5 dateCache:(id)arg6 chartDataCacheController:(id)arg7 selectedTimeScopeController:(id)arg8 sampleTypeDateRangeController:(id)arg9 initialXValue:(id)arg10 currentCalendarOverride:(id)arg11 options:(unsigned long long)arg12 timeScopeRanges:(id)arg13;
- (id)initWithTimeScopeRanges:(id)arg1 healthStore:(id)arg2 primaryDisplayType:(id)arg3 unitPreferenceController:(id)arg4 dateCache:(id)arg5 chartDataCacheController:(id)arg6 selectedTimeScopeController:(id)arg7 sampleTypeDateRangeController:(id)arg8 initialXValue:(id)arg9 currentCalendarOverride:(id)arg10 options:(unsigned long long)arg11;

@end
