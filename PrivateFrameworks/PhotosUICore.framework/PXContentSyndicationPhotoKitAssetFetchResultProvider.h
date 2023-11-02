
@interface PXContentSyndicationPhotoKitAssetFetchResultProvider : NSObject <PHPhotoLibraryChangeObserver, PXContentSyndicationAssetFetchResultProvider> {
    id /* block */  _fetchResultBlock;
    NSMutableDictionary * _fetchResults;
    NSMutableDictionary * _observers;
    PHPhotoLibrary * _photoLibrary;
    NSObject<OS_dispatch_queue> * _serialQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_didChangeFetchResult:(id)arg1 forAssetCollection:(id)arg2 withChangeObservers:(id)arg3;
- (id)_serialQueue_fetchResultAssetCollection:(id)arg1 fetchResultBlock:(id /* block */)arg2;
- (void)_serialQueue_invalidateAllAssetFetchResults;
- (void)_serialQueue_invalidateAssetFetchResultsInAssetCollections:(id)arg1;
- (void)_serialQueue_registerChangeObserver:(id)arg1 forAssetCollection:(id)arg2 fetchResultBlock:(id /* block */)arg3;
- (void)_serialQueue_unregisterChangeObserver:(id)arg1 forAssetCollection:(id)arg2;
- (id)assetFetchResultForAssetCollection:(id)arg1;
- (id)init;
- (id)initWithPhotoLibrary:(id)arg1 fetchResultBlock:(id /* block */)arg2;
- (void)invalidateAllAssetFetchResults;
- (void)invalidateAssetFetchResultsInAssetCollections:(id)arg1;
- (void)photoLibraryDidChange:(id)arg1;
- (void)registerChangeObserver:(id)arg1 forAssetCollection:(id)arg2;
- (void)unregisterChangeObserver:(id)arg1 forAssetCollection:(id)arg2;

@end
