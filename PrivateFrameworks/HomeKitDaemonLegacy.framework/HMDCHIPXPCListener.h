
@interface HMDCHIPXPCListener : HMFObject <HMFLogging, NSXPCListenerDelegate> {
    NSXPCInterface * _exportedInterface;
    HMDHomeManager * _homeManager;
    NSXPCListener * _listener;
    NSXPCInterface * _remoteObjectInterface;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSXPCInterface *exportedInterface;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HMDHomeManager *homeManager;
@property (readonly) NSXPCListener *listener;
@property (nonatomic, readonly) NSXPCInterface *remoteObjectInterface;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *workQueue;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)createClientConnectionWithRemoteObjectProxy:(id)arg1 homeManager:(id)arg2 pid:(int)arg3;
- (id)exportedInterface;
- (id)homeManager;
- (id)initWithHomeManager:(id)arg1;
- (id)listener;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (id)remoteObjectInterface;
- (void)start;
- (void)stop;
- (id)workQueue;

@end
