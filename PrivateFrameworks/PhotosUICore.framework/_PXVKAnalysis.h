
@interface _PXVKAnalysis : NSObject {
    <PXVKImageAnalysis> * _analysis;
    <PXDisplayAsset> * _asset;
}

@property (nonatomic, readonly) <PXVKImageAnalysis> *analysis;
@property (nonatomic, readonly) <PXDisplayAsset> *asset;

- (void).cxx_destruct;
- (id)analysis;
- (id)asset;
- (id)initWithAsset:(id)arg1 analysis:(id)arg2;

@end
