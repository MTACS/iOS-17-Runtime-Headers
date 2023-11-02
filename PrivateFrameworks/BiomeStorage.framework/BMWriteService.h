
@interface BMWriteService : NSObject <BMWriteServiceClient> {
    NSXPCConnection * _connection;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSString * _useCase;
}

@property (nonatomic, retain) NSXPCConnection *connection;

- (void).cxx_destruct;
- (id)connection;
- (void)connectionInvalidated;
- (void)dealloc;
- (id)initWithUseCase:(id)arg1;
- (id)newConnection;
- (void)requestBiomeEndpointForAppScopedService:(bool)arg1 reply:(id /* block */)arg2;
- (void)setConnection:(id)arg1;
- (id)synchronousRemoteObjectProxyWithErrorHandler:(id /* block */)arg1;
- (bool)writeData:(id)arg1 version:(unsigned int)arg2 timestamp:(double)arg3 toStream:(id)arg4 asUser:(unsigned int)arg5 error:(id*)arg6;

@end
