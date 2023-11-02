
@interface HMDHomeAssistantOperation : HMFObject <HMFTimerDelegate> {
    NSSet * _accessoriesToOperateOn;
    HMFTimer * _accessoryConnectivityWaitTimer;
    id /* block */  _completionHandler;
    bool  _completionHandlerCalled;
    NSMutableSet * _reachableAccessoriesToOperateOn;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)homeAssistantOperationWithActionSet:(id)arg1 queue:(id)arg2;
+ (id)homeAssistantOperationWithReadRequests:(id)arg1 queue:(id)arg2;
+ (id)homeAssistantOperationWithWriteRequests:(id)arg1 queue:(id)arg2;

- (void).cxx_destruct;
- (void)dealloc;
- (void)handleAccessoryIsReachable:(id)arg1;
- (void)startWithCompletion:(id /* block */)arg1;
- (void)timerDidFire:(id)arg1;

@end
