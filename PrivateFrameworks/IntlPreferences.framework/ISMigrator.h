
@interface ISMigrator : NSObject {
    NSString * _currentVersion;
    bool  _newUserAccount;
    unsigned long long  _platform;
    unsigned long long  _previousSchemaVersion;
    NSString * _previousVersion;
}

@property (nonatomic, copy) NSString *currentVersion;
@property (nonatomic) bool newUserAccount;
@property (nonatomic) unsigned long long platform;
@property (nonatomic) unsigned long long previousSchemaVersion;
@property (nonatomic, copy) NSString *previousVersion;

+ (unsigned long long)currentPlatform;
+ (id)migratorForNewUserAccountWithVersion:(id)arg1;
+ (id)migratorFromSchemaVersion:(unsigned long long)arg1;
+ (id)migratorFromVersion:(id)arg1 toVersion:(id)arg2;
+ (id)migratorFromVersion:(id)arg1 toVersion:(id)arg2 platform:(unsigned long long)arg3;
+ (id)migratorFromVersion:(id)arg1 toVersion:(id)arg2 platform:(unsigned long long)arg3 newUserAccount:(bool)arg4;

- (void).cxx_destruct;
- (id)currentVersion;
- (bool)newUserAccount;
- (id)performMigrationForPreferences:(id)arg1;
- (id)performMigrationForUserPreferences:(id)arg1 systemPreferences:(id)arg2;
- (unsigned long long)platform;
- (unsigned long long)previousSchemaVersion;
- (id)previousVersion;
- (bool)previousVersionIsOlderThanMacOS:(id)arg1 iOS:(id)arg2 watchOS:(id)arg3 tvOS:(id)arg4;
- (void)setCurrentVersion:(id)arg1;
- (void)setNewUserAccount:(bool)arg1;
- (void)setPlatform:(unsigned long long)arg1;
- (void)setPreviousSchemaVersion:(unsigned long long)arg1;
- (void)setPreviousVersion:(id)arg1;

@end
