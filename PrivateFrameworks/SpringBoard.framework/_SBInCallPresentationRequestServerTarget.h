
@interface _SBInCallPresentationRequestServerTarget : NSObject <SBSInCallPresentationClientToServerInterface> {
    NSUUID * _clientIdentifier;
    BSServiceConnection * _connection;
    <SBSInCallPresentationClientToServerInterface> * _proxyInterface;
}

@property (nonatomic, readonly, copy) NSUUID *clientIdentifier;
@property (nonatomic, readonly) BSServiceConnection *connection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) <SBSInCallPresentationClientToServerInterface> *proxyInterface;
@property (readonly) Class superclass;

+ (id)currentTarget;

- (void).cxx_destruct;
- (void)_performBlock:(id /* block */)arg1;
- (id)clientIdentifier;
- (id)connection;
- (id)initWithConnection:(id)arg1 proxyInterface:(id)arg2;
- (oneway void)presentWithConfiguration:(id)arg1 completion:(id /* block */)arg2;
- (id)proxyInterface;
- (void)setProxyInterface:(id)arg1;

@end
