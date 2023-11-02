
@interface CDMOverridesProtoService : CDMDAGBaseService {
    SiriNLUOverrideProxy * __store;
}

@property (nonatomic, readonly) SiriNLUOverrideProxy *store;

+ (id)getAssetFolderNamesByTrialFactorNames;
+ (void)handleXPCEvent:(id)arg1 fromStream:(id)arg2 withAssets:(id)arg3 withSelfMetadata:(id)arg4;
+ (bool)isAssetRequired;
+ (bool)isEnabled;
+ (id)pathToOverridesFileWithLanguageCode:(id)arg1 bundle:(id)arg2;
+ (id)xpcEventStreamsSupported;

- (void).cxx_destruct;
- (id)createSetupErrorCmd:(id)arg1;
- (void)dealloc;
- (id)handle:(id)arg1;
- (id)handleRequestCommandTypeNames;
- (id)matchOverride:(id)arg1 shouldAppend:(bool*)arg2;
- (id)setup:(id)arg1;
- (id)setupFailedFor:(id)arg1;
- (id)setupSucceeded;
- (id)store;

@end
