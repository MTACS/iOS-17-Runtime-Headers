
@interface CDMEmbeddingServiceGraph : CDMServiceGraph

+ (int)getNLXSchemaCDMServiceGraphName;
+ (id)requiredDAGServices;
+ (id)responseFeatureStoreStreamId;
+ (id)serializeFeatureStoreWithResponseCmd:(id)arg1;

- (void)buildGraph;
- (Class)supportedGraphInputType;

@end
