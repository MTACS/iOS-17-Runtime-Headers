
@interface EDMigrateUserDefaultsUpgradeStep : NSObject

+ (id)propertiesToMigrate;
+ (bool)run;

@end
