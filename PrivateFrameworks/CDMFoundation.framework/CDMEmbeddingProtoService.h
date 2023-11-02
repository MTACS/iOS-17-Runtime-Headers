
@interface CDMEmbeddingProtoService : CDMDAGBaseService {
    CDMDataDispatcherContext * _dataDispatcherContext;
    NSMutableArray * _embedders;
    CDMEmbeddingConfigs * _embeddingConfigs;
}

+ (id)getAssetFolderNamesByTrialFactorNames;
+ (bool)isSiriInputRepresentationModel:(id)arg1;

- (void).cxx_destruct;
- (id)addEmbeddingModelItemToEmbedders:(id)arg1;
- (id)assetsPathURLForModelBundle:(id)arg1;
- (id)createEmbedderOrchestrator:(id)arg1;
- (id)createEmbedderOrchestrator:(id)arg1 embedding_bert_path:(id)arg2 embedding_config_path:(id)arg3 reformulation_path:(id)arg4;
- (id)createEmbeddingConfigItemEqualToNilResponse;
- (id)createEmbeddingProtoServiceErrorWithCode:(long long)arg1 description:(id)arg2;
- (id)createEmbeddingsBundleMissingPathResponse;
- (id)createEmptyEmbeddingsBundleResponse:(id)arg1;
- (id)createNoStableEmbeddingsModelFoundResponse;
- (id)createNotReadyForHandleProtoResponse;
- (id)createOrchestratorConstructFailureResponse;
- (id)doEmbedding:(id)arg1;
- (long long)getServiceState;
- (id)getSpecificEmbeddingModelItem:(id)arg1 dependentEmbeddingConfigs:(id)arg2 embeddingVersion:(id)arg3;
- (id)getStableEmbeddingModelItem:(id)arg1;
- (id)handle:(id)arg1;
- (id)handleRequestCommandTypeNames;
- (bool)hasEmbedderOrchestrator;
- (id)legacyEmbeddingPaths:(id)arg1;
- (void)setEmbedders:(id)arg1;
- (id)setup:(id)arg1;

@end
