
@protocol _GCMotionEvent <NSCopying, NSObject>

@required

- (double)accelerometerX;
- (double)accelerometerY;
- (double)accelerometerZ;
- (double)attitudeW;
- (double)attitudeX;
- (double)attitudeY;
- (double)attitudeZ;
- (double)gyroPitch;
- (double)gyroRoll;
- (double)gyroYaw;
- (bool)hasAccelerometer;
- (bool)hasAttitude;
- (bool)hasGyro;
- (unsigned long long)timestamp;

@end
