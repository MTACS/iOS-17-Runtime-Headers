
@interface _GEONaturalLanguageNumberFormatter : NSNumberFormatter

- (bool)_isHalfDecimal:(double)arg1 outIsExact:(out bool*)arg2;
- (bool)_isNumberNearNaturalNumber:(double)arg1 outIsExact:(out bool*)arg2;
- (id)_string_nAndAHalfDistance:(id)arg1 isApproximate:(bool)arg2;
- (id)_string_nDistance:(id)arg1 isApproximate:(bool)arg2;
- (int)_tenthsDecimalPlace:(double)arg1;
- (id)stringFromDistanceMeasurement:(id)arg1 roundedDistanceMeasurement:(id)arg2;

@end
