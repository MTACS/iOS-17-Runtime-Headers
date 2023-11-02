
@interface MAAutoAssetControl : NSObject <SUCoreConnectClientDelegate> {
    NSObject<OS_dispatch_queue> * _completionDispatchQueue;
    SUCoreConnectClient * _connectionClient;
    NSString * _controlClientName;
    long long  _controlClientProcessID;
    NSString * _controlClientProcessName;
}

@property (nonatomic, readonly, retain) NSObject<OS_dispatch_queue> *completionDispatchQueue;
@property (nonatomic, retain) SUCoreConnectClient *connectionClient;
@property (nonatomic, readonly, retain) NSString *controlClientName;
@property (nonatomic, readonly) long long controlClientProcessID;
@property (nonatomic, readonly, retain) NSString *controlClientProcessName;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)activeJobSummary:(bool)arg1 error:(id*)arg2;
+ (id)activeJobSummary:(bool)arg1 limitedToAssetTypes:(id)arg2 error:(id*)arg3;
+ (id)assetSelectorOrAllSelector:(id)arg1;
+ (id)autoAssetControl;
+ (id)controlStatistics:(bool)arg1 error:(id*)arg2;
+ (id)defaultDispatchQueue;
+ (id)forceGlobalAbandon:(id)arg1;
+ (id)forceGlobalForget:(id)arg1;
+ (id)forceGlobalPurge:(id)arg1 forcingUnlock:(bool)arg2;
+ (id)forceGlobalUnlock:(id)arg1;
+ (id)frameworkDispatchQueue;
+ (void)frameworkInstanceSetLogDomain;
+ (id)frameworkInstanceUUID;
+ (id)knownAssetSummary:(bool)arg1 error:(id*)arg2;
+ (id)knownAssetSummary:(bool)arg1 limitedToAssetTypes:(id)arg2 error:(id*)arg3;
+ (id)lockedAssetSummary:(bool)arg1 error:(id*)arg2;
+ (id)lockedAssetSummary:(bool)arg1 limitedToAssetTypes:(id)arg2 error:(id*)arg3;
+ (id)pushNotificationHistory:(bool)arg1 error:(id*)arg2;
+ (id)scheduledJobSummary:(bool)arg1 error:(id*)arg2;
+ (id)scheduledJobSummary:(bool)arg1 limitedToAssetTypes:(id)arg2 error:(id*)arg3;
+ (long long)simulateCacheDeleteDetermineReclaimableSpace:(id)arg1 withUrgency:(int)arg2 error:(id*)arg3;
+ (long long)simulateCacheDeleteReclaimSpace:(id)arg1 withUrgency:(int)arg2 targetingPurgeAmount:(long long)arg3 error:(id*)arg4;
+ (id)simulateSetJobOperation:(long long)arg1 withEndEvent:(long long)arg2 forSelector:(id)arg3;
+ (id)stagedAssetSummary:(bool)arg1 error:(id*)arg2;
+ (id)stagedAssetSummary:(bool)arg1 limitedToAssetTypes:(id)arg2 error:(id*)arg3;
+ (long long)waitOnSemaphore:(id)arg1 withTimeout:(long long)arg2;

- (void).cxx_destruct;
- (void)_activeJobSummary:(bool)arg1 limitedToAssetTypes:(id)arg2 completion:(id /* block */)arg3;
- (void)_controlStatistics:(bool)arg1 completion:(id /* block */)arg2;
- (void)_failedControl:(id)arg1 withErrorCode:(long long)arg2 withResponseError:(id)arg3 description:(id)arg4 completion:(id /* block */)arg5;
- (void)_failedControlLockSummary:(id)arg1 withErrorCode:(long long)arg2 withResponseError:(id)arg3 description:(id)arg4 completion:(id /* block */)arg5;
- (void)_failedControlStatistics:(id)arg1 withErrorCode:(long long)arg2 withResponseError:(id)arg3 description:(id)arg4 completion:(id /* block */)arg5;
- (void)_failedControlSummary:(id)arg1 withErrorCode:(long long)arg2 withResponseError:(id)arg3 description:(id)arg4 completion:(id /* block */)arg5;
- (void)_failedSimulateCacheDeleteOperation:(id)arg1 withErrorCode:(long long)arg2 withResponseError:(id)arg3 description:(id)arg4 completion:(id /* block */)arg5;
- (void)_forceGlobalAbandon:(id)arg1 completion:(id /* block */)arg2;
- (void)_forceGlobalForget:(id)arg1 completion:(id /* block */)arg2;
- (void)_forceGlobalPurge:(id)arg1 forcingUnlock:(bool)arg2 completion:(id /* block */)arg3;
- (void)_forceGlobalUnlock:(id)arg1 completion:(id /* block */)arg2;
- (void)_knownAssetSummary:(bool)arg1 limitedToAssetTypes:(id)arg2 completion:(id /* block */)arg3;
- (void)_lockedAssetSummary:(bool)arg1 limitedToAssetTypes:(id)arg2 completion:(id /* block */)arg3;
- (void)_scheduledJobSummary:(bool)arg1 limitedToAssetTypes:(id)arg2 completion:(id /* block */)arg3;
- (void)_simulateCacheDeleteDetermineReclaimableSpace:(id)arg1 withUrgency:(int)arg2 error:(id*)arg3 completion:(id /* block */)arg4;
- (void)_simulateCacheDeleteReclaimSpace:(id)arg1 withUrgency:(int)arg2 targetingPurgeAmount:(long long)arg3 error:(id*)arg4 completion:(id /* block */)arg5;
- (void)_simulateSetJobOperation:(long long)arg1 withEndEvent:(long long)arg2 forSelector:(id)arg3 completion:(id /* block */)arg4;
- (void)_stagedAssetSummary:(bool)arg1 limitedToAssetTypes:(id)arg2 completion:(id /* block */)arg3;
- (void)_successControl:(id)arg1 completion:(id /* block */)arg2;
- (void)_successControlLockSummary:(id)arg1 withLockSummaryEntries:(id)arg2 completion:(id /* block */)arg3;
- (void)_successControlStatistics:(id)arg1 withControlStatistics:(id)arg2 completion:(id /* block */)arg3;
- (void)_successControlSummary:(id)arg1 withJobSummaryEntries:(id)arg2 completion:(id /* block */)arg3;
- (void)_successSimulateCacheDeleteOperation:(id)arg1 withReclaimableSpace:(long long)arg2 completion:(id /* block */)arg3;
- (id)completionDispatchQueue;
- (void)connectToServerFrameworkCompletion:(id /* block */)arg1;
- (id)connectionClient;
- (void)connectionClosed;
- (id)controlClientName;
- (long long)controlClientProcessID;
- (id)controlClientProcessName;
- (void)handleMessage:(id)arg1 reply:(id /* block */)arg2;
- (void)handleResponse:(id)arg1 error:(id)arg2;
- (id)init;
- (void)setConnectionClient:(id)arg1;

@end
