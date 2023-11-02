
@interface SLDServiceCenter : NSObject {
    NSXPCConnection * _conn;
    NSObject<OS_dispatch_queue> * _mainConnectionSetupQueue;
    NSObject<OS_dispatch_queue> * _propertyConcurrentQueue;
}

@property (nonatomic, retain) NSXPCConnection *conn;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *mainConnectionSetupQueue;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *propertyConcurrentQueue;

+ (id)sharedCenter;

- (void).cxx_destruct;
- (void)_ensureMainConnectionSynchronously;
- (id)_synchronousRemoteObjectProxy;
- (id)conn;
- (id)connectionForServiceClass:(Class)arg1;
- (id)init;
- (id)mainConnectionSetupQueue;
- (id)propertyConcurrentQueue;
- (void)setConn:(id)arg1;

@end
