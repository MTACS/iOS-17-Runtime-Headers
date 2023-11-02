
@interface CDMNLServiceUtils : NSObject

+ (void)_setWarmupRequestId:(id /* block */)arg1;
+ (void)_sortMultilingualVariantsByScoreDescending:(id)arg1;
+ (id)buildLVCResponse:(id)arg1 lvcRequest:(id)arg2;
+ (struct unique_ptr<sirinluinternalnlv4_parser::NLv4ParserRequest, std::default_delete<sirinluinternalnlv4_parser::NLv4ParserRequest>> { struct __compressed_pair<sirinluinternalnlv4_parser::NLv4ParserRequest *, std::default_delete<sirinluinternalnlv4_parser::NLv4ParserRequest>> { struct NLv4ParserRequest {} *x_1_1_1; } x1; })buildNLv4ProtoRequest:(id)arg1;
+ (id)buildPSCResponse:(id)arg1 pscRequest:(id)arg2;
+ (id)buildPSCUserParseForExternalParserId:(id)arg1 probability:(float)arg2 rewriteMsg:(id)arg3;
+ (id)buildSNLCProtoResponse:(id)arg1 snlcRequest:(id)arg2 parserToSet:(id)arg3;
+ (id)buildSetupITFMRequest:(id)arg1;
+ (id)buildSetupNLv4ProtoRequest:(id)arg1;
+ (id)buildSetupSNLCProtoRequest:(id)arg1;
+ (id)getPscOverrideProbabilityForLabel:(int)arg1;
+ (void)populateParser:(id)arg1 parserToSet:(id)arg2;

@end
