
@interface MFMailMessageLibraryAdoptSharedSchemaMigrationStep : NSObject {
    EDPersistenceDatabaseConnection * _connection;
    NSString * _protectedDatabaseName;
}

@property (nonatomic, retain) EDPersistenceDatabaseConnection *connection;
@property (nonatomic, readonly, copy) NSString *protectedDatabaseName;
@property (nonatomic, readonly) EFSQLSchema *protectedSchema;
@property (nonatomic, readonly) EFSQLSchema *schema;

+ (void)cleanUpAfterMigrationWithConnection:(id)arg1;

- (void).cxx_destruct;
- (id)_accountsTableSchema;
- (id)_addressesTableSchema;
- (bool)_cleanupOldSchema;
- (id)_conversationIDMessageIDTableSchema;
- (id)_conversationsTableSchema;
- (bool)_createIndexes;
- (bool)_createTemporaryTables;
- (bool)_dropTemporaryTables;
- (bool)_initializeOldProtectedSchema;
- (id)_mailboxesTableSchema;
- (id)_messageDataDeletedTableSchema;
- (id)_messageDataTableSchema;
- (id)_messageReferencesTableSchema;
- (id)_messagesTableSchema;
- (bool)_migrateData;
- (bool)_migrateMessages;
- (bool)_migrateNonMessages;
- (bool)_migrateSendersAndRecipients;
- (bool)_migrateSubjects;
- (bool)_migrateSummaries;
- (id)_popUIDsTableSchema;
- (id)_propertiesTableSchema;
- (id)_protectedMessageDataTableSchema;
- (id)_recipientsTableSchema;
- (id)_spotlightMessageReindexTableSchema;
- (id)_spotlightTombstonesTableSchema;
- (id)_subjectsTableSchema;
- (id)_summariesTableSchema;
- (bool)_transformProtectedSchema;
- (bool)_transformSchema;
- (id)connection;
- (id)initWithSQLiteConnection:(id)arg1 protectedDatabaseName:(id)arg2;
- (bool)performMigrationStep;
- (id)protectedDatabaseName;
- (id)protectedSchema;
- (id)schema;
- (void)setConnection:(id)arg1;

@end
