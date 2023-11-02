
@interface HDSPEnvironmentStateMachine : HKSPStateMachine <HDSPEnvironmentStateMachineDelegate, HDSPEnvironmentStateMachineEventHandler, HDSPEnvironmentStateMachineInfoProvider> {
    HDSPEnvironmentDemoState * _demoState;
    HDSPEnvironmentMigrationState * _migrationState;
    HDSPEnvironmentNotReadyState * _notReadyState;
    HDSPEnvironmentReadyState * _readyState;
}

@property (nonatomic, readonly) <NAScheduler> *callbackScheduler;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) <HDSPEnvironmentStateMachineDelegate> *delegate;
@property (nonatomic, readonly) HDSPEnvironmentDemoState *demoState;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <HDSPEnvironmentStateMachineInfoProvider> *infoProvider;
@property (nonatomic, readonly) HDSPEnvironmentMigrationState *migrationState;
@property (nonatomic, readonly) HDSPEnvironmentNotReadyState *notReadyState;
@property (nonatomic, readonly) HDSPEnvironmentReadyState *readyState;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)dataMigrationDidComplete;
- (id)demoState;
- (void)environmentDidBecomeReady;
- (void)environmentShouldMigrateData;
- (id)initWithDelegate:(id)arg1 infoProvider:(id)arg2;
- (bool)isSystemReady;
- (unsigned long long)loggingCategory;
- (id)migrationState;
- (bool)needsDataMigration;
- (id)notReadyState;
- (id)readyState;
- (void)systemDidBecomeReady;

@end
