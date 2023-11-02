
@interface HKHealthChecklistUtilities : NSObject

+ (id)shared;

- (bool)isEmergencySOSAvailable;
- (bool)isHealthAppVisibleAndInstalled;
- (bool)isHealthChecklistAvailable;
- (bool)isMedicalIDAvailable;

@end
