
@interface HKInteractiveChartNumberRangeFormatter : NSObject

- (id)_attributedStringFromValue:(id)arg1 withValueFormatter:(id)arg2 displayType:(id)arg3 unitController:(id)arg4 valueFont:(id)arg5 unitFont:(id)arg6 formatForChart:(bool)arg7;
- (bool)_shouldRemoveUnit:(id)arg1 fromMaximumFormattedValue:(id)arg2;
- (bool)_shouldRemoveUnit:(id)arg1 fromMinimumFormattedValue:(id)arg2;
- (id)attributedStringForMinimumString:(id)arg1 maximumString:(id)arg2 minimumUnitString:(id)arg3 maximumUnitString:(id)arg4 valueFont:(id)arg5 formatForChart:(bool)arg6 resultIsASingleValue:(bool*)arg7;
- (id)attributedStringForMinimumValue:(id)arg1 maximumValue:(id)arg2 displayType:(id)arg3 unitController:(id)arg4 valueFont:(id)arg5 unitFont:(id)arg6 formatForChart:(bool)arg7;
- (id)attributedStringForMinimumValue:(id)arg1 maximumValue:(id)arg2 displayType:(id)arg3 unitController:(id)arg4 valueFont:(id)arg5 unitFont:(id)arg6 formatForChart:(bool)arg7 resultIsSingleValue:(bool*)arg8;
- (id)stringForMinimumValue:(id)arg1 maximumValue:(id)arg2 displayType:(id)arg3 unitPreferenceController:(id)arg4;

@end
