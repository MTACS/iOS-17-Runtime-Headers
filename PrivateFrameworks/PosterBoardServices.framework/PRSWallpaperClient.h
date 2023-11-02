
@interface PRSWallpaperClient : NSObject <PRSWallpaperObserverInitializing> {
    NSSet * _activePosterObservedRoles;
    unsigned long long  _changeVersions;
    BSServiceConnection<BSServiceConnectionHost> * _connection;
    NSString * _description;
    bool  _initialized;
    NSArray * _lastKnownPosterCollection;
    PRSServerPosterPath * _lastPaths;
    bool  _needsSandboxExtensions;
    unsigned long long  _observed;
    bool  _observingPathChanges;
    bool  _observingRoleActivePostersChanges;
    bool  _observingRolePosterCollectionChanges;
    bool  _observingRolePosterCollectionChangesNeedsSandboxExtension;
    bool  _observingSnapshotChanges;
    NSString * _posterCollectionChangesRole;
    <PRSWallpaperObserving> * _proxy;
    PRSWallpaperPublisher * _publisher;
    bool  _roleActivePosterObservedRolesNeedsSandboxExtension;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (oneway void)initializeWithKnownIdentities:(id)arg1 knownRoles:(id)arg2 knownCollection:(id)arg3;

@end
