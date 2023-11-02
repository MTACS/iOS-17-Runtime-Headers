
@interface DMEnvironment : NSObject {
    bool  _testMigrationInfrastructureOnly;
}

@property (nonatomic) bool testMigrationInfrastructureOnly;

+ (bool)isBuildVersion:(id)arg1 equalToBuildVersion:(id)arg2;
+ (id)sharedInstance;

- (void)blockUntilPreferencesFlush;
- (id)buildVersion;
- (void)clearContext;
- (id)context;
- (id)contextPath;
- (id)continuousIntegrationMarkerPref;
- (bool)deviceModeIsSharediPad;
- (bool)implementMigrationPluginResults;
- (bool)isDeviceUsingEphemeralStorage;
- (id)lastBuildVersionPref;
- (id)lastMigrationResultsPref;
- (id)migrationPluginResultsPref;
- (unsigned long long)migrationRebootCount;
- (id)migrationRebootCountPref;
- (void)setContext:(id)arg1;
- (void)setLastBuildVersionPref:(id)arg1;
- (void)setLastMigrationResultsPref:(id)arg1;
- (void)setMigrationPluginResultsPref:(id)arg1;
- (void)setMigrationRebootCount:(unsigned long long)arg1;
- (void)setMigrationRebootCountPref:(id)arg1;
- (void)setTestMigrationInfrastructureOnly:(bool)arg1;
- (void)setUserDataDispositionPref:(id)arg1;
- (bool)shouldImposePluginArtificialHang;
- (bool)shouldWatchdogPluginsAfterTimeout;
- (bool)suppressMigrationPluginWrapperExitMarkerPref;
- (bool)testMigrationInfrastructureOnly;
- (id)userDataDispositionPref;
- (bool)userSessionIsLoginWindow;
- (bool)waitForExecutePluginsSignalMarkerPref;

@end
