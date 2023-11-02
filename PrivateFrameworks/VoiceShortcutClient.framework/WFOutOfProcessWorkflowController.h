
@interface WFOutOfProcessWorkflowController : NSObject <WFOutOfProcessWorkflowControllerHost, WFOutOfProcessWorkflowControllerStateMachineDelegate> {
    WFDialogAttribution * _currentDialogAttribution;
    WFWorkflowDescriptor * _currentWorkflow;
    <WFOutOfProcessWorkflowControllerDelegate> * _delegate;
    long long  _environment;
    bool  _isAutomation;
    long long  _presentationMode;
    WFWorkflowRunRequest * _runRequest;
    <WFOutOfProcessWorkflowControllerVendor> * _runner;
    WFWorkflowRunningContext * _runningContext;
    WFSandboxExtensionManager * _sandboxExtensionManager;
    NSXPCConnection * _serviceConnection;
    WFOutOfProcessWorkflowControllerStateMachine * _stateMachine;
}

@property (nonatomic, copy) WFDialogAttribution *currentDialogAttribution;
@property (nonatomic, retain) WFWorkflowDescriptor *currentWorkflow;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <WFOutOfProcessWorkflowControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) long long environment;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isAutomation;
@property (nonatomic) long long presentationMode;
@property (nonatomic, retain) WFWorkflowRunRequest *runRequest;
@property (nonatomic, retain) <WFOutOfProcessWorkflowControllerVendor> *runner;
@property (getter=isRunning, nonatomic, readonly) bool running;
@property (nonatomic, readonly, copy) WFWorkflowRunningContext *runningContext;
@property (nonatomic, readonly) WFSandboxExtensionManager *sandboxExtensionManager;
@property (nonatomic, retain) NSXPCConnection *serviceConnection;
@property (nonatomic, readonly) WFOutOfProcessWorkflowControllerStateMachine *stateMachine;
@property (readonly) Class superclass;

// Image: /System/Library/PrivateFrameworks/VoiceShortcutClient.framework/VoiceShortcutClient

- (void).cxx_destruct;
- (id)asynchronousRunnerWithError:(out id*)arg1 reason:(id)arg2;
- (void)controllerStateMachine:(id)arg1 didFinishRunningShortcutWithResult:(id)arg2;
- (void)controllerStateMachine:(id)arg1 didRequestStoppingShortcutWithError:(id)arg2;
- (void)controllerStateMachine:(id)arg1 shouldNotifyDelegateWithResult:(id)arg2 currentDialogAttribution:(id)arg3;
- (void)controllerStateMachineDidRequestRunnerTearDown:(id)arg1;
- (id)currentDialogAttribution;
- (id)currentWorkflow;
- (id)delegate;
- (long long)environment;
- (void)getCurrentProgressCompletedWithCompletionHandler:(id /* block */)arg1;
- (void)handleIncomingFileForRemoteExecutionWithURL:(id)arg1 withIdentifier:(id)arg2;
- (id)initWithEnvironment:(long long)arg1 runningContext:(id)arg2 presentationMode:(long long)arg3;
- (id)initWithEnvironment:(long long)arg1 runningContext:(id)arg2 presentationMode:(long long)arg3 existingConnection:(id)arg4;
- (bool)isAutomation;
- (bool)isRunning;
- (id)localizedTimeoutErrorDescription;
- (id)localizedXPCInterruptionErrorDescription;
- (void)pauseWorkflowAndWriteStateToDisk;
- (long long)presentationMode;
- (void)presenterRequestedUpdatedRunViewSource:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)reset;
- (bool)resumeRunningWithRequest:(id)arg1 error:(out id*)arg2;
- (bool)runActionWithRunRequestData:(id)arg1 error:(out id*)arg2;
- (id)runRequest;
- (bool)runWorkflowWithDescriptor:(id)arg1 request:(id)arg2 error:(out id*)arg3;
- (id)runner;
- (void)runnerDidPunchToShortcutsJr;
- (void)runnerWillExit;
- (id)runnerWithError:(out id*)arg1 synchronous:(bool)arg2 reason:(id)arg3;
- (id)runningContext;
- (id)sandboxExtensionManager;
- (id)serviceConnection;
- (void)setCurrentDialogAttribution:(id)arg1;
- (void)setCurrentWorkflow:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setIsAutomation:(bool)arg1;
- (void)setPresentationMode:(long long)arg1;
- (void)setRunRequest:(id)arg1;
- (void)setRunner:(id)arg1;
- (void)setServiceConnection:(id)arg1;
- (id)stateMachine;
- (void)stop;
- (id)synchronousRunnerWithError:(out id*)arg1 reason:(id)arg2;
- (void)updateRunViewSource:(id)arg1;
- (void)workflowDidPause;
- (void)workflowDidStartRunning:(id)arg1 isAutomation:(bool)arg2 dialogAttribution:(id)arg3;

// Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit

+ (id)computeFinderResizedSizesForImages:(id)arg1 inSizes:(id)arg2 error:(id*)arg3;
+ (id)contextualActionsForContext:(id)arg1 error:(id*)arg2;
+ (id)filteredContextualActions:(id)arg1 forContext:(id)arg2 error:(id*)arg3;

- (void)createSleepWorkflow:(id)arg1 completion:(id /* block */)arg2;
- (void)populateSleepWorkflowsFromWorkflows:(id)arg1 completion:(id /* block */)arg2;

@end
