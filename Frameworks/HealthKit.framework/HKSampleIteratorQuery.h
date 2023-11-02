
@interface HKSampleIteratorQuery : HKQuery <HKSampleIteratorQueryClientInterface> {
    unsigned long long  _limit;
    HKSampleIteratorQueryCursor * _queryCursor;
    id /* block */  _resultsHandler;
    NSMutableArray * _samplesPendingDelivery;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long limit;
@property (nonatomic, copy) HKSampleIteratorQueryCursor *queryCursor;
@property (nonatomic, readonly, copy) id /* block */ resultsHandler;
@property (readonly) Class superclass;

+ (id)clientInterfaceProtocol;
+ (Class)configurationClass;
+ (void)configureClientInterface:(id)arg1;

- (void).cxx_destruct;
- (void)client_deliverSampleObjects:(id)arg1 queryCursor:(id)arg2 deliverResults:(bool)arg3 query:(id)arg4;
- (id)init;
- (id)initWithQueryCursor:(id)arg1 limit:(unsigned long long)arg2 resultsHandler:(id /* block */)arg3;
- (id)initWithQueryDescriptors:(id)arg1 sortDescriptors:(id)arg2 followingAnchor:(id)arg3 upToAndIncludingAnchor:(id)arg4 distinctByKeyPaths:(id)arg5 limit:(unsigned long long)arg6 resultsHandler:(id /* block */)arg7;
- (unsigned long long)limit;
- (id)queryCursor;
- (void)queue_deliverError:(id)arg1;
- (void)queue_populateConfiguration:(id)arg1;
- (void)queue_queryDidDeactivate:(id)arg1;
- (void)queue_validate;
- (id /* block */)resultsHandler;
- (void)setLimit:(unsigned long long)arg1;
- (void)setQueryCursor:(id)arg1;

@end
