
@interface WFHandoffRunnerClient : WFWorkflowRunnerClient {
    WFWorkflowRunningContext * _runningContext;
    id /* block */  _runningDidStartHandler;
}

@property (nonatomic, readonly) WFWorkflowRunningContext *runningContext;
@property (nonatomic, copy) id /* block */ runningDidStartHandler;

- (void).cxx_destruct;
- (void)handleWorkflowDidStart:(id)arg1;
- (void)handleWorkflowRunResult:(id)arg1 completion:(id /* block */)arg2;
- (id)initWithRunningContext:(id)arg1 runRequest:(id)arg2;
- (id)initWithWorkflowControllerState:(id)arg1 runSource:(id)arg2 remoteDialogPresenterEndpoint:(id)arg3 error:(id*)arg4;
- (void)notifyStartHandlerWithProgress:(id)arg1;
- (id)runWorkflowWithRequest:(id)arg1 descriptor:(id)arg2 completion:(id /* block */)arg3;
- (id)runningContext;
- (id /* block */)runningDidStartHandler;
- (void)setRunningDidStartHandler:(id /* block */)arg1;
- (void)startWithHandler:(id /* block */)arg1;

@end
