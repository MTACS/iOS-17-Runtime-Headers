
@interface ATXBlendingCaptureRateTracker : NSObject

+ (void)logAppDirectoryCaptureWithTracker:(id)arg1;
+ (void)logAppDirectoryDiversionWithCaptureType:(int)arg1 tracker:(id)arg2;
+ (void)logHomeScreenCaptureWithTracker:(id)arg1;
+ (void)logHomeScreenDiversionWithCaptureType:(int)arg1 tracker:(id)arg2;
+ (void)logSpotlightActionCaptureWithTracker:(id)arg1;
+ (void)logSpotlightActionDiversionWithCaptureType:(int)arg1 tracker:(id)arg2;
+ (void)logSpotlightAppCaptureWithTracker:(id)arg1;
+ (void)logSpotlightAppDiversionWithCaptureType:(int)arg1 tracker:(id)arg2;

@end
