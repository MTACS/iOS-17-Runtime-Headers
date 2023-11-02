
@interface AAController : NSObject {
    bool  _activateCalled;
    id /* block */  _activateCompletion;
    unsigned int  _clientID;
    id /* block */  _conversationDetectMessageHandler;
    unsigned int  _coreBluetoothInternalFlag;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    id /* block */  _interruptionHandler;
    bool  _invalidateCalled;
    bool  _invalidateDone;
    id /* block */  _invalidationHandler;
    NSObject<OS_xpc_object> * _xpcCnx;
}

@property (nonatomic) unsigned int clientID;
@property (nonatomic, copy) id /* block */ conversationDetectMessageHandler;
@property (nonatomic) unsigned int coreBluetoothInternalFlag;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic, copy) id /* block */ interruptionHandler;
@property (nonatomic, copy) id /* block */ invalidationHandler;

- (void).cxx_destruct;
- (void)_activate;
- (void)_activateXPC:(bool)arg1;
- (void)_activateXPCCompleted:(id)arg1;
- (void)_conversationDetectMessageReceived:(id)arg1 fromDevice:(id)arg2;
- (id)_ensureXPCStarted;
- (void)_interrupted;
- (void)_invalidated;
- (void)_xpcReceivedAccessoryEvent:(id)arg1;
- (void)_xpcReceivedMessage:(id)arg1;
- (void)activateWithCompletion:(id /* block */)arg1;
- (unsigned int)clientID;
- (id /* block */)conversationDetectMessageHandler;
- (unsigned int)coreBluetoothInternalFlag;
- (id)description;
- (id)dispatchQueue;
- (id)init;
- (id /* block */)interruptionHandler;
- (void)invalidate;
- (id /* block */)invalidationHandler;
- (void)sendConversationDetectMessage:(id)arg1 destinationIdentifier:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)setClientID:(unsigned int)arg1;
- (void)setConversationDetectMessageHandler:(id /* block */)arg1;
- (void)setCoreBluetoothInternalFlag:(unsigned int)arg1;
- (void)setDispatchQueue:(id)arg1;
- (void)setInterruptionHandler:(id /* block */)arg1;
- (void)setInvalidationHandler:(id /* block */)arg1;
- (void)xpcReceivedMessage:(id)arg1;

@end
