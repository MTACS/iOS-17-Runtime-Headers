
@interface PXKeyAssetsCollectionFetchOperation : PXCollectionFetchOperation {
    long long  _maxKeyAssets;
    NSDictionary * _outputOtherFetchResultsByAssetCollection;
}

@property (nonatomic) long long maxKeyAssets;
@property (nonatomic, retain) NSDictionary *outputOtherFetchResultsByAssetCollection;

- (void).cxx_destruct;
- (void)main;
- (long long)maxKeyAssets;
- (id)outputOtherFetchResultsByAssetCollection;
- (void)setMaxKeyAssets:(long long)arg1;
- (void)setOutputOtherFetchResultsByAssetCollection:(id)arg1;

@end
