
@interface MFMailMessageLibraryModifyColumnDefinitionsMigrationStep : NSObject {
    EDPersistenceDatabaseConnection * _connection;
}

@property (nonatomic, retain) EDPersistenceDatabaseConnection *connection;
@property (nonatomic, readonly) EFSQLSchema *schema;

- (void).cxx_destruct;
- (id)actionFlagsTableSchema;
- (id)actionLabelsTableSchema;
- (id)actionMessagesTableSchema;
- (id)connection;
- (id)initWithSQLiteConnection:(id)arg1;
- (id)localMessageActionsTableSchema;
- (id)mailboxesTableStubSchema;
- (id)messagesTableStubSchema;
- (bool)performMigrationStep;
- (id)schema;
- (id)serverLabelsTableSchema;
- (id)serverMessagesTableSchema;
- (void)setConnection:(id)arg1;

@end
