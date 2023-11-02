
@interface CDMFeatureStoreUtils : NSObject

+ (id)allowedFSMessagesOnExternalBuilds;
+ (bool)checkFeatureStoreEnabledForExternalBuilds:(id)arg1;
+ (bool)insertJsonStringToFeatureStore:(id)arg1 interactionId:(id)arg2 streamId:(id)arg3;
+ (bool)insertLVCRequestToFeatureStore:(id)arg1 interactionId:(id)arg2;
+ (bool)insertLVCResponseToFeatureStore:(id)arg1 interactionId:(id)arg2;
+ (bool)insertMDRequestToFeatureStore:(id)arg1 interactionId:(id)arg2;
+ (bool)insertMDResponseToFeatureStore:(id)arg1 interactionId:(id)arg2;
+ (bool)insertMRRequestToFeatureStore:(id)arg1 interactionId:(id)arg2;
+ (bool)insertMRResponseToFeatureStore:(id)arg1 interactionId:(id)arg2;
+ (bool)insertNLv4ParserRequestToFeatureStore:(id)arg1 interactionId:(id)arg2;
+ (bool)insertNLv4ParserResponseToFeatureStore:(id)arg1 interactionId:(id)arg2;
+ (bool)insertPSCRequestToFeatureStore:(id)arg1 interactionId:(id)arg2;
+ (bool)insertPSCResponseToFeatureStore:(id)arg1 interactionId:(id)arg2;
+ (bool)insertPreprocessingWrapperToFeatureStore:(id)arg1 interactionId:(id)arg2;
+ (bool)insertRequestToFeatureStoreAsJson:(id)arg1;
+ (bool)insertResponseToFeatureStoreAsJson:(id)arg1;
+ (bool)insertSNLCRequestToFeatureStore:(id)arg1 interactionId:(id)arg2;
+ (bool)insertSNLCResponseToFeatureStore:(id)arg1 interactionId:(id)arg2;
+ (bool)insertSpanMatchResponseToFeatureStore:(id)arg1 interactionId:(id)arg2;
+ (bool)insertTokenizerResponseToFeatureStore:(id)arg1 interactionId:(id)arg2;
+ (bool)insertUaaPParserRequestToFeatureStore:(id)arg1 interactionId:(id)arg2;
+ (bool)insertUaaPParserResponseToFeatureStore:(id)arg1 interactionId:(id)arg2;
+ (bool)platformSupportedAndEnabled;

@end
