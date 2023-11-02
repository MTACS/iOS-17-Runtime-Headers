
@interface MAAutoAssetSetControl : NSObject <SUCoreConnectClientDelegate> {
    NSObject<OS_dispatch_queue> * _completionDispatchQueue;
    SUCoreConnectClient * _connectionClient;
    NSString * _controlClientDomainName;
    NSString * _controlClientName;
    long long  _controlClientProcessID;
    NSString * _controlClientProcessName;
}

@property (nonatomic, readonly, retain) NSObject<OS_dispatch_queue> *completionDispatchQueue;
@property (nonatomic, retain) SUCoreConnectClient *connectionClient;
@property (nonatomic, readonly, retain) NSString *controlClientDomainName;
@property (nonatomic, readonly, retain) NSString *controlClientName;
@property (nonatomic, readonly) long long controlClientProcessID;
@property (nonatomic, readonly, retain) NSString *controlClientProcessName;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)activeSetJobSummary:(bool)arg1 error:(id*)arg2;
+ (id)activeSetJobSummary:(bool)arg1 limitedToSetIdentifiers:(id)arg2 error:(id*)arg3;
+ (id)assetSetDescriptorInfo:(id)arg1 error:(id*)arg2;
+ (id)assetSetsOverview:(id*)arg1;
+ (id)assetSetsOverview:(id)arg1 limitedToSetIdentifiers:(id)arg2 error:(id*)arg3;
+ (id)autoAssetSetControl;
+ (id)defaultDispatchQueue;
+ (id)frameworkDispatchQueue;
+ (void)frameworkInstanceSetLogDomain;
+ (id)frameworkInstanceUUID;
+ (id)knownAssetSetSummary:(bool)arg1 error:(id*)arg2;
+ (id)knownAssetSetSummary:(bool)arg1 limitedToSetIdentifiers:(id)arg2 error:(id*)arg3;
+ (id)lockedAssetSetSummary:(bool)arg1 error:(id*)arg2;
+ (id)lockedAssetSetSummary:(bool)arg1 limitedToSetIdentifiers:(id)arg2 error:(id*)arg3;
+ (id)scheduledSetJobSummary:(bool)arg1 error:(id*)arg2;
+ (id)scheduledSetJobSummary:(bool)arg1 limitedToSetIdentifiers:(id)arg2 error:(id*)arg3;
+ (id)stagedAssetSetSummary:(bool)arg1 error:(id*)arg2;
+ (id)stagedAssetSetSummary:(bool)arg1 limitedToSetIdentifiers:(id)arg2 error:(id*)arg3;
+ (long long)waitOnSemaphore:(id)arg1 withTimeout:(long long)arg2;

- (void).cxx_destruct;
- (void)_activeSetJobSummary:(bool)arg1 limitedToSetIdentifiers:(id)arg2 completion:(id /* block */)arg3;
- (void)_autoAssetInstanceInfo:(id)arg1 completion:(id /* block */)arg2;
- (void)_autoAssetsOverview:(id)arg1 limitedToSetIdentifiers:(id)arg2 completion:(id /* block */)arg3;
- (void)_failedControl:(id)arg1 withErrorCode:(long long)arg2 withResponseError:(id)arg3 description:(id)arg4 completion:(id /* block */)arg5;
- (void)_failedControlInstanceInfo:(id)arg1 withErrorCode:(long long)arg2 withResponseError:(id)arg3 description:(id)arg4 completion:(id /* block */)arg5;
- (void)_failedControlLockSummary:(id)arg1 withErrorCode:(long long)arg2 withResponseError:(id)arg3 description:(id)arg4 completion:(id /* block */)arg5;
- (void)_failedControlOverview:(id)arg1 withErrorCode:(long long)arg2 withResponseError:(id)arg3 description:(id)arg4 completion:(id /* block */)arg5;
- (void)_failedControlSummary:(id)arg1 withErrorCode:(long long)arg2 withResponseError:(id)arg3 description:(id)arg4 completion:(id /* block */)arg5;
- (void)_knownAssetSummary:(bool)arg1 limitedToSetIdentifiers:(id)arg2 completion:(id /* block */)arg3;
- (void)_lockedAssetSetSummary:(bool)arg1 limitedToSetIdentifiers:(id)arg2 completion:(id /* block */)arg3;
- (void)_scheduledSetJobSummary:(bool)arg1 limitedToSetIdentifiers:(id)arg2 completion:(id /* block */)arg3;
- (void)_stagedAssetSetSummary:(bool)arg1 limitedToSetIdentifiers:(id)arg2 completion:(id /* block */)arg3;
- (void)_successControl:(id)arg1 completion:(id /* block */)arg2;
- (void)_successControlInstanceInfo:(id)arg1 withInstanceInfo:(id)arg2 completion:(id /* block */)arg3;
- (void)_successControlLockSummary:(id)arg1 withLockSummaryEntries:(id)arg2 completion:(id /* block */)arg3;
- (void)_successControlOverview:(id)arg1 withOverviewEntries:(id)arg2 completion:(id /* block */)arg3;
- (void)_successControlSummary:(id)arg1 withJobSummaryEntries:(id)arg2 completion:(id /* block */)arg3;
- (id)completionDispatchQueue;
- (void)connectToServerFrameworkCompletion:(id /* block */)arg1;
- (id)connectionClient;
- (void)connectionClosed;
- (id)controlClientDomainName;
- (id)controlClientName;
- (long long)controlClientProcessID;
- (id)controlClientProcessName;
- (void)handleMessage:(id)arg1 reply:(id /* block */)arg2;
- (void)handleResponse:(id)arg1 error:(id)arg2;
- (id)init;
- (void)setConnectionClient:(id)arg1;

@end
