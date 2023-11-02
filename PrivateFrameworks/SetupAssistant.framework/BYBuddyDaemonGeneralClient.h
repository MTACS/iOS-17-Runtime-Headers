
@interface BYBuddyDaemonGeneralClient : NSObject {
    NSXPCConnection * _connection;
    NSLock * _connectionLock;
}

+ (id /* block */)factory;

- (void).cxx_destruct;
- (id)_daemonConnection;
- (id)backupMetadata;
- (void)cancelDataMigratorDeferredExit;
- (void)deferDataMigratorExit;
- (void)enrollInSeedProgramNamed:(id)arg1 withAssetAudience:(id)arg2 programID:(id)arg3;
- (void)ensureShortLivedTokenUpgrade;
- (void)ensureSilentLoginUpgrade;
- (id)fetchAuthenticationContextForApplePay;
- (id)fetchAuthenticationContextForBiometric;
- (id)init;
- (void)observeFinishSetupTriggers;
- (void)performSilentICDPUpgrade;
- (bool)setupAssistantNeedsToRun;
- (void)startExpressSettingsUpload;
- (void)storeAuthenticationContextforApplyPay:(id)arg1;
- (void)storeAuthenticationContextforBiometric:(id)arg1;

@end
