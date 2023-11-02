
@interface AMSUniversalLinksConnection : NSObject {
    NSXPCConnection * _connection;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, retain) NSXPCConnection *connection;
@property (nonatomic, readonly) <AMSUniversalLinksServiceProtocol> *proxy;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;

- (void).cxx_destruct;
- (id)_makeRemoteConnectionInterface;
- (id)_newRemoteConnection;
- (void)_removeRemoteConnection;
- (id)connection;
- (void)dealloc;
- (id)init;
- (id)proxy;
- (id)queue;
- (void)setConnection:(id)arg1;
- (void)setQueue:(id)arg1;

@end
