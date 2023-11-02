
@interface HKMCDaySummaryObserverQuery : HKQuery <HKMCDaySummaryObserverQueryClientInterface> {
    id /* block */  _updateHandler;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)clientInterfaceProtocol;

- (void).cxx_destruct;
- (void)client_deliverUpdateWithQueryUUID:(id)arg1;
- (id)initWithUpdateHandler:(id /* block */)arg1;
- (void)queue_deliverError:(id)arg1;
- (void)queue_queryDidDeactivate:(id)arg1;
- (bool)queue_shouldDeactivateAfterInitialResults;
- (void)queue_validate;

@end
