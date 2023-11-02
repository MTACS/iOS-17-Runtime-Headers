
@interface NSPersistentStoreCoordinatorMigrationContext : NSObject {
    NSString * _configurationName;
    bool  _forceMigration;
    NSDictionary * _metadata;
    NSPersistentStore * _migratedStore;
    NSDictionary * _options;
    NSStagedMigrationManager * _stagedMigrationManager;
    NSString * _storeType;
    NSURL * _storeURL;
    PFUbiquitySetupAssistant * _ubiquitySetupAssistant;
}

@property (nonatomic, retain) NSString *configurationName;
@property (nonatomic) bool forceMigration;
@property (nonatomic, retain) NSDictionary *metadata;
@property (nonatomic, retain) NSPersistentStore *migratedStore;
@property (nonatomic, readonly) NSDictionary *options;
@property (nonatomic, retain) NSStagedMigrationManager *stagedMigrationManager;
@property (nonatomic, readonly) NSString *storeType;
@property (nonatomic, readonly) NSURL *storeURL;
@property (nonatomic, retain) PFUbiquitySetupAssistant *ubiquitySetupAssistant;

- (id)configurationName;
- (void)dealloc;
- (bool)forceMigration;
- (id)initWithStoreURL:(id)arg1 type:(id)arg2 options:(id)arg3;
- (id)metadata;
- (id)migratedStore;
- (id)options;
- (void)setConfigurationName:(id)arg1;
- (void)setForceMigration:(bool)arg1;
- (void)setMetadata:(id)arg1;
- (void)setMigratedStore:(id)arg1;
- (void)setStagedMigrationManager:(id)arg1;
- (void)setUbiquitySetupAssistant:(id)arg1;
- (id)stagedMigrationManager;
- (id)storeType;
- (id)storeURL;
- (id)ubiquitySetupAssistant;

@end
