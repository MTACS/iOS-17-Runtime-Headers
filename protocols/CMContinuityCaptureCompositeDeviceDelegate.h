
@protocol CMContinuityCaptureCompositeDeviceDelegate <ContinuityCaptureTaskDelegate>

@required

- (NSArray *)continuityCaptureDevices;
- (CMContinuityCaptureControl *)controlWithName:(NSString *)arg1;
- (NSArray *)controls;
- (NSDate *)currentSessionActivationStartTime;
- (unsigned long long)currentSessionID;
- (void)device:(CMContinuityCaptureDeviceBase *)arg1 updatedValueForControl:(CMContinuityCaptureControl *)arg2;
- (CMContinuityCaptureEventQueue *)eventQueue;
- (unsigned long long)lastSessionID;
- (void)terminateCompleteForDevice:(CMContinuityCaptureDeviceBase *)arg1;

@end
