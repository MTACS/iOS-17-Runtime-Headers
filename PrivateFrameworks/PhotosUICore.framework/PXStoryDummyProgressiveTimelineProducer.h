
@interface PXStoryDummyProgressiveTimelineProducer : NSObject <PXStoryTimelineProducer> {
    double  _delayBetweenIterations;
    long long  _numberOfIterations;
    PXStoryDummyTimelineProducer * _timelineProducer;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (nonatomic) double delayBetweenIterations;
@property (nonatomic) long long numberOfIterations;
@property (nonatomic, readonly) PXStoryDummyTimelineProducer *timelineProducer;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *workQueue;

- (void).cxx_destruct;
- (double)delayBetweenIterations;
- (id)init;
- (long long)numberOfIterations;
- (id)requestTimelineWithConfiguration:(id)arg1 options:(unsigned long long)arg2 resultHandler:(id /* block */)arg3;
- (void)setDelayBetweenIterations:(double)arg1;
- (void)setNumberOfIterations:(long long)arg1;
- (id)timelineProducer;
- (id)workQueue;

@end
