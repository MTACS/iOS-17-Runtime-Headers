
@interface KVXPCClient : NSObject {
    NSString * _clientId;
    NSXPCConnection * _connection;
    unsigned short  _failureCode;
    unsigned short  _interruptionCode;
}

@property (nonatomic, readonly) NSString *clientId;
@property (retain) NSXPCConnection *connection;
@property unsigned short failureCode;
@property (nonatomic, readonly) unsigned short interruptionCode;

+ (void)initialize;

- (void).cxx_destruct;
- (id /* block */)_errorHandlerWithCompletion:(id /* block */)arg1;
- (id /* block */)_failureHandlerWithResponse:(unsigned short)arg1;
- (id)_remoteObjectProxy:(bool)arg1 errorCompletion:(id /* block */)arg2;
- (id)clientId;
- (id)connection;
- (void)dealloc;
- (unsigned short)failureCode;
- (id)init;
- (id)initWithServiceProtocol:(id)arg1 machServiceName:(id)arg2 clientId:(id)arg3 interruptionCode:(unsigned short)arg4 invalidationCode:(unsigned short)arg5;
- (unsigned short)interruptionCode;
- (void)serviceArrayRespondingRequestWithCompletion:(id /* block */)arg1 usingBlock:(id /* block */)arg2;
- (void)serviceOptionsRespondingRequest:(bool)arg1 completion:(id /* block */)arg2 usingBlock:(id /* block */)arg3;
- (void)serviceRequest:(bool)arg1 completion:(id /* block */)arg2 usingBlock:(id /* block */)arg3;
- (void)serviceVersionRespondingRequest:(bool)arg1 completion:(id /* block */)arg2 usingBlock:(id /* block */)arg3;
- (void)setConnection:(id)arg1;
- (void)setFailureCode:(unsigned short)arg1;

@end
