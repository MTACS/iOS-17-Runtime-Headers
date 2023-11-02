
@interface HKNotificationInstructionDiagnosticQuery : HKQuery <HKNotificationInstructionDiagnosticQueryClientInterface> {
    id /* block */  _queue_resultsHandler;
    NSMutableArray * _queue_resultsPendingDelivery;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)clientInterfaceProtocol;
+ (void)configureClientInterface:(id)arg1;

- (void).cxx_destruct;
- (void)client_deliverNotificationInstructions:(id)arg1 clearPending:(bool)arg2 isFinalBatch:(bool)arg3 queryUUID:(id)arg4;
- (id)initWithResultsHandler:(id /* block */)arg1;
- (void)queue_deliverError:(id)arg1;
- (void)queue_queryDidDeactivate:(id)arg1;

@end
