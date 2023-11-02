
@interface ATXStableContactRepresentationDatabase : ATXAbstractVersionedDatabase

- (bool)_runMigrationSteps:(id)arg1;
- (id)cnContactId:(id)arg1;
- (id)deleteAllData;
- (id)init;
- (void)insertCnContactIdToStableContactIdentifierWithCnContactId:(id)arg1 stableContactIdentifier:(id)arg2;
- (long long)latestVersion;
- (bool)migrate;
- (id)stableContactIdentifier:(id)arg1;

@end
