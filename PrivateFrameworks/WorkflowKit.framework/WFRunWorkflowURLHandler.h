
@interface WFRunWorkflowURLHandler : NSObject

+ (void)registerOpenWorkflowHandler:(id /* block */)arg1;
+ (void)registerRunWorkflowHandler:(id /* block */)arg1;
+ (id)workflowWithInputParameters:(id)arg1 error:(id*)arg2;
+ (id)workflowWithName:(id)arg1 identifier:(id)arg2 error:(id*)arg3;

@end
