
@interface ISFileProtectionClassMigrator : NSObject

+ (bool)isMigrationNeeded;
+ (bool)migrate;
+ (void)setMigrationNeededIfNotSet:(bool)arg1;

@end
