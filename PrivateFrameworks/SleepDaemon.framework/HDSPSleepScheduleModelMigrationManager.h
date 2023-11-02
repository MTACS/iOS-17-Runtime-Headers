
@interface HDSPSleepScheduleModelMigrationManager : NSObject <HDSPEnvironmentAware, HDSPSource> {
    HDSPEnvironment * _environment;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool dontNotify;
@property (nonatomic, readonly) bool dontSync;
@property (nonatomic, readonly) HDSPEnvironment *environment;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *sourceIdentifier;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_migrateHomeScreenPage;
- (id)_migrateOnboardingSettings;
- (id)_migrateSleepFocus;
- (id)_migrateSleepScheduleFromMobileTimer;
- (id)_migrateToCloudKit;
- (id)environment;
- (id)initWithEnvironment:(id)arg1;
- (bool)needDataMigration;
- (id)performDataMigration;
- (id)sourceIdentifier;

@end
