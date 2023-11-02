
@interface HKTimePeriodDisplayTypeValueFormatter : HKDisplayTypeValueFormatter

- (id)attributedStringFromValue:(id)arg1 displayType:(id)arg2 unitController:(id)arg3 valueFont:(id)arg4 unitFont:(id)arg5;
- (id)attributedStringFromValue:(id)arg1 displayType:(id)arg2 unitController:(id)arg3 valueFont:(id)arg4 unitFont:(id)arg5 formatForChart:(bool)arg6;
- (id)attributedStringFromValue:(id)arg1 roundToHours:(bool)arg2 displayType:(id)arg3 unitController:(id)arg4 valueFont:(id)arg5 unitFont:(id)arg6 formatForChart:(bool)arg7;
- (id)attributedStringFromValue:(id)arg1 roundToHours:(bool)arg2 displayType:(id)arg3 unitController:(id)arg4 valueFont:(id)arg5 unitFont:(id)arg6 formatForChart:(bool)arg7 usePerDayFormatting:(bool)arg8;
- (id)stringFromValue:(id)arg1 displayType:(id)arg2 unitController:(id)arg3;

@end
