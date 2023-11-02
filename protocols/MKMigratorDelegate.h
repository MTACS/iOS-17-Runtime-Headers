
@protocol MKMigratorDelegate <NSObject>

@required

- (void)migratorDidComplete:(MKMigrator *)arg1;
- (void)migratorDidExecuteOperation:(MKMigrator *)arg1;
- (void)migratorWillExecuteOperation:(MKMigrator *)arg1;

@end
