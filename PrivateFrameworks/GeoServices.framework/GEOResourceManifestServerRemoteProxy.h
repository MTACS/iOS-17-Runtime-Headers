
@interface GEOResourceManifestServerRemoteProxy : NSObject <GEOResourceManifestServerProxy> {
    int  _activeTileGroupChangedNotificationToken;
    NSString * _authToken;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _authTokenLock;
    GEOResourceManifestConfiguration * _configuration;
    <GEOResourceManifestServerProxyDelegate> * _delegate;
    bool  _hasOpenConnection;
    bool  _isLoadingResources;
    bool  _isUpdatingManifest;
    NSMutableDictionary * _maximumZoomLevelCache;
    geo_isolater * _maximumZoomLevelIsolation;
    NSObject<OS_dispatch_queue> * _serverQueue;
    GEOXPCConnection * _xpcConnection;
}

@property (nonatomic, readonly) GEOActiveTileGroup *activeTileGroup;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <GEOResourceManifestServerProxyDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_handleMessage:(id)arg1 xpcMessage:(id)arg2;
- (void)activateResourceScale:(int)arg1;
- (void)activateResourceScenario:(int)arg1;
- (id)activeTileGroup;
- (id)authToken;
- (void)cancelCurrentManifestUpdate;
- (void)closeConnection;
- (id)configuration;
- (void)deactivateResourceScale:(int)arg1;
- (void)deactivateResourceScenario:(int)arg1;
- (void)dealloc;
- (id)delegate;
- (void)forceUpdate:(long long)arg1 completionHandler:(id /* block */)arg2;
- (void)getResourceManifestWithHandler:(id /* block */)arg1;
- (id)initWithDelegate:(id)arg1 configuration:(id)arg2;
- (unsigned int)maximumZoomLevelForStyle:(int)arg1 scale:(int)arg2 outSize:(int*)arg3;
- (void)openConnection;
- (void)performOpportunisticResourceLoading;
- (oneway void)resetActiveTileGroup;
- (id)serverQueue;
- (oneway void)setActiveTileGroupIdentifier:(id)arg1;
- (void)setActiveTileGroupIdentifier:(id)arg1 updateType:(long long)arg2 completionHandler:(id /* block */)arg3;
- (void)setDelegate:(id)arg1;
- (void)setManifestToken:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)updateIfNecessary:(id /* block */)arg1;
- (id)updateProgress;

@end
