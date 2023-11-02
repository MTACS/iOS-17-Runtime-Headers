
@interface DTTapService : DTXService <DTTapAuthorizedAPI, DTTapBulkDataReceiver> {
    DTTapConfig * _config;
    <DTTapServiceDelegate> * _delegate;
    DTTapServiceMessageSender * _messageSender;
    NSObject<OS_dispatch_queue> * _serialQueue;
    DTTapLocal * _tap;
    bool  _tapIsRunning;
    unsigned int  _tapServiceID;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)registerCapabilities:(id)arg1 forDelegateClass:(Class)arg2 forConnection:(id)arg3;

- (void).cxx_destruct;
- (void)fetchDataNow;
- (void)handleBulkData:(id)arg1;
- (void)handleBulkData:(const void*)arg1 size:(unsigned long long)arg2 destructor:(id /* block */)arg3;
- (id)initWithChannel:(id)arg1;
- (void)messageReceived:(id)arg1;
- (void)pause;
- (void)sendFrameMessage:(id)arg1;
- (void)sendHeartbeatTime:(unsigned long long)arg1;
- (void)setConfig:(id)arg1;
- (void)start;
- (void)stop;
- (void)unpause;

@end
