
@interface PXStoryPassthroughDetailedSaliencyProducer : NSObject <PXStoryDetailedSaliencyProducer> {
    <PXStorySaliencyDataSource> * _detailedSaliency;
}

@property (nonatomic, readonly) <PXStorySaliencyDataSource> *detailedSaliency;

- (void).cxx_destruct;
- (id)detailedSaliency;
- (id)init;
- (id)initWithDetailedSaliency:(id)arg1;
- (id)requestDetailedSaliencyForDisplayAssets:(id)arg1 options:(unsigned long long)arg2 resultHandler:(id /* block */)arg3;

@end
