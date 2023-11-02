
@interface WFRemoteQuarantinePolicyEvaluator : NSObject {
    <WFRemoteQuarantinePolicyEvaluatorDelegate> * _delegate;
    NSThread * _javaScriptEvaluationThread;
    struct __CFRunLoop { } * _javaScriptEvaluationThreadRunLoop;
    JSVirtualMachine * _javaScriptVirtualMachine;
    NSTimer * _javaScriptVirtualMachineDestructionTimer;
}

@property (nonatomic) <WFRemoteQuarantinePolicyEvaluatorDelegate> *delegate;
@property (nonatomic, readonly) NSThread *javaScriptEvaluationThread;
@property (nonatomic, readonly) struct __CFRunLoop { }*javaScriptEvaluationThreadRunLoop;
@property (nonatomic, retain) JSVirtualMachine *javaScriptVirtualMachine;
@property (nonatomic, readonly) NSTimer *javaScriptVirtualMachineDestructionTimer;

+ (id)sharedEvaluator;

- (void).cxx_destruct;
- (void)_evaluatePolicyForRequest:(id)arg1 completion:(id /* block */)arg2;
- (void)dealloc;
- (id)delegate;
- (void)evaluatePolicyForRequest:(id)arg1 completion:(id /* block */)arg2;
- (id)init;
- (id)javaScriptEvaluationThread;
- (struct __CFRunLoop { }*)javaScriptEvaluationThreadRunLoop;
- (id)javaScriptVirtualMachine;
- (id)javaScriptVirtualMachineDestructionTimer;
- (id)remoteQuarantineHashForWorkflowReference:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setJavaScriptVirtualMachine:(id)arg1;

@end
