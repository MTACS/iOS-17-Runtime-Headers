
@interface MFMailboxPersistence_iOS : EDMailboxPersistence {
    EDPersistenceDatabase * _database;
    MFMailMessageLibrary * _library;
}

@property (nonatomic, readonly) EDPersistenceDatabase *database;
@property (nonatomic, readonly) MFMailMessageLibrary *library;
@property (nonatomic, retain) MFMailboxProvider *mailboxProvider;

- (void).cxx_destruct;
- (bool)createMailbox:(id)arg1 parentMailboxID:(id)arg2;
- (id)database;
- (bool)deleteMailbox:(id)arg1;
- (id)initWithMailboxProvider:(id)arg1 database:(id)arg2 library:(id)arg3;
- (id)library;
- (id)mailboxDatabaseIDsForMailboxObjectIDs:(id)arg1 createIfNecessary:(bool)arg2;
- (bool)moveMailbox:(id)arg1 newParentMailboxID:(id)arg2;
- (bool)renameMailbox:(id)arg1 newName:(id)arg2;
- (void)serverCountsForMailboxScope:(id)arg1 block:(id /* block */)arg2;

@end
