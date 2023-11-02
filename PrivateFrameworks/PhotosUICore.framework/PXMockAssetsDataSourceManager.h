
@interface PXMockAssetsDataSourceManager : PXAssetsDataSourceManager <PXMutableMockAssetsDataSourceManager> {
    PXSectionedChangeDetailsCoalescer * _changeDetailsCoalescer;
    bool  _changeIsReload;
    NSArray * _initialAssetCollections;
    NSArray * _initialAssetsBySection;
    bool  _isPerformingDataSourceChanges;
    NSMutableArray * _nextAssetCollections;
    NSMutableArray * _nextAssetsBySection;
}

@property (nonatomic, readonly) PXMockAssetsDataSource *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_appendIncrementalChangeDetails:(id)arg1;
- (void)changeItemAtIndexPath:(id)arg1 toAssetProperties:(id)arg2;
- (void)changeSectionAtIndex:(long long)arg1 toAssetCollection:(id)arg2;
- (id)createInitialDataSource;
- (id)init;
- (id)initWithConfigurationBlock:(id /* block */)arg1;
- (void)insertItemAtIndexPath:(id)arg1 assetProperties:(id)arg2;
- (void)insertSectionAtIndex:(long long)arg1 count:(long long)arg2 assetProperties:(id)arg3 assetCollection:(id)arg4;
- (void)markChangeAsReload;
- (id)pauseChangeDeliveryWithTimeout:(double)arg1 identifier:(id)arg2;
- (void)performDataSourceChanges:(id /* block */)arg1;
- (void)removeItemAtIndexPath:(id)arg1;
- (void)removeSectionAtIndex:(long long)arg1;
- (void)resumeChangeDeliveryAndBackgroundLoading:(id)arg1;
- (void)setCurationEnabled:(bool)arg1 forAssetCollection:(id)arg2;
- (void)setCurationEnabledForAllCollections:(bool)arg1 collectionsToDiff:(id)arg2;

@end
