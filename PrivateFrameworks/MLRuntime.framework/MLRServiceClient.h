
@interface MLRServiceClient : NSObject {
    NSXPCConnection * _connection;
}

+ (id)sharedConnection;

- (void).cxx_destruct;
- (void)dealloc;
- (void)donateJSONResult:(id)arg1 identifier:(id)arg2 completion:(id /* block */)arg3;
- (id)initWithConnection:(id)arg1;
- (void)performOnRemoteObjecWithBlock:(id /* block */)arg1 errorHandler:(id /* block */)arg2;
- (void)performOnRemoteObjecWithBlock:(id /* block */)arg1 isSynchronous:(bool)arg2 errorHandler:(id /* block */)arg3;
- (void)performSynchronouslyOnRemoteObjecWithBlock:(id /* block */)arg1 errorHandler:(id /* block */)arg2;

@end
