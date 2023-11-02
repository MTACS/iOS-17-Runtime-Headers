
@interface ARSplitTechniqueSynchronizerTechnique : ARTechnique <ARTechniqueDelegate> {
    ARCircularArray * _contextsWaitingForSynchronizationData;
    NSMutableArray * _lastReceivedResults;
    NSObject<OS_dispatch_semaphore> * _lastReceivedResultsSemaphore;
    NSMutableDictionary * _pendingResults;
    NSSet * _synchronizedResultDataClasses;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSSet *synchronizedResultDataClasses;

- (void).cxx_destruct;
- (void)_recursivelyGatherData:(id)arg1 fromContext:(id)arg2;
- (id)initWithSynchronizedResultDataClasses:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)reconfigurableFrom:(id)arg1;
- (void)requestResultDataAtTimestamp:(double)arg1 context:(id)arg2;
- (id)synchronizedResultDataClasses;
- (void)technique:(id)arg1 didFailWithError:(id)arg2;
- (void)technique:(id)arg1 didOutputResultData:(id)arg2 timestamp:(double)arg3 context:(id)arg4;

@end
