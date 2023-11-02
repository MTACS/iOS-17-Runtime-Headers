
@interface TRIDServer : NSObject {
    TRIServerContext * _context;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    bool  _isRunning;
    TRIXPCServerContextPromise * _promise;
    TRITaskQueue * _taskQueue;
    TRIXPCActivityManager * _xpcActivityManager;
}

@property (nonatomic, readonly) bool isRunning;

+ (id)_triPath;
+ (id)sharedServer;

- (void).cxx_destruct;
- (void)_asyncStartWithMetrics:(id)arg1;
- (void)_dispatchWhenUnlocked:(id /* block */)arg1;
- (void)_excludeUserLevelTrialFromTimeMachineBackups;
- (unsigned long long)_getDiskUsageInBytes;
- (void)_logMetrics:(id)arg1 stopwatch:(id)arg2;
- (void)_registerSetupAssistantFetchActivityOnce;
- (void)_registerXpcStreamEventHandler;
- (void)_updateSystemInfo;
- (id)init;
- (id)initWithPath:(id)arg1;
- (bool)isRunning;
- (void)start;

@end
