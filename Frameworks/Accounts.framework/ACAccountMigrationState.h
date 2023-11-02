
@interface ACAccountMigrationState : NSObject

+ (id)_currentSystemVersion;
+ (bool)isMigrationFinished;
+ (bool)migrationFinishedForKey:(struct __CFString { }*)arg1;
+ (void)writeMigrationVersionPref;
+ (void)writeMigrationVersionPrefForKey:(struct __CFString { }*)arg1;

@end
