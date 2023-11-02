
@interface AXUIClient : NSObject <AXUIClientConnectionStateObserver, AXUIMessageSenderDelegate> {
    AXUIClientConnection * _clientConnection;
    NSString * _clientIdentifier;
    <AXUIClientDelegate> * _delegate;
    NSDictionary * _initializationMessage;
    AXUIMessageSender * _messageSender;
    bool  _registeredWithServer;
    NSString * _serviceBundleName;
}

@property (nonatomic, retain) AXUIClientConnection *clientConnection;
@property (nonatomic, copy) NSString *clientIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <AXUIClientDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSDictionary *initializationMessage;
@property (nonatomic, retain) AXUIMessageSender *messageSender;
@property (getter=isRegisteredWithServer, nonatomic) bool registeredWithServer;
@property (nonatomic, copy) NSString *serviceBundleName;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_cleanUp;
- (void)_requestInitializationMessageFromDelegateIfNeeded;
- (id)clientConnection;
- (void)clientConnection:(id)arg1 didChangeConnectedState:(bool)arg2;
- (id)clientIdentifier;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (id)initWithIdentifier:(id)arg1 serviceBundleName:(id)arg2;
- (id)initializationMessage;
- (void)invalidate:(id /* block */)arg1;
- (bool)isRegisteredWithServer;
- (id)messageSender;
- (void)messageSender:(id)arg1 accessLaunchAngelConnectionForMessageWithContext:(void*)arg2 usingBlock:(id /* block */)arg3;
- (void)messageSender:(id)arg1 accessXPCConnectionForMessageWithContext:(void*)arg2 usingBlock:(id /* block */)arg3;
- (void*)messageSender:(id)arg1 extractCustomDataFromXPCReply:(id)arg2 numberOfKeyValuePairsForCustomData:(unsigned long long*)arg3;
- (void)messageSender:(id)arg1 processCustomDataFromXPCReply:(void*)arg2;
- (void)messageSender:(id)arg1 willSendXPCMessage:(id)arg2 context:(void*)arg3;
- (void)sendAsynchronousMessage:(id)arg1 withIdentifier:(unsigned long long)arg2 targetAccessQueue:(id)arg3 completion:(id /* block */)arg4;
- (void)sendAsynchronousMessage:(id)arg1 withIdentifier:(unsigned long long)arg2 targetAccessQueue:(id)arg3 completionRequiresWritingBlock:(bool)arg4 completion:(id /* block */)arg5;
- (id)sendSynchronousMessage:(id)arg1 withIdentifier:(unsigned long long)arg2 error:(id*)arg3;
- (id)serviceBundleName;
- (void)setClientConnection:(id)arg1;
- (void)setClientIdentifier:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setInitializationMessage:(id)arg1;
- (void)setMessageSender:(id)arg1;
- (void)setRegisteredWithServer:(bool)arg1;
- (void)setServiceBundleName:(id)arg1;

@end
