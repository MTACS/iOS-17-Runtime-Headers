
@interface PXStoryPHAssetCollectionAssetsProducer : NSObject <PXStoryAssetsProducer> {
    PHAssetCollection * _assetCollection;
    PHAsset * _keyAsset;
    unsigned long long  _options;
    NSArray * _referencePersons;
}

@property (nonatomic, readonly) PHAssetCollection *assetCollection;
@property (nonatomic, readonly) PHAsset *keyAsset;
@property (nonatomic, readonly) unsigned long long options;
@property (nonatomic, readonly) NSArray *referencePersons;

+ (bool)shouldEnableCurationForAssetCollection:(id)arg1;

- (void).cxx_destruct;
- (id)assetCollection;
- (id)init;
- (id)initWithAssetCollection:(id)arg1 keyAsset:(id)arg2 referencePersons:(id)arg3 options:(unsigned long long)arg4;
- (id)keyAsset;
- (unsigned long long)options;
- (id)referencePersons;
- (id)requestAssetsWithOptions:(unsigned long long)arg1 storyQueue:(id)arg2 resultHandler:(id /* block */)arg3;

@end
