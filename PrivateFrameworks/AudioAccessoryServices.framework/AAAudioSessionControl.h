
@interface AAAudioSessionControl : NSObject <NSSecureCoding> {
    bool  _activateCalled;
    id /* block */  _activateCompletion;
    unsigned int  _clientID;
    int  _conversationDetectSignal;
    bool  _direct;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    id /* block */  _interruptionHandler;
    bool  _invalidateCalled;
    bool  _invalidateDone;
    id /* block */  _invalidationHandler;
    NSXPCListenerEndpoint * _testListenerEndpoint;
    NSXPCConnection * _xpcCnx;
}

@property (nonatomic) unsigned int clientID;
@property (nonatomic) int conversationDetectSignal;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic, copy) id /* block */ interruptionHandler;
@property (nonatomic, copy) id /* block */ invalidationHandler;
@property (nonatomic, retain) NSXPCListenerEndpoint *testListenerEndpoint;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_activate:(bool)arg1;
- (void)_activateDirect:(id /* block */)arg1;
- (void)_activateXPC:(id /* block */)arg1 reactivate:(bool)arg2;
- (void)_ensureXPCStarted;
- (void)_interrupted;
- (void)_invalidateDirect;
- (void)_invalidated;
- (void)_reportError:(id)arg1;
- (void)activateWithCompletion:(id /* block */)arg1;
- (unsigned int)clientID;
- (int)conversationDetectSignal;
- (id)description;
- (id)dispatchQueue;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id /* block */)interruptionHandler;
- (void)invalidate;
- (id /* block */)invalidationHandler;
- (bool)isSystemContext;
- (void)setClientID:(unsigned int)arg1;
- (void)setConversationDetectSignal:(int)arg1;
- (void)setDispatchQueue:(id)arg1;
- (void)setInterruptionHandler:(id /* block */)arg1;
- (void)setInvalidationHandler:(id /* block */)arg1;
- (void)setMuteAction:(int)arg1 auditToken:(struct { unsigned int x1[8]; })arg2;
- (void)setMuteAction:(int)arg1 auditToken:(struct { unsigned int x1[8]; })arg2 bundleIdentifier:(id)arg3;
- (void)setTestListenerEndpoint:(id)arg1;
- (id)testListenerEndpoint;

@end
