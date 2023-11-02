
@interface ActivityDispatcher : NSObject

+ (id)getErrorFailedCollectors:(id)arg1;
+ (id)getErrorNoCollectorDefinitionsToRun;
+ (id)getExecQ;

- (void)runCollectorsDefinedInParameters:(id)arg1 completion:(id /* block */)arg2;

@end
