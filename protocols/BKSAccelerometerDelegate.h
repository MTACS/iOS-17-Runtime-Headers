
@protocol BKSAccelerometerDelegate <NSObject>

@required

- (void)accelerometer:(BKSAccelerometer *)arg1 didAccelerateWithTimeStamp:(double)arg2 x:(float)arg3 y:(float)arg4 z:(float)arg5 eventType:(int)arg6;

@optional

- (void)accelerometer:(BKSAccelerometer *)arg1 didChangeDeviceOrientation:(long long)arg2;

@end
