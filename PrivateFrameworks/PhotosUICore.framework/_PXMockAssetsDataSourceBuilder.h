
@interface _PXMockAssetsDataSourceBuilder : NSObject <PXMockDataSourceBuilder> {
    NSMutableArray * _mutableAssetCollections;
    NSMutableArray * _mutableAssetsBySection;
}

@property (nonatomic, readonly) NSArray *assetCollections;
@property (nonatomic, readonly) NSArray *assetsBySection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)appendMockDisplayAssetSectionWithCount:(long long)arg1 assetProperties:(id)arg2 assetCollection:(id)arg3;
- (void)appendMockDisplayAssetsWithCount:(long long)arg1 assetProperties:(id)arg2;
- (id)assetCollections;
- (id)assetsBySection;
- (id)init;

@end
