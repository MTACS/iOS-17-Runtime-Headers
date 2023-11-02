
@interface CDMLVCService : CDMDAGBaseService {
    SNLPLanguageVariantClassifier * _lvcOrchestrator;
    SiriNLUOverrideProxy * _overrideProxy;
}

+ (id)assetsPathURLForModelBundle:(id)arg1;
+ (id)buildMultiLingualVariant:(id)arg1;
+ (id)getAssetFolderNamesByTrialFactorNames;
+ (bool)isAssetRequired;
+ (bool)isEnabled;

- (void).cxx_destruct;
- (void)_prewarmModelWithEmbeddingConfigItem:(id)arg1;
- (id)doInference:(id)arg1 error:(id*)arg2;
- (id)getSNLPLanguageVariantClassifierPath:(id)arg1 error:(id*)arg2;
- (id)handle:(id)arg1;
- (id)handleRequestCommandTypeNames;
- (bool)initializeLVCOverrides:(id)arg1;
- (id)setup:(id)arg1;

@end
