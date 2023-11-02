
@interface PBFWallpaperPublisher : NSObject <PRSWallpaperPublisherDelegate> {
    <PBFWallpaperPublisherDelegate> * _delegate;
    NSMutableDictionary * _isPairedByUUID;
    PRSServerPosterPath * _lastSentPaths;
    PRSServerPosterPath * _paths;
    NSMutableDictionary * _pathsByUUID;
    PRSWallpaperPublisher * _wallpaperPublisher;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) <PBFWallpaperPublisherDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_compact;
- (unsigned long long)_update;
- (bool)_updatePath:(id)arg1 addingIfNotExists:(bool)arg2;
- (void)_updateSelectedLockPath:(id)arg1 selectedHomePath:(id)arg2 activeLockPath:(id)arg3 activeHomePath:(id)arg4;
- (void)activatePublishingOfCollectionsForRole:(id)arg1;
- (void)activatePublishingOfRoles:(id)arg1;
- (void)activateWithSelectedLockPath:(id)arg1 selectedHomePath:(id)arg2 activeLockPath:(id)arg3 activeHomePath:(id)arg4 recentlyChanged:(bool)arg5;
- (id)delegate;
- (id)init;
- (void)issuePosterCollectionUpdate:(id)arg1;
- (void)issueUpdateForRoles:(id)arg1;
- (void)noteSnapshotUpdateForPath:(id)arg1 snapshotType:(id)arg2;
- (void)setDelegate:(id)arg1;
- (void)updateHomePath:(id)arg1 matchingLockPath:(id)arg2;
- (void)updatePath:(id)arg1;
- (void)updateSelectedLockPath:(id)arg1 selectedHomePath:(id)arg2 activeLockPath:(id)arg3 activeHomePath:(id)arg4;
- (void)wallpaperPublisherDidReceiveObserverConnection;

@end
