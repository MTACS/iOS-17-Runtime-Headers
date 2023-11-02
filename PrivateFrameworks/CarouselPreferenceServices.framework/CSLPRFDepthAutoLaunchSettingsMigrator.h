
@interface CSLPRFDepthAutoLaunchSettingsMigrator : NSObject

- (void)migrateIfNeeded;
- (bool)needsMigration;

@end
