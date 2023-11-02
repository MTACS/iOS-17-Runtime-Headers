
@protocol HDDatabaseMigrationTransactionDelegate

@required

- (void)migrationTransaction:(HDDatabaseMigrationTransaction *)arg1 didCreateDatabasesWithIdentifier:(NSData *)arg2;
- (void)migrationTransaction:(HDDatabaseMigrationTransaction *)arg1 didEncounterDatabaseMismatchWithUnprotectedIdentifier:(NSData *)arg2 protectedIdentifier:(NSData *)arg3;
- (NSArray *)migrationTransaction:(HDDatabaseMigrationTransaction *)arg1 entityClassesWithBehavior:(_HKBehavior *)arg2;
- (void)migrationTransaction:(HDDatabaseMigrationTransaction *)arg1 reportHFDMigrationStatus:(long long)arg2 schemaVersion:(long long)arg3 error:(NSError *)arg4;
- (NSString *)profileDirectoryPath;
- (HKProfileIdentifier *)profileIdentifier;

@end
