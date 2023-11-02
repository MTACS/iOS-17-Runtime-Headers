
@interface SYAddLinkContextClient : NSObject {
    NSObject<OS_dispatch_queue> * __clientQueue;
    NSXPCConnection * __connection;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *_clientQueue;
@property (nonatomic, retain) NSXPCConnection *_connection;

- (void).cxx_destruct;
- (id)_clientQueue;
- (void)_configureConnectionAndResume;
- (id)_connection;
- (void)_createConnectionIfNeeded;
- (void)_invalidateConnection;
- (void)createConnectionWithEndpoint:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)set_clientQueue:(id)arg1;
- (void)set_connection:(id)arg1;
- (void)userDidRemoveContentItems:(id)arg1;
- (void)userEditDidAddContentItems:(id)arg1;
- (void)userWillAddLinkWithActivity:(id)arg1 completion:(id /* block */)arg2;

@end
