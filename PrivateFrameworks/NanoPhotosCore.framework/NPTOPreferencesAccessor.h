
@interface NPTOPreferencesAccessor : NSObject {
    NSMutableArray * _batchUpdatesKeyStack;
    NRDevice * _device;
    NPSDomainAccessor * _domainAccessor;
    NPTONotificationCenter * _notificationCenter;
}

@property (nonatomic, readonly) NRDevice *device;

- (void).cxx_destruct;
- (bool)boolForKey:(id)arg1;
- (id)changeObserverForKey:(id)arg1 queue:(id)arg2 block:(id /* block */)arg3;
- (id)device;
- (id)initWithDevice:(id)arg1;
- (id)npto_alwaysUpdatingEnabledForAllCollections;
- (id)npto_appLastOpenDate;
- (bool)npto_appPhotosSyncingEnabled;
- (bool)npto_featuredPhotosSyncingEnabled;
- (unsigned long long)npto_fetchCountForAssetCollection:(id)arg1;
- (id)npto_fetchCountsForAllCollections;
- (id)npto_fetchSyncedAlbum;
- (bool)npto_isAlwaysUpdatingEnabledForAssetCollection:(id)arg1;
- (bool)npto_memoriesSyncingEnabled;
- (void)npto_removeFetchCountForAssetCollection:(id)arg1;
- (void)npto_setAlwaysUpdatingEnabled:(bool)arg1 forAssetCollection:(id)arg2;
- (void)npto_setAlwaysUpdatingEnabledForAllCollections:(id)arg1;
- (void)npto_setFetchCount:(unsigned long long)arg1 forAssetCollection:(id)arg2;
- (void)npto_setFetchCountsForAllCollections:(id)arg1;
- (id)npto_syncedAlbumIdentifier;
- (unsigned long long)npto_syncedPhotosLimit;
- (id)objectForKey:(id)arg1;
- (void)performBatchUpdates:(id /* block */)arg1 synchronizeToRemoteDevice:(bool)arg2;
- (void)removeObjectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;

@end
