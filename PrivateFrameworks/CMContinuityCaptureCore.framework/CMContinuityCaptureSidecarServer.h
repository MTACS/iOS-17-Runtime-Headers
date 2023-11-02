
@interface CMContinuityCaptureSidecarServer : CMContinuityCaptureSidecarTransportBase <ContinuityCaptureDeviceServer> {
    SidecarRequest * _activeRequest;
    unsigned long long  _currentSessionID;
    <ContinuityCaptureTaskDelegate> * _delegate;
    CMContinuityCaptureTransportSidecarDevice * _device;
    NSObject<OS_dispatch_queue> * _queue;
    CMContinuityCaptureTimeSyncClock * _timeSyncClock;
}

@property (readonly) long long clientDeviceModel;
@property unsigned long long currentSessionID;
@property (readonly) long long currentTransport;
@property (readonly, copy) NSString *debugDescription;
@property <ContinuityCaptureTaskDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, retain) <ContinuityCaptureTransportDevice> *localDevice;
@property (readonly, retain) NSObject<OS_dispatch_queue> *queue;
@property (readonly, retain) NSDate *sessionActivationStartTime;
@property (readonly) Class superclass;
@property (readonly, retain) CMContinuityCaptureTimeSyncClock *timeSyncClock;

- (void).cxx_destruct;
- (void)_activate;
- (void)_cancel;
- (void)_resetRequest:(id)arg1;
- (void)activate;
- (void)cancel;
- (long long)clientDeviceModel;
- (unsigned long long)currentSessionID;
- (long long)currentTransport;
- (id)delegate;
- (id)initWithRequest:(id)arg1;
- (id)localDevice;
- (id)queue;
- (void)relayTerminationComplete;
- (void)resetRequest:(id)arg1;
- (id)sessionActivationStartTime;
- (void)setCurrentSessionID:(unsigned long long)arg1;
- (void)setDelegate:(id)arg1;
- (void)setupMediaSidecarStreamForIdentifier:(id)arg1 type:(long long)arg2 completion:(id /* block */)arg3;
- (void)setupSidebandSidecarStreamForIdentifier:(id)arg1 type:(long long)arg2 completion:(id /* block */)arg3;
- (void)setupSidecarStreams;
- (void)teardownSidecarStreams;
- (id)timeSyncClock;

@end
