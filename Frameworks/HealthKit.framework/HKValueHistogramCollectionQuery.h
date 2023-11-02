
@interface HKValueHistogramCollectionQuery : HKQuery <HKValueHistogramCollectionQueryClientInterface> {
    NSDate * _anchorDate;
    NSDateComponents * _intervalComponents;
    NSArray * _quantityRanges;
    HKQuantityType * _quantityType;
    id /* block */  _resultsHandler;
}

@property (nonatomic, readonly, copy) NSDate *anchorDate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSDateComponents *intervalComponents;
@property (nonatomic, readonly, copy) NSArray *quantityRanges;
@property (nonatomic, readonly, copy) HKQuantityType *quantityType;
@property (nonatomic, copy) id /* block */ resultsHandler;
@property (readonly) Class superclass;

+ (id)clientInterfaceProtocol;
+ (Class)configurationClass;
+ (void)configureClientInterface:(id)arg1;

- (void).cxx_destruct;
- (id)anchorDate;
- (void)client_deliverValueHistogramCollection:(id)arg1 forQuery:(id)arg2;
- (id)initWithQuantityType:(id)arg1 quantitySamplePredicate:(id)arg2 anchorDate:(id)arg3 intervalComponents:(id)arg4 quantityRanges:(id)arg5 resultsHandler:(id /* block */)arg6;
- (id)intervalComponents;
- (id)quantityRanges;
- (id)quantityType;
- (void)queue_deliverError:(id)arg1;
- (void)queue_populateConfiguration:(id)arg1;
- (void)queue_queryDidDeactivate:(id)arg1;
- (void)queue_validate;
- (id /* block */)resultsHandler;
- (void)setResultsHandler:(id /* block */)arg1;

@end
