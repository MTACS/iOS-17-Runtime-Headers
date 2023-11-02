
@interface DMConnection : NSObject {
    DMXPCConnection * _connection;
}

+ (id)connection;

- (void).cxx_destruct;
- (void)cancelDeferredExit;
- (void)changeVisibility:(bool)arg1 completion:(id /* block */)arg2;
- (id)connection;
- (void)dealloc;
- (void)deferExit;
- (void)forceMigrationOnNextRebootWithUserDataDisposition:(unsigned int)arg1;
- (id)init;
- (bool)isMigrationNeeded;
- (long long)migrateCheckingNecessity:(bool)arg1 lastRelevantPlugin:(id)arg2 testMigrationInfrastructureOnly:(bool)arg3;
- (id)migrationPhaseDescription;
- (void)migrationPluginResults:(id /* block */)arg1;
- (id)orderedPluginIdentifiers;
- (id)previousBuildVersion;
- (void)reportMigrationFailure;
- (void)testMigrationUIWithProgress:(bool)arg1 forceInvert:(bool)arg2;
- (unsigned int)userDataDisposition;
- (id)userDataDispositionAuxiliaryData;

@end
