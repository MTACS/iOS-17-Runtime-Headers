
@interface ATXCandidateRelevanceModelDataStore : NSObject <ATXCandidateRelevanceModelDataStoreProtocol> {
    _ATXDataStore * _dataStore;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)cacheSelectedCandidates:(id)arg1 featurizationManager:(id)arg2 modelId:(id)arg3;
- (id)cachedCandidatesForModelId:(id)arg1 earliestDate:(id)arg2;
- (long long)candidateIdForCandidate:(id)arg1 error:(id*)arg2;
- (id)clientModelNamesWithTrainedRelevanceModels;
- (long long)datasetMetadataIdForDatasetMetadata:(id)arg1 error:(id*)arg2;
- (void)deleteCachedCandidatesForModelId:(id)arg1;
- (void)deleteRowsWithIds:(id)arg1 fromTableWithName:(id)arg2;
- (void)deleteTrainedModelsWithTrainDateOlderThanDate:(id)arg1;
- (long long)featurizationManagerIdForFeaturizationManager:(id)arg1 error:(id*)arg2;
- (id)idsInTableWithName:(id)arg1;
- (id)init;
- (id)initWithDataStore:(id)arg1;
- (bool)isModelUUIDVerified:(id)arg1;
- (id)modelUUIDToTrainDateForClientModelName:(id)arg1;
- (id)mostRecentVerifiedTrainDateForClientModelName:(id)arg1;
- (id)mostRecentVerifiedTrainingResultsForClientModelName:(id)arg1;
- (unsigned long long)numberOfCandidateIds;
- (unsigned long long)numberOfDatasetMetadataIds;
- (unsigned long long)numberOfFeaturizationManagerIds;
- (unsigned long long)numberOfTrainedModels;
- (void)receiveMostRecentVerifiedTrainedModelTrainingResults:(id /* block */)arg1 clientModelName:(id)arg2 completion:(id /* block */)arg3;
- (void)receiveMostRecentVerifiedTrainedModelTrainingResults:(id /* block */)arg1 completion:(id /* block */)arg2;
- (void)receiveTrainingResult:(id /* block */)arg1 completion:(id /* block */)arg2 modelUUID:(id)arg3 clientModelName:(id)arg4;
- (id)trainingResultsForClientModelName:(id)arg1 modelUUID:(id)arg2;
- (void)writeSuccessfulVerificationForModelUUID:(id)arg1;
- (void)writeTrainingResult:(id)arg1;
- (void)writeVerificationStatusForModelUUID:(id)arg1 clientModelName:(id)arg2 expectedNumberOfModels:(unsigned long long)arg3;

@end
