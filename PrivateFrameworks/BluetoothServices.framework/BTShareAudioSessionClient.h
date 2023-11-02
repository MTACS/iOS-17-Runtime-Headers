
@interface BTShareAudioSessionClient : NSObject <NSSecureCoding> {
    bool  _activateCalled;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    bool  _invalidateCalled;
    bool  _invalidateDone;
    int  _mode;
    id /* block */  _progressHandler;
    NSXPCListenerEndpoint * _testListenerEndpoint;
    NSXPCConnection * _xpcCnx;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic) int mode;
@property (nonatomic, copy) id /* block */ progressHandler;
@property (nonatomic, retain) NSXPCListenerEndpoint *testListenerEndpoint;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_activate:(bool)arg1;
- (void)_ensureXPCStarted;
- (void)_interrupted;
- (void)_invalidated;
- (void)activate;
- (id)dispatchQueue;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)invalidate;
- (int)mode;
- (id /* block */)progressHandler;
- (void)setDispatchQueue:(id)arg1;
- (void)setMode:(int)arg1;
- (void)setProgressHandler:(id /* block */)arg1;
- (void)setTestListenerEndpoint:(id)arg1;
- (void)shareAudioProgressEvent:(int)arg1 info:(id)arg2;
- (id)testListenerEndpoint;
- (void)userConfirmed:(bool)arg1;

@end
