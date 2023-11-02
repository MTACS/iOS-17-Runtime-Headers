
@interface HKCorrelationQuery : HKQuery <HKCorrelationQueryClientInterface> {
    id /* block */  _completionHandler;
    NSMutableArray * _correlationsPendingDelivery;
    NSDictionary * _filterDictionary;
    NSDictionary * _samplePredicates;
}

@property (nonatomic, readonly) id /* block */ completionHandler;
@property (readonly, copy) HKCorrelationType *correlationType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSDictionary *filterDictionary;
@property (readonly) unsigned long long hash;
@property (readonly, copy) NSDictionary *samplePredicates;
@property (readonly) Class superclass;

+ (id)clientInterfaceProtocol;
+ (Class)configurationClass;
+ (void)configureClientInterface:(id)arg1;
+ (bool)shouldApplyAdditionalPredicateForObjectType:(id)arg1;

- (void).cxx_destruct;
- (void)client_deliverCorrelations:(id)arg1 clearPendingSamples:(bool)arg2 isFinalBatch:(bool)arg3 queryUUID:(id)arg4;
- (id /* block */)completionHandler;
- (id)correlationType;
- (id)filterDictionary;
- (id)initWithType:(id)arg1 predicate:(id)arg2 samplePredicates:(id)arg3 completion:(id /* block */)arg4;
- (void)queue_deliverError:(id)arg1;
- (void)queue_populateConfiguration:(id)arg1;
- (void)queue_queryDidDeactivate:(id)arg1;
- (void)queue_validate;
- (id)samplePredicates;

@end
