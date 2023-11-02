
@interface HKQuantitySeriesSampleQuery : HKQuery <HKQuantitySeriesSampleQueryClientInterface> {
    long long  _anchor;
    bool  _hasMaximumReceivedStartTime;
    bool  _includeSample;
    NSData * _latestReceivedUUIDData;
    NSDate * _latestSampleStartDate;
    double  _maximumReceivedStartTime;
    bool  _orderByQuantitySampleStartDate;
    id /* block */  _quantityBatchHandler;
    id /* block */  _quantityHandler;
    NSMutableDictionary * _receivedSamplesByUUID;
    HKQuantitySample * _sample;
    id /* block */  _seriesHandler;
    double  _startTime;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool includeSample;
@property (nonatomic) bool orderByQuantitySampleStartDate;
@property (nonatomic, readonly) id /* block */ quantityHandlerWithSample;
@property (nonatomic, readonly) id /* block */ quantityHandlerWithoutSample;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSDictionary *unitTest_cachedQuantitySamplesByUUID;

+ (id)clientInterfaceProtocol;
+ (Class)configurationClass;

- (void).cxx_destruct;
- (id)_quantitySampleForEnumerationResult:(id)arg1 UUID:(id)arg2;
- (void)client_deliverEnumerationResults:(id)arg1 isFinal:(bool)arg2 query:(id)arg3;
- (void)client_deliverQuantitySeries:(id)arg1 seriesAnchor:(long long)arg2 isFinal:(bool)arg3 query:(id)arg4;
- (bool)includeSample;
- (id)initWithQuantityType:(id)arg1 predicate:(id)arg2 quantityBatchHandler:(id /* block */)arg3;
- (id)initWithQuantityType:(id)arg1 predicate:(id)arg2 quantityHandler:(id /* block */)arg3;
- (id)initWithSample:(id)arg1 quantityHandler:(id /* block */)arg2;
- (bool)orderByQuantitySampleStartDate;
- (id /* block */)quantityHandlerWithSample;
- (id /* block */)quantityHandlerWithoutSample;
- (void)queue_deliverError:(id)arg1;
- (void)queue_populateConfiguration:(id)arg1;
- (void)queue_queryDidDeactivate:(id)arg1;
- (void)setIncludeSample:(bool)arg1;
- (void)setOrderByQuantitySampleStartDate:(bool)arg1;
- (id)unitTest_cachedQuantitySamplesByUUID;

@end
