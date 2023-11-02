
@interface _PXBrowserDataSourceSelection : PXBrowserSelectionSnapshot {
    NSMutableArray * _assets;
    <PXDisplayAssetDataSource> * _dataSource;
    NSArray * _indexPaths;
}

@property (nonatomic, readonly) NSArray *assets;
@property (nonatomic, readonly) <PXDisplayAssetDataSource> *dataSource;
@property (nonatomic, readonly) NSArray *indexPaths;

- (void).cxx_destruct;
- (long long)assetCount;
- (id)assetReferenceAtIndex:(long long)arg1;
- (id)assets;
- (id)dataSource;
- (id)displayAssetAtIndex:(long long)arg1;
- (long long)estimatedAssetCount;
- (long long)estimatedModelObjectsCount;
- (long long)indexOfAssetReference:(id)arg1;
- (id)indexPaths;
- (id)initWithIndexPaths:(id)arg1 dataSource:(id)arg2;
- (long long)mediaType;
- (id)modelObjects;

@end
