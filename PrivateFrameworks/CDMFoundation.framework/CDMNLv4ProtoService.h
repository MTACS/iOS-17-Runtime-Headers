
@interface CDMNLv4ProtoService : CDMDAGBaseService {
    SNLPNaturalLanguageParser * _parser;
}

+ (id)assetsPathURLForModelBundle:(id)arg1;
+ (id)buildEmptyNLv4ResponseCommand:(id)arg1;
+ (id)getAssetFolderNamesByTrialFactorNames;
+ (id)getParserEnum;
+ (void)handleTrialAssetUpdate:(id)arg1 selfMetadata:(id)arg2;
+ (void)handleXPCActivity:(id)arg1 withAssets:(id)arg2 withSelfMetadata:(id)arg3;
+ (void)handleXPCEvent:(id)arg1 fromStream:(id)arg2 withAssets:(id)arg3 withSelfMetadata:(id)arg4;
+ (id)parserFromAssetDirectory:(id)arg1 selfMetadata:(id)arg2 error:(id*)arg3;
+ (id)xpcActivitySupported;
+ (id)xpcEventStreamsSupported;

- (void).cxx_destruct;
- (id)assetsPathURLForModelBundle:(id)arg1;
- (id)buildNLv4ResponseCommand:(id)arg1 requestId:(id)arg2;
- (id)doNLv4Inference:(id)arg1 outError:(id*)arg2;
- (id)handle:(id)arg1;
- (id)handleRequestCommandTypeNames;
- (id)parserFromAssetDirectory:(id)arg1 selfMetadata:(id)arg2 error:(id*)arg3;
- (id)setup:(id)arg1;

@end
