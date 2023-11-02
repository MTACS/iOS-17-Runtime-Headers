
@interface PXContentSyndicationPhotoKitCountsController : PXContentSyndicationCountsController <PXChangeObserver, PXFetchResultCountObserverDelegate> {
    PXAssetsDataSourceCountsController * _assetsCountsController;
    PXFetchResultCountObserver * _fetchResultCountObserver;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_updateDetailedCounts;
- (void)_updateSavedCount;
- (void)didSetAssetCollection:(id)arg1;
- (void)fetchResultCountObserver:(id)arg1 didChangeFetchResultCount:(long long)arg2;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;

@end
