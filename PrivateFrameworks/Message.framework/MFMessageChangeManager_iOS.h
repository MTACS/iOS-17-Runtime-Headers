
@interface MFMessageChangeManager_iOS : EDMessageChangeManager <EDMessageChangeManagerSubClassMethods> {
    MFMailMessageLibrary * _library;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) MFMailMessageLibrary *library;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)accountForMailboxURL:(id)arg1;
- (void)actionHasChangedAccount:(id)arg1;
- (id)addLabels:(id)arg1 removeLabels:(id)arg2 toMessagesInDatabase:(id)arg3;
- (id)addNewMessages:(id)arg1 mailboxURL:(id)arg2 userInitiated:(bool)arg3;
- (id)applyFlagChange:(id)arg1 toMessagesInDatabase:(id)arg2;
- (void)applyVIPStatus:(bool)arg1 toMessagesInDatabase:(id)arg2;
- (void)checkForNewActionsInMailboxID:(long long)arg1;
- (id)copyMessages:(id)arg1 destinationMailboxURL:(id)arg2 userInitiated:(bool)arg3;
- (void)deletePersistedMessages:(id)arg1;
- (void)didFinishPersistenceDidAddMessages:(id)arg1;
- (void)didReflectNewMessages:(id)arg1;
- (void)displayErrorForTransferAction:(id)arg1 withResults:(id)arg2;
- (bool)haveCompleteMIMEForMessage:(id)arg1;
- (id)initWithLibrary:(id)arg1 database:(id)arg2 localActionPersistence:(id)arg3 messagePersistence:(id)arg4 serverMessagePersistenceFactory:(id)arg5 readLaterPersistence:(id)arg6 bimiManager:(id)arg7 hookResponder:(id)arg8 hookRegistry:(id)arg9;
- (id)iterateMessagesInMailboxURLs:(id)arg1 excludingMessages:(id)arg2 batchSize:(unsigned long long)arg3 returnMessagesForFlagChange:(id)arg4 handler:(id /* block */)arg5;
- (id)library;
- (long long)mailboxDatabaseIDForURL:(id)arg1;
- (bool)mailboxIsAllMail:(id)arg1;
- (bool)mailboxPartOfAllMail:(id)arg1;
- (id)messageForDatabaseID:(long long)arg1;
- (void)messageWasAppended:(id)arg1;
- (id)messagesForRemoteIDs:(id)arg1 mailboxURL:(id)arg2;
- (id)messagesToJournalForMessages:(id)arg1 inMailbox:(id)arg2;
- (id)moveMessages:(id)arg1 destinationMailboxURL:(id)arg2 userInitiated:(bool)arg3;
- (bool)persistNewMessages:(id)arg1 mailboxURL:(id)arg2 oldMessagesByNewMessage:(id)arg3 fromSyncing:(bool)arg4;
- (id)reflectNewMessages:(id)arg1 mailboxURL:(id)arg2;
- (void)resetStatusCountsForMailboxWithURL:(id)arg1;
- (void)setData:(id)arg1 onMessage:(id)arg2;
- (void)setLibrary:(id)arg1;
- (void)setRemoteID:(id)arg1 onMessageWithDatabaseID:(long long)arg2;
- (void)willStartPersistenceDidAddMessages:(id)arg1;

@end
