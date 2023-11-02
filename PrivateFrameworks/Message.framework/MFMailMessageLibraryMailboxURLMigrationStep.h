
@interface MFMailMessageLibraryMailboxURLMigrationStep : NSObject {
    EDPersistenceDatabaseConnection * _sqliteConnection;
}

@property (nonatomic, retain) EDPersistenceDatabaseConnection *sqliteConnection;

- (void).cxx_destruct;
- (void)_purgeFoldersMatchingPatterns:(id)arg1;
- (bool)_renameMailboxDataFolders:(struct sqlite3 { }*)arg1;
- (bool)_renameMailboxURLsForMailAccount:(id)arg1 inSQLiteDB:(struct sqlite3 { }*)arg2;
- (bool)_updateMailboxURLsInSQLitedb:(struct sqlite3 { }*)arg1 withOldURLToNewURLMap:(id)arg2;
- (id)initWithSQLiteConnection:(id)arg1;
- (bool)performMigrationStep;
- (void)setSqliteConnection:(id)arg1;
- (id)sqliteConnection;

@end
