
@protocol REDeviceMotionPredictorProperties <REExportedInterface>

@required

- (CMMotionActivityManager *)activityManager;
- (bool)isStationary;
- (unsigned long long)motionType;

@end
