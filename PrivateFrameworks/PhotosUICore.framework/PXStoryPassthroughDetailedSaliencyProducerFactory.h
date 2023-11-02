
@interface PXStoryPassthroughDetailedSaliencyProducerFactory : NSObject <PXStoryDetailedSaliencyProducerFactory> {
    <PXStoryDetailedSaliencyProducer> * _detailedSaliencyProducer;
}

@property (nonatomic, retain) <PXStoryDetailedSaliencyProducer> *detailedSaliencyProducer;

- (void).cxx_destruct;
- (id)detailedSaliencyProducer;
- (id)detailedSaliencyProducerForConfiguration:(id)arg1;
- (id)init;
- (id)initWithDetailedSaliencyProducer:(id)arg1;
- (void)setDetailedSaliencyProducer:(id)arg1;

@end
