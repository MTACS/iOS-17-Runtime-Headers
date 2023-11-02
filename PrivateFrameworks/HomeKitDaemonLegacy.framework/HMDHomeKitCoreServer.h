
@interface HMDHomeKitCoreServer : HMFObject <HMFLogging> {
    NSObject<OS_xpc_object> * _homekitCoreXPCConnection;
    NSObject<OS_dispatch_queue> * _homekitCoreXPCQueue;
    NSObject<OS_xpc_object> * _homekitCoreXPCStoreConnection;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSObject<OS_xpc_object> *homekitCoreXPCConnection;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *homekitCoreXPCQueue;
@property (nonatomic, retain) NSObject<OS_xpc_object> *homekitCoreXPCStoreConnection;
@property (readonly) Class superclass;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)_handleXPCEvent:(id)arg1;
- (void)_startUpEmptyMachServices;
- (void)configureWithQueue:(id)arg1;
- (id)homekitCoreXPCConnection;
- (id)homekitCoreXPCQueue;
- (id)homekitCoreXPCStoreConnection;
- (void)setHomekitCoreXPCConnection:(id)arg1;
- (void)setHomekitCoreXPCQueue:(id)arg1;
- (void)setHomekitCoreXPCStoreConnection:(id)arg1;

@end
