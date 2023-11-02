
@interface WFOutOfProcessWorkflowControllerStateMachine : WFStateMachine {
    <WFOutOfProcessWorkflowControllerStateMachineDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _delegateQueue;
}

@property (nonatomic) <WFOutOfProcessWorkflowControllerStateMachineDelegate> *delegate;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *delegateQueue;

- (void).cxx_destruct;
- (void)acquiringRunnerWithReason:(id)arg1;
- (bool)blocksTransitionsOnInvalidation;
- (id)delegate;
- (id)delegateQueue;
- (void)exitWithReason:(id)arg1;
- (void)finishRunningWithReason:(id)arg1 result:(id)arg2;
- (void)handleRunnerWillExit;
- (void)handleXPCErrorWithDescription:(id)arg1 reason:(id)arg2 currentDialogAttribution:(id)arg3;
- (void)handlingRequestWithReason:(id)arg1;
- (void)idleStateWithReason:(id)arg1;
- (id)init;
- (void)invalidate;
- (bool)isFinishingShortcut;
- (bool)isRunningShortcut;
- (void)notifyDelegateWithReason:(id)arg1 result:(id)arg2 currentDialogAttribution:(id)arg3;
- (void)pauseAndWriteShortcutToDiskState;
- (void)setDelegate:(id)arg1;
- (void)startRunningShortcutWithReason:(id)arg1;
- (void)stopShortcutWithError:(id)arg1 reason:(id)arg2;
- (void)tearDownRunnerWithReason:(id)arg1;

@end
