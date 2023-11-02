
@interface _HKDateRangeQuery : HKQuery <HKDateRangeQueryClientInterface> {
    id /* block */  _handler;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) id /* block */ handler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)clientInterfaceProtocol;
+ (void)configureClientInterface:(id)arg1;

- (void).cxx_destruct;
- (void)client_deliverDateIntervals:(id)arg1 forQuery:(id)arg2;
- (id /* block */)handler;
- (id)initWithDateIntervalHandler:(id /* block */)arg1;
- (void)queue_deliverError:(id)arg1;
- (void)queue_queryDidDeactivate:(id)arg1;
- (bool)queue_shouldDeactivateAfterInitialResults;
- (void)queue_validate;

@end
