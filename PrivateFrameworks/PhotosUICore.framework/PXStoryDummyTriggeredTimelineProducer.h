
@interface PXStoryDummyTriggeredTimelineProducer : NSObject <PXStoryTimelineProducer> {
    PXStoryTimelineProducerConfiguration * _configuration;
    long long  _currentIteration;
    long long  _numberOfIterations;
    id /* block */  _resultHandler;
    PXStoryDummyTimelineProducer * _timelineProducer;
}

@property (nonatomic, retain) PXStoryTimelineProducerConfiguration *configuration;
@property (nonatomic) long long currentIteration;
@property (nonatomic, readonly) long long numberOfIterations;
@property (nonatomic, copy) id /* block */ resultHandler;
@property (nonatomic, readonly) PXStoryDummyTimelineProducer *timelineProducer;

- (void).cxx_destruct;
- (id)configuration;
- (long long)currentIteration;
- (id)init;
- (id)initWithNumberOfIterations:(long long)arg1;
- (long long)numberOfIterations;
- (id)requestTimelineWithConfiguration:(id)arg1 options:(unsigned long long)arg2 resultHandler:(id /* block */)arg3;
- (id /* block */)resultHandler;
- (void)setConfiguration:(id)arg1;
- (void)setCurrentIteration:(long long)arg1;
- (void)setResultHandler:(id /* block */)arg1;
- (id)timelineProducer;
- (void)trigger;

@end
