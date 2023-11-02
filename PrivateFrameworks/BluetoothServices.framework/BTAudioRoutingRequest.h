
@interface BTAudioRoutingRequest : NSObject <NSSecureCoding> {
    NSString * _appBundleID;
    int  _audioScore;
    unsigned int  _clientID;
    NSString * _deviceAddress;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    unsigned int  _flags;
    bool  _invalidateCalled;
    bool  _invalidateDone;
    id /* block */  _responseHandler;
    NSXPCListenerEndpoint * _testListenerEndpoint;
    NSXPCConnection * _xpcCnx;
}

@property (nonatomic, copy) NSString *appBundleID;
@property (nonatomic) int audioScore;
@property (nonatomic) unsigned int clientID;
@property (nonatomic, copy) NSString *deviceAddress;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic) unsigned int flags;
@property (nonatomic, copy) id /* block */ responseHandler;
@property (nonatomic, retain) NSXPCListenerEndpoint *testListenerEndpoint;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_activate;
- (bool)_ensureXPCStarted;
- (void)_handleServerDied;
- (void)_interrupted;
- (void)_invalidated;
- (void)_reportError:(id)arg1;
- (void)activate;
- (id)appBundleID;
- (int)audioScore;
- (unsigned int)clientID;
- (id)description;
- (id)deviceAddress;
- (id)dispatchQueue;
- (void)encodeWithCoder:(id)arg1;
- (unsigned int)flags;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)invalidate;
- (bool)isSystemContext;
- (id /* block */)responseHandler;
- (void)setAppBundleID:(id)arg1;
- (void)setAudioScore:(int)arg1;
- (void)setClientID:(unsigned int)arg1;
- (void)setDeviceAddress:(id)arg1;
- (void)setDispatchQueue:(id)arg1;
- (void)setFlags:(unsigned int)arg1;
- (void)setResponseHandler:(id /* block */)arg1;
- (void)setTestListenerEndpoint:(id)arg1;
- (id)testListenerEndpoint;
- (void)updateAudioState:(id)arg1 withState:(unsigned int)arg2;

@end
