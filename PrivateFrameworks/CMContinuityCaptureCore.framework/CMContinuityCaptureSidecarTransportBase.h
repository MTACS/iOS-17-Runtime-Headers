
@interface CMContinuityCaptureSidecarTransportBase : NSObject <CMContinuityCaptureTransportMessaging> {
    <ContinuityCaptureTaskDelegate> * _delegate;
    CMContinuityCaptureTransportSidecarDevice * _device;
    NSArray * _mediaIdentfiers;
    bool  _pendingTimeSyncCallback;
    NSObject<OS_dispatch_queue> * _queue;
    NSArray * _sidebandIdentfiers;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, retain) CMContinuityCaptureTransportSidecarDevice *device;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_enqueueResponse:(id)arg1 identifier:(id)arg2;
- (void)createTimeSyncClockForSession:(id)arg1 completion:(id /* block */)arg2;
- (id)debugInfo;
- (id)description;
- (id)device;
- (void)enqueueResponse:(id)arg1 identifier:(id)arg2;
- (id)initWithDevice:(id)arg1 queue:(id)arg2 taskDelegate:(id)arg3;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)resetDevice:(id)arg1;
- (void)sendMessage:(id)arg1 message:(id)arg2 completion:(id /* block */)arg3;
- (void)setTaskDelegate:(id)arg1;
- (void)setupMediaSidecarStreamForIdentifier:(id)arg1 type:(long long)arg2 completion:(id /* block */)arg3;
- (void)setupSidebandSidecarStreamForIdentifier:(id)arg1 type:(long long)arg2 completion:(id /* block */)arg3;
- (void)setupSidecarStreams;
- (void)teardownSidecarStreams;

@end
