
@interface ContactlessReaderUI.CoarseRotationManager : NSObject <BKSAccelerometerDelegate> {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _orientation;
    void accelerometer;
    void deviceOrientation;
    void orientations;
}

- (void).cxx_destruct;
- (void)accelerometer:(id)arg1 didAccelerateWithTimeStamp:(double)arg2 x:(float)arg3 y:(float)arg4 z:(float)arg5 eventType:(int)arg6;
- (void)accelerometer:(id)arg1 didChangeDeviceOrientation:(long long)arg2;
- (void)dealloc;
- (id)init;

@end
