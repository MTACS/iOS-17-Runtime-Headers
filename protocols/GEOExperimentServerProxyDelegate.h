
@protocol GEOExperimentServerProxyDelegate <NSObject>

@required

- (void)serverProxy:(id <GEOExperimentServerProxy>)arg1 didChangeExperimentsInfo:(GEOABAssignmentResponse *)arg2;

@end
