
@protocol FBSSceneHandle <NSObject>

@required

- (FBSSerialQueue *)callOutQueue;
- (<FBSProcess> *)clientProcess;
- (void)closeSession:(FBSSceneActivitySession *)arg1;
- (<FBSSceneAgentProxy> *)counterpartAgent;
- (FBSSceneDefinition *)definition;
- (<FBSProcess> *)hostProcess;
- (NSString *)identifier;
- (FBSSceneActivitySession *)openSessionWithName:(NSString *)arg1 executionPolicy:(FBSProcessExecutionPolicy *)arg2;
- (FBSSceneParameters *)parameters;
- (FBSSceneSpecification *)specification;

@end
