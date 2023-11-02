
@interface HKQuantityDisplayTypeValueFormatter : HKDisplayTypeValueFormatter

- (id)attributedStringFromValue:(id)arg1 displayType:(id)arg2 unitController:(id)arg3 valueFont:(id)arg4 unitFont:(id)arg5;
- (id)attributedStringFromValue:(id)arg1 displayType:(id)arg2 unitController:(id)arg3 valueFont:(id)arg4 unitFont:(id)arg5 formatForChart:(bool)arg6;
- (id)attributedStringFromValue:(id)arg1 displayType:(id)arg2 unitController:(id)arg3 valueFont:(id)arg4 unitFont:(id)arg5 formatForChart:(bool)arg6 unitFormatString:(id)arg7;
- (id)attributedStringFromValue:(id)arg1 displayType:(id)arg2 unitController:(id)arg3 valueFont:(id)arg4 unitFont:(id)arg5 formatForChart:(bool)arg6 unitFormatString:(id)arg7 formatString:(id)arg8;
- (id)attributedStringFromValue:(id)arg1 unit:(id)arg2 unitController:(id)arg3 valueFont:(id)arg4 unitFont:(id)arg5 formatForChart:(bool)arg6 unitFormatString:(id)arg7 formatString:(id)arg8;
- (id)attributedStringFromValueString:(id)arg1 valueFont:(id)arg2 unitString:(id)arg3 unitFont:(id)arg4 unitIcon:(id)arg5 formatForChart:(bool)arg6 formatString:(id)arg7;
- (id)stringFromValue:(id)arg1 displayType:(id)arg2 unitController:(id)arg3;
- (id)stringFromValue:(id)arg1 displayType:(id)arg2 unitController:(id)arg3 formatString:(id)arg4;

@end
