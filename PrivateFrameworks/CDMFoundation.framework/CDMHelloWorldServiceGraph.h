
@interface CDMHelloWorldServiceGraph : CDMServiceGraph

+ (int)getNLXSchemaCDMServiceGraphName;
+ (id)requiredDAGServices;

- (void)buildGraph;
- (Class)supportedGraphInputType;

@end
