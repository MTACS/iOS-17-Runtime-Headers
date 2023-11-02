
@interface HKHRAFibBurdenHistogramQuery : HKQuery {
    id /* block */  _resultsHandler;
}

+ (id)clientInterfaceProtocol;

- (void).cxx_destruct;
- (void)client_deliverHistogramResult:(id)arg1 queryUUID:(id)arg2;
- (id)initWithResultsHandler:(id /* block */)arg1;
- (void)queue_deliverError:(id)arg1;
- (void)queue_queryDidDeactivate:(id)arg1;
- (void)queue_validate;

@end
