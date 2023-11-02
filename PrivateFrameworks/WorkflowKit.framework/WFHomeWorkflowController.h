
@interface WFHomeWorkflowController : NSObject <WFOutOfProcessWorkflowControllerDelegate> {
    id /* block */  _completionHandler;
    WFHomeWorkflow * _workflow;
    WFOutOfProcessWorkflowController * _workflowController;
}

@property (nonatomic, copy) id /* block */ completionHandler;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isRunning, nonatomic, readonly) bool running;
@property (readonly) Class superclass;
@property (nonatomic, readonly) WFHomeWorkflow *workflow;
@property (nonatomic, readonly) WFOutOfProcessWorkflowController *workflowController;

- (void).cxx_destruct;
- (void)cancel;
- (id /* block */)completionHandler;
- (id)init;
- (id)initWithWorkflow:(id)arg1;
- (bool)isRunning;
- (void)outOfProcessWorkflowController:(id)arg1 didFinishWithResult:(id)arg2 dialogAttribution:(id)arg3;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)startWithCompletionHandler:(id /* block */)arg1;
- (id)workflow;
- (id)workflowController;

@end
