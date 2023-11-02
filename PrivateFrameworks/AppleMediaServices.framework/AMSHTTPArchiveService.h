
@interface AMSHTTPArchiveService : NSObject {
    NSXPCConnection * _connection;
    id /* block */  _errorHandler;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, retain) NSXPCConnection *connection;
@property (nonatomic, copy) id /* block */ errorHandler;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;

+ (id)_sharedProxy;
+ (void)recordTrafficWithTaskInfo:(id)arg1;

- (void).cxx_destruct;
- (id)_createProxy;
- (id)_createRemoteConnection;
- (void)_removeRemoteConnection;
- (id)connection;
- (void)dealloc;
- (id /* block */)errorHandler;
- (id)init;
- (id)queue;
- (void)setConnection:(id)arg1;
- (void)setErrorHandler:(id /* block */)arg1;
- (void)setQueue:(id)arg1;

@end
