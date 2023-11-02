
@interface _EDThreadPersistence_PersistedThread : NSObject {
    bool  _didCreateTempMessagesView;
    _EDThreadPersistence_ThreadMessages * _messages;
    _EDThreadPersistence_SQLHelper * _sqlHelper;
    long long  _threadDatabaseID;
}

@property (nonatomic, readonly) EDMessagePersistence *messagePersistence;
@property (nonatomic, readonly) _EDThreadPersistence_ThreadMessages *messages;
@property (nonatomic, readonly) _EDThreadPersistence_SQLHelper *sqlHelper;
@property (nonatomic, readonly) EMThread *thread;
@property (nonatomic, readonly) long long threadDatabaseID;
@property (nonatomic, readonly) EMThreadObjectID *threadObjectID;
@property (nonatomic, readonly) long long threadScopeDatabaseID;
@property (nonatomic, readonly) NSArray *wrappedMessages;

- (void).cxx_destruct;
- (void)_ensureTempMessagesView;
- (id)_mailboxDatabaseIDsForWrappedMessages;
- (void)addKeyPathsForDisplayMessageChangeToKeyPaths:(id)arg1;
- (bool)addMailboxes;
- (bool)addRecipients:(id)arg1 ofType:(unsigned long long)arg2;
- (bool)addRecipientsForType:(unsigned long long)arg1;
- (bool)addSenders;
- (bool)addSenders:(id)arg1;
- (unsigned long long)currentSenderCounts;
- (id)debugDescription;
- (void)dropTemporaryView;
- (id)initWithMessages:(id)arg1 threadDatabaseID:(long long)arg2;
- (id)messagePersistence;
- (id)messages;
- (id)recipientDatabaseIDsAndDatesForRecipientType:(unsigned long long)arg1;
- (id)senderDatabaseIDsAndDates;
- (bool)setPriorityForDisplayMessageSender;
- (id)sqlHelper;
- (id)thread;
- (long long)threadDatabaseID;
- (id)threadObjectID;
- (long long)threadScopeDatabaseID;
- (bool)updateDisplayMessageWithUnreadWrappedMessages:(id)arg1;
- (id)updateNewestReadAndDisplayMessage;
- (bool)updateNewestReadMessage:(id)arg1;
- (id)wrappedMessages;

@end
