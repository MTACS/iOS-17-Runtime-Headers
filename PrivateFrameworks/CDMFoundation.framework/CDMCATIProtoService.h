
@interface CDMCATIProtoService : CDMDAGBaseService {
    long long  _assetVersion;
    NSBundle * _catiBundle;
    NSMutableArray * _childServices;
}

+ (id)getAssetFolderNamesByTrialFactorNames;
+ (bool)isEnabled;

- (void).cxx_destruct;
- (id)getChildServices;
- (long long)getServiceState;
- (id)handle:(id)arg1;
- (id)handleRequestCommandTypeNames;
- (id)setup:(id)arg1;
- (id)setupErrorResponse:(id)arg1 serviceState:(long long)arg2;

@end
