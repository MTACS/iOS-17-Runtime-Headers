
@interface PXPhotoKitCollectionsDataSource : PXCollectionsDataSource {
    NSArray * __collectionListBySection;
    NSArray * __collectionsFetchResultBySection;
    NSDictionary * __collectionsIndexPathsByCollection;
    NSDictionary * __keyAssetsFetchResultsByCollection;
    NSArray * __virtualCollections;
    PHCollectionList * _collectionList;
    PHFetchResult * _collectionsFetchResult;
    PXPhotoKitCollectionsDataSourceManagerConfiguration * _configuration;
    NSDictionary * _itemFetchResultByCollection;
    unsigned short  _sharingFilter;
}

@property (nonatomic, readonly) NSArray *_collectionListBySection;
@property (nonatomic, readonly) NSArray *_collectionsFetchResultBySection;
@property (nonatomic, readonly) NSDictionary *_collectionsIndexPathsByCollection;
@property (nonatomic, readonly) NSDictionary *_keyAssetsFetchResultsByCollection;
@property (nonatomic, readonly) NSArray *_virtualCollections;
@property (nonatomic, readonly) PHCollectionList *collectionList;
@property (nonatomic, readonly) PHFetchResult *collectionsFetchResult;
@property (nonatomic, readonly) PXPhotoKitCollectionsDataSourceManagerConfiguration *configuration;
@property (nonatomic, readonly) NSDictionary *itemFetchResultByCollection;
@property (nonatomic, readonly) unsigned short sharingFilter;

+ (long long)estimatedCountForAssetCollection:(id)arg1 withConfiguration:(id)arg2;

- (void).cxx_destruct;
- (id)_assetAtSimpleIndexPath:(struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; })arg1;
- (id)_collectionAtSimpleIndexPath:(struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; })arg1;
- (id)_collectionListAtSimpleIndexPath:(struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; })arg1;
- (id)_collectionListBySection;
- (id)_collectionsFetchResultBySection;
- (id)_collectionsIndexPathsByCollection;
- (id)_keyAssetsFetchResultsByCollection;
- (id)_virtualCollections;
- (long long)assetCollectionsCountForFetchResult:(id)arg1;
- (long long)assetCollectionsCountForSection:(long long)arg1;
- (id)collectionAtIndexPath:(id)arg1;
- (id)collectionList;
- (id)collectionListForSection:(long long)arg1;
- (id)collectionsFetchResult;
- (long long)collectionsListCountForFetchResult:(id)arg1;
- (long long)collectionsListCountForSection:(long long)arg1;
- (id)configuration;
- (id)content;
- (long long)countForCollection:(id)arg1;
- (id)description;
- (void)enumerateCollectionsUsingBlock:(id /* block */)arg1;
- (id)existingAssetsFetchResultAtIndexPath:(struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; })arg1;
- (id)indexPathForCollection:(id)arg1;
- (struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; })indexPathForObjectReference:(id)arg1;
- (id)init;
- (id)initWithRootCollectionList:(id)arg1 collectionListBySection:(id)arg2 collectionsFetchResultBySection:(id)arg3 keyAssetsFetchResultsByCollection:(id)arg4 collectionsIndexPathsByCollection:(id)arg5 itemFetchResultByCollection:(id)arg6 virtualCollections:(id)arg7 collectionsFetchResult:(id)arg8 sharingFilter:(unsigned short)arg9 dataSourceConfiguration:(id)arg10;
- (id)itemFetchResultByCollection;
- (id)keyAssetsForCollection:(id)arg1;
- (long long)numberOfItemsInSection:(long long)arg1;
- (long long)numberOfSections;
- (long long)numberOfSubitemsInItem:(long long)arg1 section:(long long)arg2;
- (id)objectAtIndexPath:(struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; })arg1;
- (unsigned short)sharingFilter;

@end
