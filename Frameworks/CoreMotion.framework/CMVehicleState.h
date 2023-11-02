
@interface CMVehicleState : NSObject

+ (bool)isAvailable;
+ (unsigned long long)isVehicleBasedOnDeviceId:(id)arg1 deviceType:(int)arg2;
+ (id)mostRecentInVehicle;
+ (id)mostRecentVehicleConnection;
+ (unsigned long long)vehicularHints;
+ (unsigned long long)vehicularOperatorState;
+ (unsigned long long)vehicularState;

@end
