
@protocol ATXCandidateRelevanceModelDataStoreProtocol <NSObject>

@required

- (void)cacheSelectedCandidates:(NSArray *)arg1 featurizationManager:(ATXCandidateRelevanceModelFeaturizationManager *)arg2 modelId:(NSString *)arg3;
- (ATXCandidateRelevanceModelCandidateCacheResult *)cachedCandidatesForModelId:(NSString *)arg1 earliestDate:(NSDate *)arg2;
- (NSSet *)clientModelNamesWithTrainedRelevanceModels;
- (void)deleteCachedCandidatesForModelId:(NSString *)arg1;
- (void)deleteTrainedModelsWithTrainDateOlderThanDate:(NSDate *)arg1;
- (bool)isModelUUIDVerified:(NSUUID *)arg1;
- (NSDictionary *)modelUUIDToTrainDateForClientModelName:(NSString *)arg1;
- (NSDate *)mostRecentVerifiedTrainDateForClientModelName:(NSString *)arg1;
- (NSArray *)mostRecentVerifiedTrainingResultsForClientModelName:(NSString *)arg1;
- (unsigned long long)numberOfTrainedModels;
- (void)receiveMostRecentVerifiedTrainedModelTrainingResults:(void *)arg1 clientModelName:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 13: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, ATXCandidateRelevanceModelDataStoreTrainingResult *, void*, NSString *, id /* block */, void*, void, id /* block */, bool, void*
- (void)receiveMostRecentVerifiedTrainedModelTrainingResults:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 12: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, ATXCandidateRelevanceModelDataStoreTrainingResult *, void*, id /* block */, void*, void, id /* block */, bool, void*
- (void)receiveTrainingResult:(void *)arg1 completion:(void *)arg2 modelUUID:(void *)arg3 clientModelName:(void *)arg4; // needs 4 arg types, found 14: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, ATXCandidateRelevanceModelDataStoreTrainingResult *, void*, id /* block */, void*, void, id /* block */, bool, void*, NSUUID *, NSString *
- (NSArray *)trainingResultsForClientModelName:(NSString *)arg1 modelUUID:(NSUUID *)arg2;
- (void)writeTrainingResult:(ATXCandidateRelevanceModelDataStoreTrainingResult *)arg1;
- (void)writeVerificationStatusForModelUUID:(NSUUID *)arg1 clientModelName:(NSString *)arg2 expectedNumberOfModels:(unsigned long long)arg3;

@end
