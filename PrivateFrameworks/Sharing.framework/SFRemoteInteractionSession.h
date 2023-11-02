
@interface SFRemoteInteractionSession : NSObject <NSSecureCoding, SFXPCInterface> {
    bool  _activateCalled;
    SDRemoteInteractionAgent * _agent;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    id /* block */  _interruptionHandler;
    bool  _invalidateCalled;
    bool  _invalidateDone;
    id /* block */  _invalidationHandler;
    SFDevice * _peerDevice;
    SFSession * _remoteSession;
    id /* block */  _remoteTextEventHandler;
    id /* block */  _textSessionDidBegin;
    id /* block */  _textSessionDidChange;
    id /* block */  _textSessionDidEnd;
    NSXPCConnection * _xpcCnx;
}

@property (nonatomic, retain) SDRemoteInteractionAgent *agent;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic, copy) id /* block */ interruptionHandler;
@property (nonatomic, copy) id /* block */ invalidationHandler;
@property (nonatomic, retain) SFDevice *peerDevice;
@property (nonatomic, copy) id /* block */ remoteTextEventHandler;
@property (nonatomic, copy) id /* block */ textSessionDidBegin;
@property (nonatomic, copy) id /* block */ textSessionDidChange;
@property (nonatomic, copy) id /* block */ textSessionDidEnd;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_activateWithCompletion:(id /* block */)arg1;
- (void)_ensureXPCStarted;
- (void)_interrupted;
- (void)_invalidate;
- (void)_invalidated;
- (void)_sessionHandleEvent:(id)arg1;
- (void)_sessionSendPayload:(id)arg1;
- (void)_sessionStart;
- (void)activateWithCompletion:(id /* block */)arg1;
- (id)agent;
- (id)description;
- (id)dispatchQueue;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id /* block */)interruptionHandler;
- (void)invalidate;
- (id /* block */)invalidationHandler;
- (id)peerDevice;
- (void)remoteInteractionSessionRemoteTextEvent:(id)arg1;
- (void)remoteInteractionSessionTextSessionDidBegin:(id)arg1;
- (void)remoteInteractionSessionTextSessionDidChange:(id)arg1;
- (void)remoteInteractionSessionTextSessionDidEnd:(id)arg1;
- (id /* block */)remoteTextEventHandler;
- (void)sendPayload:(id)arg1;
- (void)setAgent:(id)arg1;
- (void)setDispatchQueue:(id)arg1;
- (void)setInterruptionHandler:(id /* block */)arg1;
- (void)setInvalidationHandler:(id /* block */)arg1;
- (void)setPeerDevice:(id)arg1;
- (void)setRemoteTextEventHandler:(id /* block */)arg1;
- (void)setTextSessionDidBegin:(id /* block */)arg1;
- (void)setTextSessionDidChange:(id /* block */)arg1;
- (void)setTextSessionDidEnd:(id /* block */)arg1;
- (id /* block */)textSessionDidBegin;
- (id /* block */)textSessionDidChange;
- (id /* block */)textSessionDidEnd;

@end
