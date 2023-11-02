
@interface HKNaturalScaleDistanceMeasurementFormatter : NSObject <HKNumberFormatter>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (long long)_precisionWithDisplayType:(id)arg1 unit:(id)arg2 andNumber:(double)arg3;
- (void)adjustedFormatInformationForUnit:(id)arg1 number:(id)arg2 displayType:(id)arg3 handler:(id /* block */)arg4;
- (bool)returnsUnitWithValueForDisplay;
- (id)stringFromNumber:(id)arg1 displayType:(id)arg2 unitController:(id)arg3;

@end
