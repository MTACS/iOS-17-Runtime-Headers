
@interface PRSWallpaperPublisher : NSObject <BSServiceConnectionListenerDelegate> {
    BSServiceConnectionListener * _listener;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    bool  _lock_activated;
    double  _lock_changeVersionTimestamps;
    unsigned long long  _lock_changeVersions;
    NSMutableSet * _lock_clients;
    <PRSWallpaperPublisherDelegate> * _lock_delegate;
    PRSServerPosterPath * _lock_paths;
    NSMutableDictionary * _lock_roleToPath;
    NSMutableDictionary * _lock_roleToPosterCollections;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) <PRSWallpaperPublisherDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_initializeClient:(id)arg1;
- (void)_initializeClient:(id)arg1 withKnownIdentities:(id)arg2 knownRoles:(id)arg3 knownCollection:(id)arg4;
- (void)_lock_activateClientsIfNeeded;
- (id)_lock_buildActivePosterObserverUpdatesForClient:(id)arg1 updatedRoles:(id)arg2;
- (id)_lock_buildPosterCollectionUpdatesForClient:(id)arg1 role:(id)arg2 updatedPosterCollection:(id)arg3;
- (id)_lock_descriptionIfInvalidPaths:(const id*)arg1;
- (void)_lock_issuePosterCollectionUpdate:(id)arg1;
- (void)_lock_issueUpdateForRoles:(id)arg1;
- (void)_lock_noteChanged:(unsigned long long)arg1;
- (void)_lock_noteSnapshotUpdateForPath:(id)arg1 snapshotType:(id)arg2;
- (void)_lock_sendStateToClient:(id)arg1;
- (id)delegate;
- (id)init;
- (void)initializePosterCollectionForRoles:(id)arg1;
- (void)initializeRoles:(id)arg1;
- (void)initializeWithPaths:(const id*)arg1 recentlyChanged:(unsigned long long)arg2;
- (void)issuePosterCollectionUpdate:(id)arg1;
- (void)issueUpdateForRoles:(id)arg1;
- (void)listener:(id)arg1 didReceiveConnection:(id)arg2 withContext:(id)arg3;
- (void)noteSnapshotUpdateForPath:(id)arg1 snapshotType:(id)arg2;
- (void)setDelegate:(id)arg1;
- (void)updatePaths:(const id*)arg1;

@end
