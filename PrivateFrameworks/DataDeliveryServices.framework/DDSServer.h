
@interface DDSServer : NSObject <DDSManagingDelegate, NSXPCListenerDelegate> {
    NSMutableSet * _clientConnections;
    NSXPCListener * _listener;
    <DDSManaging> * _manager;
    <DDSAssetProviding> * _provider;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, readonly) NSMutableSet *clientConnections;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSXPCListener *listener;
@property (nonatomic, readonly) <DDSManaging> *manager;
@property (readonly) <DDSAssetProviding> *provider;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (readonly) Class superclass;

+ (id)interface;
+ (id)setUpAssertionStorageDirectory;
+ (id)sharedInstance;
+ (id)sharedInstanceWithConfiguration:(id)arg1;

- (void).cxx_destruct;
- (id)clientConnections;
- (void)dealloc;
- (void)handleEndedConnection:(id)arg1;
- (id)initWithXPCServiceName:(id)arg1 assertionStorageFileURL:(id)arg2;
- (id)listener;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (id)manager;
- (id)provider;
- (id)queue;
- (void)setCompatabilityVersion:(long long)arg1 forAssetType:(id)arg2;
- (void)start;

@end
