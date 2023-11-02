
@protocol MNLocationRecorder <NSObject>

@required

- (void)recordCompassHeading:(double)arg1 magneticHeading:(double)arg2 accuracy:(double)arg3 timestamp:(NSDate *)arg4;
- (void)recordError:(NSError *)arg1;
- (void)recordInitialCourse:(double)arg1;
- (void)recordLocation:(CLLocation *)arg1 correctedLocation:(CLLocation *)arg2;
- (void)recordLocation:(MNLocation *)arg1 rawLocation:(MNLocation *)arg2;
- (void)recordLocationUpdatePause;
- (void)recordLocationUpdateResume;
- (void)recordVehicleHeading:(double)arg1 timestamp:(NSDate *)arg2;
- (void)recordVehicleSpeed:(double)arg1 timestamp:(NSDate *)arg2;

@end
