
@interface DAEASOAuthMigrationActivity : NSObject {
    NSBackgroundActivityScheduler * _scheduler;
}

@property (nonatomic, retain) NSBackgroundActivityScheduler *scheduler;

+ (bool)profileMigrationDisabled;
+ (bool)profileMigrationEnabled;

- (void).cxx_destruct;
- (bool)_isExchangeBasicAccount:(id)arg1;
- (unsigned long long)_migrateExchangeAccountToOAuthDecision:(id)arg1 disallowedDomains:(id)arg2 disallowedHosts:(id)arg3;
- (id)_migrationDecisionString:(unsigned long long)arg1;
- (void)_retrieveMigrationStatusFromConfigurationURI:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)_sendAnalyticsForMigratingAccount:(id)arg1 withStatus:(id)arg2;
- (id)_serverMigrationStatus;
- (id /* block */)_triggerAccountMigration;
- (void)invalidateActivity;
- (void)scheduleActivity;
- (id)scheduler;
- (void)setScheduler:(id)arg1;

@end
