
@interface WFStatisticsEngine : NSObject {
    NSObject<OS_dispatch_queue> * _statisticsQueue;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *statisticsQueue;

- (void).cxx_destruct;
- (void)applyOperation:(long long)arg1 onNumbers:(id)arg2 completion:(id /* block */)arg3;
- (void)applyOperation:(long long)arg1 onStatisticsSampleProviders:(id)arg2 completion:(id /* block */)arg3;
- (void)asyncApplyNSExpressionFunction:(id)arg1 data:(id)arg2 completion:(id /* block */)arg3;
- (void)averageOfValues:(id)arg1 completion:(id /* block */)arg2;
- (id)init;
- (void)maximumOfValues:(id)arg1 completion:(id /* block */)arg2;
- (void)medianOfValues:(id)arg1 completion:(id /* block */)arg2;
- (void)minimumOfValues:(id)arg1 completion:(id /* block */)arg2;
- (void)modeOfValues:(id)arg1 completion:(id /* block */)arg2;
- (void)rangeOfValues:(id)arg1 completion:(id /* block */)arg2;
- (void)setStatisticsQueue:(id)arg1;
- (void)standardDeviationOfValues:(id)arg1 completion:(id /* block */)arg2;
- (id)statisticsQueue;
- (void)sumOfValues:(id)arg1 completion:(id /* block */)arg2;

@end
