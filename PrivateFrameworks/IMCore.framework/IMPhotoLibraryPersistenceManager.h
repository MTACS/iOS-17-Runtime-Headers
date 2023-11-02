
@interface IMPhotoLibraryPersistenceManager : NSObject <PHPhotoLibraryChangeObserver> {
    bool  _libraryAlreadyOpened;
    NSHashTable * _listeners;
    CPLRUDictionary * _syndicationIdentifierSaveStateCache;
    NSMutableDictionary * _syndicationIdentifierToAssetUUIDCache;
    NSMutableSet * _syndicationIdentifiersWithActiveFetch;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool libraryAlreadyOpened;
@property (nonatomic, retain) NSHashTable *listeners;
@property (readonly) Class superclass;
@property (nonatomic, retain) CPLRUDictionary *syndicationIdentifierSaveStateCache;
@property (nonatomic, retain) NSMutableDictionary *syndicationIdentifierToAssetUUIDCache;
@property (nonatomic, retain) NSMutableSet *syndicationIdentifiersWithActiveFetch;

+ (id)_assetFetchQueue;
+ (id)_photoLibraryInternalQueue;
+ (id)photosSyndicationIdentifiersForMessage:(id)arg1;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_invalidateCacheDueToChanges:(id)arg1;
- (bool)_isListenerRegistered:(id)arg1;
- (void)_notifyListeners;
- (void)_openPhotoLibraryIfNecessary;
- (void)cacheCompletedSaveForSyndicationIdentifiers:(id)arg1;
- (unsigned long long)cachedCountOfSyndicationIdentifiersSavedToSystemPhotoLibrary:(id)arg1 shouldFetchAndNotifyAsNeeded:(bool)arg2 didStartFetch:(bool*)arg3;
- (void)fetchInfoForSyndicationIdentifiersSavedToSystemPhotoLibrary:(id)arg1 completion:(id /* block */)arg2;
- (id)init;
- (bool)libraryAlreadyOpened;
- (id)listeners;
- (void)photoLibraryDidChange:(id)arg1;
- (void)registerPhotoLibraryPersistenceManagerListener:(id)arg1;
- (void)setLibraryAlreadyOpened:(bool)arg1;
- (void)setListeners:(id)arg1;
- (void)setSyndicationIdentifierSaveStateCache:(id)arg1;
- (void)setSyndicationIdentifierToAssetUUIDCache:(id)arg1;
- (void)setSyndicationIdentifiersWithActiveFetch:(id)arg1;
- (id)syndicationIdentifierSaveStateCache;
- (id)syndicationIdentifierToAssetUUIDCache;
- (id)syndicationIdentifiersWithActiveFetch;
- (void)unregisterPhotoLibraryPersistenceManagerListener:(id)arg1;

@end
