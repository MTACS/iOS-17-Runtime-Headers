
@interface NTKBatteryUtilities : NSObject

+ (bool)chargingForState:(long long)arg1;
+ (id)chargingStringForState:(long long)arg1;
+ (id)chargingStringForState:(long long)arg1 longText:(bool)arg2;
+ (id)colorForLevel:(float)arg1 andState:(long long)arg2;
+ (id)modularRingColorForLevel:(float)arg1;

@end
