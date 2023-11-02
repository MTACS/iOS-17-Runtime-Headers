
@interface HMDAssistantCommandExecutor : NSObject <HMFTimerDelegate> {
    NSMutableArray * _actionResults;
    NSString * _clientValidity;
    id /* block */  _completionHandler;
    HMFTimer * _executionTimer;
    HMDAssistantCommand * _initialCommand;
    HMFMessageDispatcher * _msgDispatcher;
    NSMutableDictionary * _pendingCommands;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)executorWithCommand:(id)arg1 workQueue:(id)arg2 messageDispatcher:(id)arg3;

- (void).cxx_destruct;
- (id)_command;
- (id)initWithCommand:(id)arg1 workQueue:(id)arg2 messageDispatcher:(id)arg3;
- (void)performWithCompletion:(id /* block */)arg1;
- (void)timerDidFire:(id)arg1;

@end
