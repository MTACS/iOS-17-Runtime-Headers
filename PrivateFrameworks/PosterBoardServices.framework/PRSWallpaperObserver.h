
@interface PRSWallpaperObserver : NSObject <BSInvalidatable, PRSWallpaperObserving> {
    NSString * _active_observedDescription;
    NSMutableDictionary * _conn_configurationByIdentity;
    PRSServerPosterIdentity * _conn_identityLocations;
    NSArray * _conn_knownPostersCollection;
    NSString * _conn_knownPostersCollectionRole;
    NSMutableDictionary * _conn_roleToActivePosterConfiguration;
    NSString * _explanation;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    bool  _lock_clientActivated;
    bool  _lock_clientInvalidated;
    BSServiceConnection<BSServiceConnectionClient> * _lock_connection;
    bool  _lock_initialLocationStateUpdateWasSent;
    RBSAssertion * _lock_initialUpdateAssertion;
    bool  _lock_invalidated;
    id /* block */  _lock_pathHandler;
    PRSPosterRoleActivePosterObserver * _lock_roleActivePosterObserver;
    PRSPosterRoleCollectionObserver * _lock_rolePosterCollectionObserver;
    id /* block */  _lock_snapshotHandler;
    unsigned long long  _observed;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_lock_invalidate;
- (void)activateWithConfiguration:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithExplanation:(id)arg1;
- (void)invalidate;
- (oneway void)notifyRoleActivePosterUpdates:(id)arg1;
- (oneway void)notifyRolePosterCollectionUpdates:(id)arg1;
- (oneway void)notifySnapshotUpdates:(id)arg1;
- (oneway void)notifyWallpaperUpdates:(id)arg1;

@end
