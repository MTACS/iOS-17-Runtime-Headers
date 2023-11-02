
@interface SUICAudioPowerLevelLinearConverter : NSObject

+ (float)_adjustedLinearPowerLevel:(float)arg1 isInput:(bool)arg2;
+ (float)_expectedLinearInputPowerLevelMaximum;
+ (float)_linearValueForPowerLevel:(float)arg1 shouldAdjustForDeviceType:(bool)arg2 isInput:(bool)arg3;
+ (float)linearValueForInputPowerLevel:(float)arg1;
+ (float)linearValueForOutputPowerLevel:(float)arg1;

@end
