
@interface FCCommandQueue : NSObject <FCAppActivityObserving, FCCommandDelegate, FCNetworkReachabilityObserving> {
    FCCloudContext * _context;
    NSObject<OS_dispatch_source> * _cooldownTimer;
    <FCCommandQueueDelegate> * _delegate;
    bool  _executingCommand;
    NSObject<OS_dispatch_group> * _executingCommandsGroup;
    NSString * _name;
    NSMutableArray * _pendingCommands;
    NSObject<OS_dispatch_group> * _pendingCommandsGroup;
    FCKeyValueStore * _persistentStore;
    NSString * _persistentStorePath;
    bool  _suspended;
    long long  _urgency;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)activityObservingApplicationDidEnterBackground;
- (void)addCommand:(id)arg1;
- (void)addCommand:(id)arg1 saveCompletion:(id /* block */)arg2;
- (void)clear;
- (void)command:(id)arg1 didFinishWithStatus:(unsigned long long)arg2;
- (void)dealloc;
- (void)flushWithCompletionHandler:(id /* block */)arg1;
- (id)initWithContext:(id)arg1 storeDirectory:(id)arg2 storeFilename:(id)arg3 urgency:(long long)arg4 suspended:(bool)arg5 delegate:(id)arg6;
- (id)initWithContext:(id)arg1 urgency:(long long)arg2 suspended:(bool)arg3 delegate:(id)arg4;
- (void)networkReachabilityDidChange:(id)arg1;
- (void)resume;

@end
