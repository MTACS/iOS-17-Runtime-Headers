
@protocol MFMailMessageLibraryMigratorDelegate <NSObject>

@required

- (bool)mailMessageLibraryMigrator:(MFMailMessageLibraryMigrator *)arg1 attachProtectedDatabaseWithName:(NSString *)arg2 connection:(EDPersistenceDatabaseConnection *)arg3 error:(id*)arg4;
- (void)mailMessageLibraryMigrator:(MFMailMessageLibraryMigrator *)arg1 detachProtectedDatabaseWithConnection:(EDPersistenceDatabaseConnection *)arg2;
- (void)mailMessageLibraryMigrator:(MFMailMessageLibraryMigrator *)arg1 isInitializingDatabaseWithConnection:(EDPersistenceDatabaseConnection *)arg2;
- (void)mailMessageLibraryMigratorScheduleSpotlightReindex:(MFMailMessageLibraryMigrator *)arg1;

@end
