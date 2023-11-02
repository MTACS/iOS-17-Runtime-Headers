
@interface CDMSNLCProtoService : CDMDAGBaseService {
    SNLPServerNLClassifier * _snlcOrchestrator;
}

+ (id)_stockServerResponse;
+ (id)getAssetFolderNamesByTrialFactorNames;
+ (id)getParserEnum;

- (void).cxx_destruct;
- (id)assetsPathURLForModelBundle:(id)arg1;
- (id)doInference:(id)arg1 error:(id*)arg2;
- (id)getSNLPServerNLClassifierPath:(id)arg1 error:(id*)arg2;
- (id)handle:(id)arg1;
- (id)handleRequestCommandTypeNames;
- (id)setup:(id)arg1;

@end
