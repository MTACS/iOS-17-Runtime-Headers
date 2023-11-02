
@interface WFWorkflowRunnerClient : NSObject <WFOutOfProcessWorkflowControllerDelegate> {
    WFWorkflowRunningContext * _context;
    <WFWorkflowRunnerClientDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _delegateQueue;
    WFWorkflowRunDescriptor * _descriptor;
    id  _progressSubscriber;
    WFWorkflowRunRequest * _runRequest;
    WFWorkflowRunViewSource * _runViewSource;
    WFWorkflowRunnerClient * _strongSelf;
    WFOutOfProcessWorkflowController * _workflowController;
}

@property (nonatomic, retain) WFWorkflowRunningContext *context;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <WFWorkflowRunnerClientDelegate> *delegate;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *delegateQueue;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) WFWorkflowRunDescriptor *descriptor;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) id progressSubscriber;
@property (nonatomic, retain) WFWorkflowRunRequest *runRequest;
@property (nonatomic, copy) WFWorkflowRunViewSource *runViewSource;
@property (getter=isRunning, nonatomic, readonly) bool running;
@property (readonly) Class superclass;
@property (nonatomic, retain) WFOutOfProcessWorkflowController *workflowController;

+ (id)underlyingErrorIfRunnerError:(id)arg1;

- (void).cxx_destruct;
- (void)autoreleaseSelf;
- (void)beginObservingProgressForWorkflowWithRunningContext:(id)arg1;
- (id)context;
- (id)createRunningContextFromRequestIfNecessary:(id)arg1 descriptor:(id)arg2;
- (id)createWorkflowControllerWithContext:(id)arg1;
- (id)delegate;
- (id)delegateQueue;
- (id)descriptor;
- (void)dispatchWorkflowResultHandlingWithResult:(id)arg1;
- (void)handleWorkflowDidStart:(id)arg1;
- (void)handleWorkflowRunResult:(id)arg1 completion:(id /* block */)arg2;
- (id)initWithDescriptor:(id)arg1 runRequest:(id)arg2;
- (id)initWithDescriptor:(id)arg1 runRequest:(id)arg2 delegateQueue:(id)arg3;
- (bool)isRunning;
- (void)outOfProcessWorkflowController:(id)arg1 didFinishWithResult:(id)arg2 dialogAttribution:(id)arg3;
- (void)outOfProcessWorkflowController:(id)arg1 didRequestUpdatedRunViewSource:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)outOfProcessWorkflowController:(id)arg1 didStartFromWorkflowReference:(id)arg2 dialogAttribution:(id)arg3;
- (void)pause;
- (id)prewarmManager;
- (void)prewarmRunner;
- (id)progressSubscriber;
- (void)resume;
- (void)retainSelf;
- (id)runRequest;
- (id)runViewSource;
- (id)runWorkflowWithRequest:(id)arg1 descriptor:(id)arg2 completion:(id /* block */)arg3;
- (void)setContext:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDescriptor:(id)arg1;
- (void)setProgressSubscriber:(id)arg1;
- (void)setRunRequest:(id)arg1;
- (void)setRunViewSource:(id)arg1;
- (void)setWorkflowController:(id)arg1;
- (void)start;
- (void)stop;
- (void)stopObservingRunProgress;
- (void)updateRunViewSource:(id)arg1;
- (id)workflowController;

@end
