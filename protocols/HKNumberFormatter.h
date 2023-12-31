
@protocol HKNumberFormatter <NSObject>

@required

- (bool)returnsUnitWithValueForDisplay;
- (NSString *)stringFromNumber:(NSNumber *)arg1 displayType:(HKDisplayType *)arg2 unitController:(HKUnitPreferenceController *)arg3;

@end
