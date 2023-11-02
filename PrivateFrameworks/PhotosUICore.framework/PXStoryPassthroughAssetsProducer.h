
@interface PXStoryPassthroughAssetsProducer : NSObject <PXStoryAssetsProducer> {
    PXAssetsDataSourceManager * _assetsDataSourceManager;
}

@property (nonatomic, readonly) PXAssetsDataSourceManager *assetsDataSourceManager;

- (void).cxx_destruct;
- (id)assetsDataSourceManager;
- (id)init;
- (id)initWithAssetsDataSourceManager:(id)arg1;
- (id)requestAssetsWithOptions:(unsigned long long)arg1 storyQueue:(id)arg2 resultHandler:(id /* block */)arg3;

@end
