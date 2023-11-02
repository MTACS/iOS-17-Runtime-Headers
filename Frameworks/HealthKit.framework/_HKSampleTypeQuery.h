
@interface _HKSampleTypeQuery : HKQuery <HKSampleTypeQueryClientInterface> {
    id /* block */  _resultsHandler;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)clientInterfaceProtocol;
+ (void)configureClientInterface:(id)arg1;

- (void).cxx_destruct;
- (void)client_deliverSampleTypes:(id)arg1 query:(id)arg2;
- (id)initWithPredicate:(id)arg1 resultsHandler:(id /* block */)arg2;
- (void)queue_deliverError:(id)arg1;

@end
