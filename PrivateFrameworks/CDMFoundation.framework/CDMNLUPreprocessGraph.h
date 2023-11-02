
@interface CDMNLUPreprocessGraph : CDMServiceGraph

+ (int)getNLXSchemaCDMServiceGraphName;
+ (id)requiredDAGServices;

- (void)buildGraph;
- (Class)supportedGraphInputType;

@end
