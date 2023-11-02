
@interface CDDCloudKitServer : NSObject <CDDCloudKitServerProxy, NSXPCListenerDelegate, _PFCoreDataCloudKitServer> {
    CDDCloudKitServerConfiguration * _configuration;
    PFCloudKitContainerProvider * _containerProvider;
    NSObject<OS_dispatch_group> * _initializationGroup;
    bool  _initialized;
    NSError * _lastInitializationError;
    NSXPCListener * _listener;
    NSPersistentContainer * _metadataContainer;
    CKScheduler * _scheduler;
}

@property (nonatomic, readonly, copy) CDDCloudKitServerConfiguration *configuration;
@property (nonatomic, readonly) PFCloudKitContainerProvider *containerProvider;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSXPCListener *listener;
@property (nonatomic, readonly) CKScheduler *scheduler;
@property (readonly) Class superclass;

- (id)configuration;
- (id)containerProvider;
- (void)dealloc;
- (void)finishedActivity:(id)arg1 withResult:(id)arg2 inManagedObjectContext:(id)arg3;
- (oneway void)handleMessage:(id)arg1 reply:(id /* block */)arg2;
- (id)initWithListener:(id)arg1 configuration:(id)arg2;
- (id)listener;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (id)scheduler;
- (void)setUp;
- (void)tearDown;

@end
