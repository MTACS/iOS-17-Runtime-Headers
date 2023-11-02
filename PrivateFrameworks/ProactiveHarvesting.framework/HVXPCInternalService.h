
@interface HVXPCInternalService : NSObject {
    _PASXPCClientHelper * _helper;
}

- (void).cxx_destruct;
- (bool)contentAvailableFromSources:(unsigned int)arg1 error:(id*)arg2;
- (bool)deleteContentWithRequest:(id)arg1 error:(id*)arg2;
- (bool)disableConsumptionOfDataSources:(unsigned int)arg1 error:(id*)arg2;
- (bool)donateSearchableItem:(id)arg1 error:(id*)arg2;
- (bool)enableConsumptionOfDataSources:(unsigned int)arg1 error:(id*)arg2;
- (bool)harvestWithError:(id*)arg1;
- (id)init;
- (bool)overrideIsConnectedToPower:(id)arg1 error:(id*)arg2;
- (bool)refillHarvestBudgetWithError:(id*)arg1;
- (bool)restoreConsumptionOfDataSources:(unsigned int)arg1 error:(id*)arg2;
- (id)statsWithError:(id*)arg1;
- (id)synchronousProxy;

@end
