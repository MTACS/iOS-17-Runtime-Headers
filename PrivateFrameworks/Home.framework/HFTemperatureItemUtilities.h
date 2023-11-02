
@interface HFTemperatureItemUtilities : NSObject

+ (long long)_heatingCoolingValueForCurrentHeaterCoolerState:(long long)arg1 isActive:(bool)arg2;
+ (long long)_heatingCoolingValueForTargetHeaterCoolerState:(long long)arg1 isActive:(bool)arg2;
+ (id)currentHeatingCoolingModeValueInResponse:(id)arg1;
+ (id)integerTemperatureRangeWithinNumberRange:(id)arg1 representsCelsius:(bool)arg2;
+ (id)targetHeatingCoolingModeValueInResponse:(id)arg1;
+ (id)targetTemperatureValueInResponse:(id)arg1;

@end
