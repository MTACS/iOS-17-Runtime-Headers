
@interface HKHeightDisplayTypeValueFormatter : HKQuantityDisplayTypeValueFormatter

- (bool)_unitsAreFeetWithDisplayType:(id)arg1 unitController:(id)arg2;
- (id)attributedStringFromValue:(id)arg1 displayType:(id)arg2 unitController:(id)arg3 valueFont:(id)arg4 unitFont:(id)arg5;
- (id)attributedStringFromValue:(id)arg1 displayType:(id)arg2 unitController:(id)arg3 valueFont:(id)arg4 unitFont:(id)arg5 formatForChart:(bool)arg6;
- (id)stringFromValue:(id)arg1 displayType:(id)arg2 unitController:(id)arg3;

@end
