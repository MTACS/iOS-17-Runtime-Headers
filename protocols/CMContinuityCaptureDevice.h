
@protocol CMContinuityCaptureDevice <ContinuityCaptureTaskDelegate, CMContinuityCaptureStateMachineActionDelegate>

@required

- (CMContinuityCaptureConfiguration *)activeConfiguration;
- (unsigned long long)avCaptureStackStartTime;
- (AVCMediaStreamNegotiator *)avcStreamNegotiator;
- (unsigned long long)cameraCaptureStackStartTime;
- (CMContinuityCaptureDeviceCapabilities *)capabilities;
- (<CMContinuityCaptureCompositeDeviceDelegate> *)compositeDelegate;
- (NSArray *)controls;
- (unsigned long long)currentSessionID;
- (NSDictionary *)debugInfo;
- (NSUUID *)deviceID;
- (long long)entity;
- (void)forceDeviceRemoval;
- (bool)hasStreamIntent;
- (id)initWithCapabilities:(CMContinuityCaptureDeviceCapabilities *)arg1 compositeDelegate:(id <CMContinuityCaptureCompositeDeviceDelegate>)arg2 transportDevice:(id <ContinuityCaptureTransportDevice>)arg3 queue:(NSObject<OS_dispatch_queue> *)arg4;
- (void)invalidate;
- (bool)invalidated;
- (NSObject<OS_dispatch_queue> *)queue;
- (void)resetTransportDevice:(id <ContinuityCaptureTransportDevice>)arg1;
- (void)scheduleDeviceBusyNotification:(bool)arg1;
- (void)setStreamIntent:(bool)arg1;
- (bool)startAVConferenceStack:(unsigned long long)arg1;
- (bool)startCameraCaptureStack:(unsigned long long)arg1;
- (CMContinuityCaptureState *)stateMachineCurrentState;
- (bool)stopCameraCaptureStack:(unsigned long long)arg1;
- (void)stopCaptureStack:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (CMContinuityCaptureStateMachine *)streamActionStateMachine;
- (bool)streaming;
- (void)terminateComplete:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (<ContinuityCaptureTransportDevice> *)transportDevice;
- (<ContinuityCaptureTransportDeviceStream> *)transportStream;

@end
