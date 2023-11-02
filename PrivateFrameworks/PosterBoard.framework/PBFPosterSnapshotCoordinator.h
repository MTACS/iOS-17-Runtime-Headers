
@interface PBFPosterSnapshotCoordinator : NSObject <BSCancellable> {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSMapTable * _lock_definitionToSnapshotReservationMap;
    PRSServerPosterPath * _path;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasSnapshots;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) PRSServerPosterPath *path;
@property (nonatomic, readonly, copy) NSSet *snapshotURLs;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_lock_ingestImageAtURL:(id)arg1 forDefinition:(id)arg2 configuredProperties:(id)arg3 context:(id)arg4;
- (id)_lock_removeSnapshotsAtURLs:(id)arg1 checkIfOwner:(bool)arg2;
- (id)_lock_snapshotURLs:(bool)arg1;
- (void)cancel;
- (void)dealloc;
- (bool)hasSnapshots;
- (void)ingestSnapshotsByDefinition:(id)arg1 path:(id)arg2 configuredProperties:(id)arg3 context:(id)arg4;
- (void)ingestSnapshotsFromCoordinator:(id)arg1;
- (id)initWithPath:(id)arg1;
- (id)path;
- (void)removeAllSnapshots;
- (id)removeSnapshotsAtURLs:(id)arg1;
- (bool)snapshotExistsForDefinition:(id)arg1 configuredProperties:(id)arg2 context:(id)arg3;
- (id)snapshotReservationForDefinition:(id)arg1 configuredProperties:(id)arg2 context:(id)arg3;
- (id)snapshotURLForDefinition:(id)arg1 configuredProperties:(id)arg2 context:(id)arg3;
- (id)snapshotURLs;

@end
