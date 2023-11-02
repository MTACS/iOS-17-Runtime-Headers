
@protocol EDMessageChangeHookResponder <NSObject>

@optional

- (void)persistenceDidAddDataDetectionResults:(NSArray *)arg1 generationWindow:(EDPersistenceDatabaseGenerationWindow *)arg2;
- (void)persistenceDidAddLabels:(NSSet *)arg1 removeLabels:(NSSet *)arg2 messages:(NSArray *)arg3 generationWindow:(EDPersistenceDatabaseGenerationWindow *)arg4;
- (void)persistenceDidAddMessages:(NSArray *)arg1 generationWindow:(EDPersistenceDatabaseGenerationWindow *)arg2;
- (void)persistenceDidChangeConversationNotificationLevel:(long long)arg1 conversationID:(long long)arg2 generationWindow:(EDPersistenceDatabaseGenerationWindow *)arg3;
- (void)persistenceDidChangeFlags:(ECMessageFlagChange *)arg1 messages:(NSArray *)arg2 generationWindow:(EDPersistenceDatabaseGenerationWindow *)arg3;
- (void)persistenceDidChangeGlobalMessageID:(long long)arg1 orConversationID:(long long)arg2 message:(id <EDPersistedMessage>)arg3 generationWindow:(EDPersistenceDatabaseGenerationWindow *)arg4;
- (void)persistenceDidChangeReadLaterDate:(NSDate *)arg1 messages:(NSArray *)arg2 changeIsRemote:(bool)arg3 generationWindow:(EDPersistenceDatabaseGenerationWindow *)arg4;
- (void)persistenceDidChangeVIPStatus:(bool)arg1 messages:(NSArray *)arg2;
- (void)persistenceDidDeleteAllMessagesInMailboxesWithURLs:(NSArray *)arg1 generationWindow:(EDPersistenceDatabaseGenerationWindow *)arg2;
- (void)persistenceDidDeleteMessages:(NSArray *)arg1 generationWindow:(EDPersistenceDatabaseGenerationWindow *)arg2;
- (void)persistenceDidFinishUpdates;
- (void)persistenceDidReconcileJournaledMessages:(NSArray *)arg1 generationWindow:(EDPersistenceDatabaseGenerationWindow *)arg2;
- (void)persistenceDidUpdateData:(NSData *)arg1 message:(id <EDPersistedMessage>)arg2;
- (void)persistenceDidUpdateDisplayDateForMessages:(NSArray *)arg1 changeIsRemote:(bool)arg2 generation:(long long)arg3;
- (void)persistenceDidUpdateDisplayDateForReadLaterDateMessages:(NSArray *)arg1 generationWindow:(EDPersistenceDatabaseGenerationWindow *)arg2;
- (void)persistenceDidUpdateFollowUpForMessages:(NSArray *)arg1 generationWindow:(EDPersistenceDatabaseGenerationWindow *)arg2;
- (void)persistenceDidUpdateProperties:(NSArray *)arg1 message:(id <EDPersistedMessage>)arg2 generationWindow:(EDPersistenceDatabaseGenerationWindow *)arg3;
- (void)persistenceDidUpdateSendLaterDate:(NSDate *)arg1 messages:(NSArray *)arg2 generationWindow:(EDPersistenceDatabaseGenerationWindow *)arg3;
- (void)persistenceIsAddingMessages:(NSArray *)arg1 journaled:(bool)arg2 generationWindow:(EDPersistenceDatabaseGenerationWindow *)arg3;
- (void)persistenceIsChangingConversationID:(long long)arg1 messages:(NSArray *)arg2 generationWindow:(EDPersistenceDatabaseGenerationWindow *)arg3;
- (void)persistenceIsChangingFlags:(ECMessageFlagChange *)arg1 messages:(NSArray *)arg2 generationWindow:(EDPersistenceDatabaseGenerationWindow *)arg3;
- (void)persistenceIsDeletingAllMessagesInMailboxWithURL:(NSURL *)arg1 generationWindow:(EDPersistenceDatabaseGenerationWindow *)arg2;
- (void)persistenceIsDeletingMessages:(NSArray *)arg1 generationWindow:(EDPersistenceDatabaseGenerationWindow *)arg2;
- (void)persistenceIsUpdatingDisplayDateForMessage:(id <EDPersistedMessage>)arg1 fromDate:(NSDate *)arg2 generation:(long long)arg3;
- (void)persistenceWillAddMessage:(id <ECMessage>)arg1 fromExistingMessage:(bool)arg2;
- (void)persistenceWillAddNewMessages:(NSArray *)arg1;
- (void)persistenceWillBeginUpdates;
- (void)persistenceWillChangeConversationID:(long long)arg1 messages:(NSArray *)arg2;
- (void)persistenceWillChangeFlags:(ECMessageFlagChange *)arg1 messages:(NSArray *)arg2;
- (void)persistenceWillChangeReadLaterDate:(NSDate *)arg1 messages:(NSArray *)arg2;
- (void)persistenceWillDeleteMessages:(NSArray *)arg1;
- (void)persistenceWillTransferMessages:(NSArray *)arg1 transferType:(long long)arg2 destinationMailboxURL:(NSURL *)arg3 userInitiated:(bool)arg4;
- (void)persistenceWillUpdateDisplayDateForMessages:(NSArray *)arg1;

@end
