
@interface SYNotesActivationClient : NSObject {
    NSObject<OS_dispatch_queue> * __clientQueue;
    NSXPCConnection * __connection;
}

@property (setter=_clientQueue:, nonatomic, retain) NSObject<OS_dispatch_queue> *_clientQueue;
@property (setter=_setConnection:, nonatomic, retain) NSXPCConnection *_connection;

- (void).cxx_destruct;
- (id)_clientQueue;
- (void)_clientQueue:(id)arg1;
- (id)_connection;
- (void)_ensureConnection;
- (void)_setConnection:(id)arg1;
- (void)activateNotesWithUserActivity:(id)arg1 completion:(id /* block */)arg2;
- (id)init;

@end
