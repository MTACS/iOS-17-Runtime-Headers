
@interface PXStoryConcreteTimelineProducer : NSObject <PXStoryTimelineProducer> {
    long long  _initialProductionCountLimit;
    double  _initialProductionTimeLimit;
    NSObject<OS_os_log> * _log;
    long long  _subsequentProductionCountLimit;
    double  _subsequentProductionSimulatedDelay;
    double  _subsequentProductionTimeLimit;
}

@property (nonatomic) long long initialProductionCountLimit;
@property (nonatomic) double initialProductionTimeLimit;
@property (nonatomic, readonly) NSObject<OS_os_log> *log;
@property (nonatomic) long long subsequentProductionCountLimit;
@property (nonatomic) double subsequentProductionSimulatedDelay;
@property (nonatomic) double subsequentProductionTimeLimit;

+ (id)workQueue;

- (void).cxx_destruct;
- (id)init;
- (long long)initialProductionCountLimit;
- (double)initialProductionTimeLimit;
- (id)log;
- (id)requestTimelineWithConfiguration:(id)arg1 options:(unsigned long long)arg2 resultHandler:(id /* block */)arg3;
- (void)setInitialProductionCountLimit:(long long)arg1;
- (void)setInitialProductionTimeLimit:(double)arg1;
- (void)setSubsequentProductionCountLimit:(long long)arg1;
- (void)setSubsequentProductionSimulatedDelay:(double)arg1;
- (void)setSubsequentProductionTimeLimit:(double)arg1;
- (long long)subsequentProductionCountLimit;
- (double)subsequentProductionSimulatedDelay;
- (double)subsequentProductionTimeLimit;

@end
