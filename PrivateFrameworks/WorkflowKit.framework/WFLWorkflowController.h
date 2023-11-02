
@interface WFLWorkflowController : NSObject <WFActionParameterInputProvider, WFUserInterfaceHost, WFWorkflowControllerDelegate> {
    NSArray * _airPlayRouteIDs;
    WFWorkflowController * _controller;
    <WFLWorkflowControllerDelegate> * _delegate;
    long long  _executionContext;
    INInteraction * _lastInteraction;
    WFWorkflowRunEvent * _runEvent;
}

@property (nonatomic, readonly, copy) NSArray *airPlayRouteIDs;
@property (nonatomic, readonly) WFWorkflowController *controller;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <WFLWorkflowControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) long long executionContext;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) INInteraction *lastInteraction;
@property (nonatomic, readonly) NSProgress *progress;
@property (nonatomic, retain) WFWorkflowRunEvent *runEvent;
@property (getter=isRunning, nonatomic, readonly) bool running;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *userInterfaceType;
@property (nonatomic, readonly) WFWorkflow *workflow;

- (void).cxx_destruct;
- (bool)action:(id)arg1 canProvideInputForParameter:(id)arg2;
- (void)action:(id)arg1 provideInputForParameters:(id)arg2 withDefaultStates:(id)arg3 prompts:(id)arg4 completionHandler:(id /* block */)arg5;
- (id)airPlayRouteIDs;
- (void)configureIntent:(id)arg1;
- (id)controller;
- (id)delegate;
- (bool)executeIntent:(id)arg1 completionHandler:(id /* block */)arg2;
- (long long)executionContext;
- (id)initWithWorkflow:(id)arg1;
- (bool)isRunning;
- (bool)isRunningInSiri;
- (id)lastInteraction;
- (void)launchAppWithCompletionHandler:(id /* block */)arg1;
- (bool)openInteractionInApp:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)openURL:(id)arg1 completionHandler:(id /* block */)arg2;
- (bool)openUserActivity:(id)arg1 bundleIdentifier:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)presentAlert:(id)arg1;
- (id)progress;
- (id)runEvent;
- (id)runSource;
- (void)runWithInput:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setExecutionContext:(long long)arg1;
- (void)setLastInteraction:(id)arg1;
- (void)setRunEvent:(id)arg1;
- (void)showConfirmInteraction:(id)arg1 prompt:(id)arg2 requireAuthentication:(bool)arg3 completionHandler:(id /* block */)arg4;
- (void)showConfirmInteraction:(id)arg1 requireAuthentication:(bool)arg2 requireConfirmation:(bool)arg3 completionHandler:(id /* block */)arg4;
- (void)showHandleInteraction:(id)arg1 prompt:(id)arg2 completionHandler:(id /* block */)arg3;
- (bool)speakText:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)stop;
- (id)userInterfaceForWorkflowController:(id)arg1;
- (id)userInterfaceType;
- (id)workflow;
- (void)workflowController:(id)arg1 didFinishRunningWithError:(id)arg2 cancelled:(bool)arg3;
- (void)workflowController:(id)arg1 didRunAction:(id)arg2;
- (bool)workflowController:(id)arg1 handleUnsupportedEnvironmentForAction:(id)arg2 currentState:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)workflowController:(id)arg1 prepareToRunAction:(id)arg2 withInput:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)workflowControllerWillRun:(id)arg1;

@end
