
@interface HDQuantitySeriesBuilderTaskServer : HDStandardTaskServer <HKQuantitySeriesSampleBuilderTaskServerInterface> {
    HKQuantitySeriesSampleBuilderTaskServerConfiguration * _configuration;
    NSError * _fatalError;
    NSObject<OS_dispatch_queue> * _queue;
    id /* block */  _queue_activeHandler;
    HKQuantitySample * _series;
    long long  _state;
    id /* block */  _unitTest_saveSamplesCompletion;
    NSMutableArray * _values;
}

@property (nonatomic, readonly) long long state;
@property (nonatomic, copy) id /* block */ unitTest_saveSamplesCompletion;

+ (Class)configurationClass;
+ (id)requiredEntitlements;
+ (id)taskIdentifier;
+ (bool)validateConfiguration:(id)arg1 client:(id)arg2 error:(id*)arg3;

- (void).cxx_destruct;
- (id)exportedInterface;
- (id)initWithUUID:(id)arg1 configuration:(id)arg2 client:(id)arg3 delegate:(id)arg4;
- (id)remoteInterface;
- (void)remote_discardWithCompletion:(id /* block */)arg1;
- (void)remote_finishSeriesWithMetadata:(id)arg1 endDate:(id)arg2 finalSeries:(id)arg3 completion:(id /* block */)arg4;
- (void)remote_insertQuantitySeries:(id)arg1 completion:(id /* block */)arg2;
- (void)setUnitTest_saveSamplesCompletion:(id /* block */)arg1;
- (long long)state;
- (id /* block */)unitTest_saveSamplesCompletion;

@end
