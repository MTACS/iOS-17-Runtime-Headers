
@interface MFMailMessageLibraryLocalActionsTablesMigrationStep : NSObject {
    EDPersistenceDatabaseConnection * _connection;
}

@property (nonatomic, retain) EDPersistenceDatabaseConnection *connection;

+ (id)log;

- (void).cxx_destruct;
- (id)_actionFlagsActionIndexDefinition;
- (id)_actionFlagsTableDefinition;
- (id)_actionLabelsActionIndexDefinition;
- (id)_actionLabelsLabelIndexDefinition;
- (id)_actionLabelsTableDefinition;
- (id)_actionMessagesActionIndexDefinition;
- (id)_actionMessagesDestinationMessageIndexDefinition;
- (id)_actionMessagesMessageIndexDefinition;
- (id)_actionMessagesTableDefinition;
- (id)_localMessageActionsMailboxRowIDIndexDefinition;
- (id)_localMessageActionsTableDefinition;
- (id)_offlineCacheOperations;
- (bool)_populateServerMessages;
- (id)_serverLabelsTableDefinition;
- (id)_serverMessagesMessageIndexDefinition;
- (id)_serverMessagesTableDefinition;
- (id)connection;
- (id)initWithSQLiteConnection:(id)arg1;
- (bool)performMigrationStep;
- (void)setConnection:(id)arg1;

@end
