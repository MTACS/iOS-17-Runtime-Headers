
@interface REUpNextSiriClient : NSObject {
    NSXPCConnection * _connection;
    NSObject<OS_dispatch_queue> * _queue;
}

- (void).cxx_destruct;
- (void)_performOnRemoteObject:(id /* block */)arg1;
- (void)completedRequestWithDomain:(id)arg1;
- (void)dealloc;
- (id)init;

@end
