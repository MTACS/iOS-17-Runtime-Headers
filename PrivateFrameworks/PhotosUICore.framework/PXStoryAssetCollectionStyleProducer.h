
@interface PXStoryAssetCollectionStyleProducer : NSObject <PXStoryStylesProducer> {
    <PXDisplayAssetCollection> * _assetCollection;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (nonatomic, readonly) <PXDisplayAssetCollection> *assetCollection;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *workQueue;

- (void).cxx_destruct;
- (id)assetCollection;
- (id)initWithAssetCollection:(id)arg1;
- (id)requestStylesWithOptions:(unsigned long long)arg1 resultHandler:(id /* block */)arg2;
- (id)workQueue;

@end
