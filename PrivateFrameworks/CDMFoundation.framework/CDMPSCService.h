
@interface CDMPSCService : CDMDAGBaseService {
    SNLPPommesServerClassifier * _pscOrchestrator;
}

+ (id)_emptyResponse;
+ (id)getAssetFolderNamesByTrialFactorNames;
+ (bool)isAssetRequired;
+ (bool)isEnabled;

- (void).cxx_destruct;
- (id)assetsPathURLForModelBundle:(id)arg1;
- (id)doInference:(id)arg1 error:(id*)arg2;
- (id)getSNLPPommesServerClassifierPath:(id)arg1 error:(id*)arg2;
- (id)handle:(id)arg1;
- (id)handleRequestCommandTypeNames;
- (id)setup:(id)arg1;

@end
