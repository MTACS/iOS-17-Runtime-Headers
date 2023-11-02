
@interface HVXPCInternalServer : NSObject <HVXPCInternalServiceProtocol>

- (void)contentAvailableFromSources:(unsigned int)arg1 completion:(id /* block */)arg2;
- (void)deleteContentWithRequest:(id)arg1 completion:(id /* block */)arg2;
- (void)disableConsumptionOfDataSources:(unsigned int)arg1 completion:(id /* block */)arg2;
- (void)donateSearchableItem:(id)arg1 completion:(id /* block */)arg2;
- (void)enableConsumptionOfDataSources:(unsigned int)arg1 completion:(id /* block */)arg2;
- (void)harvestWithCompletion:(id /* block */)arg1;
- (void)overrideIsConnectedToPower:(id)arg1 completion:(id /* block */)arg2;
- (void)refillHarvestBudgetWithCompletion:(id /* block */)arg1;
- (void)restoreConsumptionOfDataSources:(unsigned int)arg1 completion:(id /* block */)arg2;
- (void)statsWithCompletion:(id /* block */)arg1;

@end
