
@interface TPSDataMigrator : NSObject

+ (void)_performDesiredOutcomeMigration;
+ (void)_performSavedTipsMigration;
+ (void)performMigrationIfNeeded;
+ (void)revertTipStatusArchivalIfNeeded;

@end
