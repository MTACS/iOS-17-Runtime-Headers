
@interface HKMCAnalysisQuery : HKQuery {
    bool  _forceAnalysis;
    id /* block */  _updateHandler;
}

@property (nonatomic, readonly) bool forceAnalysis;

+ (id)clientInterfaceProtocol;
+ (Class)configurationClass;

- (void).cxx_destruct;
- (void)client_deliverAnalysis:(id)arg1 queryUUID:(id)arg2;
- (bool)forceAnalysis;
- (id)initWithForceAnalysis:(bool)arg1 updateHandler:(id /* block */)arg2;
- (id)initWithUpdateHandler:(id /* block */)arg1;
- (void)queue_deliverError:(id)arg1;
- (void)queue_populateConfiguration:(id)arg1;
- (void)queue_queryDidDeactivate:(id)arg1;
- (bool)queue_shouldDeactivateAfterInitialResults;
- (void)queue_validate;

@end
