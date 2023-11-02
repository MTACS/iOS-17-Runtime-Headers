
@interface HKManualEntryValidationController : NSObject

- (unsigned long long)_validateQuantity:(id)arg1 withAbsoluteRange:(id)arg2 confirmRange:(id)arg3;
- (id)supportedQuantityTypes;
- (unsigned long long)validateMaximumAllowedDuration:(double)arg1 ofType:(id)arg2;
- (unsigned long long)validateMinimumAllowedDuration:(double)arg1 ofType:(id)arg2;
- (unsigned long long)validateQuantity:(id)arg1 ofType:(id)arg2;
- (unsigned long long)validateWorkoutDistance:(id)arg1;
- (unsigned long long)validateWorkoutEnergyBurned:(id)arg1;

@end
