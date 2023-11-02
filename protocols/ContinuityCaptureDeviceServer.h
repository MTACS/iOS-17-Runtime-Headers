
@protocol ContinuityCaptureDeviceServer <NSObject>

@required

- (void)activate;
- (void)cancel;
- (long long)clientDeviceModel;
- (unsigned long long)currentSessionID;
- (long long)currentTransport;
- (<ContinuityCaptureTaskDelegate> *)delegate;
- (<ContinuityCaptureTransportDevice> *)localDevice;
- (NSObject<OS_dispatch_queue> *)queue;
- (void)relayTerminationComplete;
- (NSDate *)sessionActivationStartTime;
- (void)setCurrentSessionID:(unsigned long long)arg1;
- (void)setDelegate:(id <ContinuityCaptureTaskDelegate>)arg1;
- (CMContinuityCaptureTimeSyncClock *)timeSyncClock;

@end
