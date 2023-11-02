
@interface GDXPCInternalService : NSObject {
    NSXPCConnection * _connection;
    NSXPCInterface * _serverInterface;
}

- (void).cxx_destruct;
- (bool)behaviorUnderstandingClearAllDataWithShouldClearFeaturizer:(bool)arg1 shouldClearSampleGenerator:(bool)arg2 error:(id*)arg3;
- (bool)behaviorUnderstandingClearEntityTaggingInjectedTagsWithError:(id*)arg1;
- (bool)behaviorUnderstandingDigestWithShouldDigestFeaturizer:(bool)arg1 shouldDigestSampleGenerator:(bool)arg2 error:(id*)arg3;
- (id)behaviorUnderstandingDumpEntityTaggingDataCollectionWithOutputPath:(id)arg1 error:(id*)arg2;
- (id)behaviorUnderstandingEvaluateForBehaviorType:(id)arg1 queryName:(id)arg2 inferenceServiceInstanceId:(id)arg3 error:(id*)arg4;
- (id)behaviorUnderstandingFeaturizeBehaviorOfType:(id)arg1 identifier:(id)arg2 usingContextAt:(id)arg3 error:(id*)arg4;
- (id)behaviorUnderstandingFeaturizedBehaviorsForFeatureName:(id)arg1 behaviorType:(id)arg2 error:(id*)arg3;
- (id)behaviorUnderstandingHistogramsOfKind:(id)arg1 behaviorType:(id)arg2 viewName:(id)arg3 error:(id*)arg4;
- (bool)behaviorUnderstandingInjectTagForPersonID:(id)arg1 tagType:(id)arg2 confidence:(double)arg3 error:(id*)arg4;
- (bool)behaviorUnderstandingMockEntityRelevanceContextWithDate:(id)arg1 error:(id*)arg2;
- (id)behaviorUnderstandingRecentBehaviorsOfType:(id)arg1 error:(id*)arg2;
- (id)behaviorUnderstandingSampleEntityTaggingFeaturesForPersonID:(id)arg1 error:(id*)arg2;
- (id)behaviorUnderstandingShowEntityTaggingInjectedTagsWithError:(id*)arg1;
- (id)behaviorUnderstandingStatusWithError:(id*)arg1;
- (bool)behaviorUnderstandingTriggerEntityTaggingDataCollectionWithError:(id*)arg1;
- (bool)benchmarkWithError:(id*)arg1;
- (bool)clearStatusWithError:(id*)arg1;
- (id)contextDataForSource:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 error:(id*)arg4;
- (void)dealloc;
- (id)featureKeysWithError:(id*)arg1;
- (id)generateActivityCentricLifeEventsFromStartDate:(id)arg1 toEndDate:(id)arg2 error:(id*)arg3;
- (id)init;
- (void)locked_establishConnection;
- (id)photosMetadataWithStartDate:(id)arg1 endDate:(id)arg2 maxEvents:(long long)arg3 newestFirst:(bool)arg4 error:(id*)arg5;
- (id)resolveEntityWithRequest:(id)arg1 enableSessionLogging:(bool)arg2 configName:(id)arg3 encodedConfig:(id)arg4 withError:(id*)arg5;
- (bool)runDeltaUpdatePipelineWithSource:(id)arg1 error:(id*)arg2;
- (bool)runToMatchingPipelineWithError:(id*)arg1;
- (id)statsWithError:(id*)arg1;
- (id)statusWithError:(id*)arg1;
- (bool)stopPipelineWithError:(id*)arg1;
- (id)synchronousRemoteObjectProxyWithErrorHandler:(id /* block */)arg1;
- (id)triplesQueryWithQuery:(id)arg1;
- (id)validateGraph:(id*)arg1;
- (id)vectorSearchBenchmarkWithConfigFilePath:(id)arg1 error:(id*)arg2;
- (id)viewInfoWithViewQuery:(id)arg1 rows:(id)arg2 error:(id*)arg3;
- (id)viewSqlWithName:(id)arg1 statement:(id)arg2 error:(id*)arg3;

@end
