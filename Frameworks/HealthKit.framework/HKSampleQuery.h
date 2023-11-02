
@interface HKSampleQuery : HKQuery <HKSampleQueryClientInterface> {
    bool  _includeAutomaticTimeZones;
    bool  _includeContributorInformation;
    unsigned long long  _limit;
    id /* block */  _resultHandler;
    NSMutableArray * _samplesPendingDelivery;
    NSArray * _sortDescriptors;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool includeAutomaticTimeZones;
@property (nonatomic) bool includeContributorInformation;
@property (readonly) unsigned long long limit;
@property (nonatomic, readonly, copy) id /* block */ resultHandler;
@property (readonly, copy) NSArray *sortDescriptors;
@property (readonly) Class superclass;

+ (id)clientInterfaceProtocol;
+ (Class)configurationClass;
+ (void)configureClientInterface:(id)arg1;
+ (id)sortDescriptorsForMostRecentSamples;

- (void).cxx_destruct;
- (bool)_prepareSamplesForDelivery:(id)arg1 error:(id*)arg2;
- (void)client_deliverSamples:(id)arg1 clearPendingSamples:(bool)arg2 isFinalBatch:(bool)arg3 queryUUID:(id)arg4;
- (bool)includeAutomaticTimeZones;
- (bool)includeContributorInformation;
- (id)initWithQueryDescriptors:(id)arg1 limit:(long long)arg2 resultsHandler:(id /* block */)arg3;
- (id)initWithQueryDescriptors:(id)arg1 limit:(long long)arg2 sortDescriptors:(id)arg3 resultsHandler:(id /* block */)arg4;
- (id)initWithSampleType:(id)arg1 predicate:(id)arg2 limit:(unsigned long long)arg3 sortDescriptors:(id)arg4 resultsHandler:(id /* block */)arg5;
- (unsigned long long)limit;
- (void)queue_deliverError:(id)arg1;
- (void)queue_populateConfiguration:(id)arg1;
- (void)queue_queryDidDeactivate:(id)arg1;
- (void)queue_validate;
- (id /* block */)resultHandler;
- (void)setIncludeAutomaticTimeZones:(bool)arg1;
- (void)setIncludeContributorInformation:(bool)arg1;
- (id)sortDescriptors;

@end
