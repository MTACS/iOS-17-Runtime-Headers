
@interface BRCBuddyFlowObserver : NSObject {
    NSObject<OS_dispatch_queue> * _notificationQueue;
    NSOperationQueue * _observersQueue;
    NSMutableDictionary * _registerdKeyToToken;
    bool  _waitingForBuddy;
}

+ (id)sharedBuddyFlowObserver;

- (void).cxx_destruct;
- (id)_init;
- (void)_registerForSetupAssistantFinishedNotification;
- (void)_stopObservingBuddyAndExecuteCallbacks;
- (void)_unregisterForSetupAssistantFinishedNotification;
- (bool)doesBuddyFlowNeedsToRun;
- (bool)observeBuddyIfNecessaryWithKey:(id)arg1 block:(id /* block */)arg2 description:(id)arg3;
- (void)stopObservingBuddyWithKey:(id)arg1;

@end
