
@interface AVTBackgroundActivitySchedulerFactory : NSObject

+ (id)schedulerForPostInstallMigrationActivity;
+ (id)schedulerForUserRequestedBackupActivity;

@end
