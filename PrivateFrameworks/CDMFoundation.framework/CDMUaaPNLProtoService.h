
@interface CDMUaaPNLProtoService : CDMDAGBaseService {
    NSSet * __appModelBundles;
    UPModelBundle * __coreModelBundle;
    _TtC13CDMFoundation23CDMUaaPNLOverridesProxy * __overridesProxy;
    bool  __useMemoryForOverrideStore;
}

+ (id)createErrorResponse:(id)arg1;
+ (id)detectForegroundAppForLocale:(id)arg1;
+ (id)getAssetFolderNamesByTrialFactorNames;
+ (bool)isAssetRequired;
+ (bool)isEnabled;
+ (id)loadAppModelBundles:(id)arg1;
+ (id)loadModelBundle:(id)arg1 error:(id*)arg2;

- (void).cxx_destruct;
- (void)addOverride:(id)arg1;
- (void)cleanOverride;
- (int)getOverrideNamespace;
- (id)handle:(id)arg1;
- (id)handleRequestCommandTypeNames;
- (void)loadOverrides:(id)arg1;
- (id)match:(id)arg1 requestId:(id)arg2;
- (id)setup:(id)arg1;

@end
