
@interface STSXPCClientNotificationListener : NSObject <NSXPCListenerDelegate, STSXPCClientNotificationListenerProtocol> {
    NSObject<OS_dispatch_queue> * _callbackQueue;
    NSMutableArray * _delayWork;
    NSObject<STSXPCClientNotificationListenerDelegate> * _delegate;
    NSXPCListener * _xpc;
    NSXPCConnection * _xpcConnection;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _xpcUpdateLock;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *callbackQueue;
@property (nonatomic, readonly) bool connected;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) NSMutableArray *delayWork;
@property (nonatomic, readonly) NSObject<STSXPCClientNotificationListenerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSXPCListener *xpc;
@property (nonatomic, retain) NSXPCConnection *xpcConnection;
@property (nonatomic, readonly) NSXPCListenerEndpoint *xpcEndpoint;
@property (nonatomic) struct os_unfair_lock_s { unsigned int x1; } xpcUpdateLock;

- (void).cxx_destruct;
- (id)_asynchronousRemoteProxyWithErrorHandler:(id /* block */)arg1;
- (void)_executeWhenXPCAvailable:(id /* block */)arg1;
- (id)_generateFromCredRequest:(id)arg1;
- (id)_stsHandoverNotificationListenerCallbackProtocol;
- (id)_stsHandoverNotificationListenerProtocol;
- (id)_synchronousRemoteProxyWithErrorHandler:(id /* block */)arg1;
- (unsigned long long)_translateFromCarrierConnectionStatus:(unsigned long long)arg1;
- (void)activateISO18013CredentialWithIdentifier:(id)arg1 elementSelection:(id)arg2 authData:(id)arg3 completion:(id /* block */)arg4;
- (oneway void)alternativeCarrierConnectedWithStatus:(unsigned long long)arg1;
- (oneway void)alternativeCarrierDisconnectedWithStatus:(unsigned long long)arg1;
- (void)alternativerCarrierSend:(id)arg1 completion:(id /* block */)arg2;
- (id)callbackQueue;
- (bool)connected;
- (void)dealloc;
- (id)delayWork;
- (id)delegate;
- (oneway void)dummyStart;
- (id)initWithDelegate:(id)arg1 queue:(id)arg2;
- (void)invalidateXPCConnection;
- (oneway void)iso18013ReaderReceive:(id)arg1 sessionDataStatus:(id)arg2 status:(id)arg3;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (oneway void)processCredentialRequestList:(id)arg1 readerAuthInfo:(id)arg2;
- (oneway void)receivedRawDataFromAlternativeCarrier:(id)arg1 dataPending:(bool)arg2;
- (void)sendConnectionHandoverCompleted;
- (void)sendConnectionHandoverStarted;
- (void)sendISO18013SessionData:(id)arg1 status:(id)arg2 completion:(id /* block */)arg3;
- (void)sendISO18013SessionEstablishment:(id)arg1 completion:(id /* block */)arg2;
- (oneway void)sessionTranscriptGenerated:(id)arg1;
- (void)setCallbackQueue:(id)arg1;
- (void)setDelayWork:(id)arg1;
- (id)setRequestHandoverConfirmation:(bool)arg1;
- (void)setXpc:(id)arg1;
- (void)setXpcConnection:(id)arg1;
- (void)setXpcUpdateLock:(struct os_unfair_lock_s { unsigned int x1; })arg1;
- (id)startHandoff;
- (void)testGetRemoteTransceiverProxyXPCEndpointWithType:(unsigned long long)arg1 completion:(id /* block */)arg2;
- (oneway void)transactionEndedWithIdentifier:(id)arg1 error:(id)arg2;
- (oneway void)transactionStarted:(unsigned long long)arg1;
- (id)xpc;
- (id)xpcConnection;
- (id)xpcEndpoint;
- (struct os_unfair_lock_s { unsigned int x1; })xpcUpdateLock;

@end
