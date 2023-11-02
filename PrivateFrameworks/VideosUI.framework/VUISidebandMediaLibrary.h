
@interface VUISidebandMediaLibrary : VUIDeviceMediaLibrary {
    NSManagedObjectContext * _backgroundManagedObjectContext;
    NSPersistentContainer * _persistentContainer;
    NSObject<OS_dispatch_queue> * _serialQueue;
}

@property (nonatomic, retain) NSManagedObjectContext *backgroundManagedObjectContext;
@property (nonatomic, retain) NSPersistentContainer *persistentContainer;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *serialQueue;

+ (void)initialize;
+ (void)setDeleteAllVideosAndKeysOnInitializationForAppRemoval:(bool)arg1;

- (void).cxx_destruct;
- (void)_activeAccountDidChange:(id)arg1;
- (void)_deleteOrphanedDownloads;
- (void)_deleteVideoManagedObjects:(id)arg1;
- (id)_downloadedVideosForNonSignedInUsers;
- (void)_dumpDatabaseToLogIfEnabled;
- (id)_imageLoadOperationWithParams:(id)arg1 scaleToSize:(struct CGSize { double x1; double x2; })arg2 cropToFit:(bool)arg3;
- (id)_imageLoadParamsForImageLoaderObject:(id)arg1;
- (id)_imageLoaderIdentifier;
- (bool)_invalidateKeysForVideoManagedObject:(id)arg1 saveWhenDone:(bool)arg2 invalidateImmediately:(bool)arg3;
- (id)_mainContextManagedObjectsForObjects:(id)arg1;
- (void)_mainQueueManagedObjectContextDidSave:(id)arg1;
- (id)_managedObjectWithEntityName:(id)arg1 predicate:(id)arg2 createIfNeeded:(bool)arg3 wasCreated:(bool*)arg4;
- (void)_migrateVideoExpirationDateAndAllowsManualRenewal;
- (id)_movieForAdamID:(id)arg1 createIfNeeded:(bool)arg2 wasCreated:(bool*)arg3;
- (void)_pruneVideosAtAppLaunchWithCompletion:(id /* block */)arg1;
- (bool)_removeDownloadedMediaForVideoManagedObject:(id)arg1 markAsDeleted:(bool)arg2 saveWhenDone:(bool)arg3 invalidateImmediately:(bool)arg4;
- (void)_removeDownloadsForNonSignedInUsers;
- (id)_tvEpisodeForAdamID:(id)arg1 createIfNeeded:(bool)arg2 wasCreated:(bool*)arg3;
- (id)_tvSeasonForAdamID:(id)arg1 createIfNeeded:(bool)arg2 wasCreated:(bool*)arg3;
- (id)_tvSeasonForCanonicalID:(id)arg1 createIfNeeded:(bool)arg2 wasCreated:(bool*)arg3;
- (id)_tvSeriesForAdamID:(id)arg1 createIfNeeded:(bool)arg2 wasCreated:(bool*)arg3;
- (id)_tvSeriesForCanonicalID:(id)arg1 createIfNeeded:(bool)arg2 wasCreated:(bool*)arg3;
- (id)_videosMarkedAsDeleted;
- (id)allFpsKeyDeletionInfos;
- (id)backgroundManagedObjectContext;
- (unsigned long long)countOfDownloadingOrDownloadedSubscriptionVideosForNonMainQueue;
- (void)dealloc;
- (void)deleteFPSKeyDeletionInfo:(id)arg1;
- (void)deleteFPSKeyDeletionInfos:(id)arg1;
- (id)enqueueFetchRequests:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)enqueueMediaItemEntityTypesFetchWithCompletionHandler:(id /* block */)arg1;
- (id)existingFpsKeyInfoForKeyURI:(id)arg1;
- (id)fpsKeyInfoForVideo:(id)arg1 keyURI:(id)arg2 createIfNeeded:(bool)arg3 wasCreated:(bool*)arg4;
- (id)imageInfoForSeries:(id)arg1 imageType:(unsigned long long)arg2 createIfNeeded:(bool)arg3 wasCreated:(bool*)arg4;
- (id)imageInfoForVideo:(id)arg1 imageType:(unsigned long long)arg2 createIfNeeded:(bool)arg3 wasCreated:(bool*)arg4;
- (id)initWithManager:(id)arg1;
- (void)invalidateKeysForVideoManagedObject:(id)arg1;
- (void)invalidateKeysForVideoManagedObjects:(id)arg1;
- (id)mainContextVideoForVideo:(id)arg1;
- (id)performFetch:(id)arg1;
- (id)persistentContainer;
- (void)removeDownloadedMediaForVideoManagedObject:(id)arg1 markAsDeleted:(bool)arg2 invalidateImmediately:(bool)arg3;
- (void)removeDownloadedMediaForVideoManagedObjects:(id)arg1 markAsDeleted:(bool)arg2 invalidateImmediately:(bool)arg3;
- (void)saveChangesToManagedObjects;
- (id)saveMediaEntity:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)serialQueue;
- (id)seriesForCanonicalIDOrAdamID:(id)arg1;
- (void)setBackgroundManagedObjectContext:(id)arg1;
- (void)setPersistentContainer:(id)arg1;
- (void)setSerialQueue:(id)arg1;
- (id)title;
- (id)videoForAdamID:(id)arg1 useMainThreadContext:(bool)arg2;
- (id)videoForMPMediaItem:(id)arg1;
- (id)videoForPlayable:(id)arg1;
- (id)videosForAdamIDs:(id)arg1 useMainThreadContext:(bool)arg2;
- (id)videosWithDownloadState:(long long)arg1 entitlementTypes:(id)arg2 useMainThreadContext:(bool)arg3;
- (id)videosWithDownloadStates:(id)arg1 entitlementTypes:(id)arg2 useMainThreadContext:(bool)arg3;
- (id)videosWithExpiredDownloadsUsingMainThreadContext:(bool)arg1;

@end
