
@interface EDServerMessagePersistence : NSObject <EFLoggable> {
    EDPersistenceDatabase * _database;
    EDGmailLabelPersistence * _gmailLabelPersistence;
    long long  _mailboxID;
    bool  _supportsLabels;
    bool  _useNumericSearch;
}

@property (nonatomic, readonly) EDPersistenceDatabase *database;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) EDGmailLabelPersistence *gmailLabelPersistence;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long mailboxID;
@property (nonatomic, readonly) unsigned int maximumIMAPUID;
@property (nonatomic, readonly) unsigned long long messageCount;
@property (nonatomic, readonly) unsigned int minimumIMAPUID;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool supportsLabels;
@property (nonatomic, readonly) unsigned long long undeletedMessageCount;
@property (nonatomic, readonly) unsigned long long unreadMessageCount;
@property (nonatomic, readonly) bool useNumericSearch;

+ (id)log;
+ (id)serverLabelsTableSchema;
+ (id)serverMessagesTableSchema;
+ (id)tablesAndForeignKeysToResolve:(id*)arg1 associationsToResolve:(id*)arg2;

- (void).cxx_destruct;
- (bool)_addLabels:(id)arg1 removeLabels:(id)arg2 forUID:(unsigned int)arg3 connection:(id)arg4;
- (id)_remoteIDStringForRemoteIDArray:(id)arg1;
- (id)_serverMessageForRow:(id)arg1 connection:(id)arg2;
- (id)_serverMessagesWithWhereClause:(id)arg1 limitClause:(id)arg2 returnLastEntries:(bool)arg3;
- (bool)addLabels:(id)arg1 removeLabels:(id)arg2 toMessagesWithRemoteIDs:(id)arg3;
- (bool)addServerMessage:(id)arg1 invalidMessage:(bool*)arg2 duplicateRemoteID:(bool*)arg3;
- (bool)applyFlagChange:(id)arg1 toMessagesWithRemoteIDs:(id)arg2;
- (bool)applySortedFlags:(id)arg1;
- (bool)attachMessage:(long long)arg1 toServerMessageWithRemoteID:(id)arg2;
- (id)database;
- (id)deleteAllClearedUIDMessages;
- (bool)deleteAllServerMessagesInMailbox;
- (bool)deleteServerMessagesWithRemoteIDs:(id)arg1;
- (id)downloadStateForUIDs:(id)arg1;
- (void)enumerateMessageBatchLimitUIDsWithWindow:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 batchSize:(long long)arg2 newUIDCount:(long long)arg3 block:(id /* block */)arg4;
- (void)enumerateUIDsInIndexSet:(id)arg1 includingJSON:(id)arg2 excludingJSON:(id)arg3 withBlock:(id /* block */)arg4;
- (void)enumerateUIDsInRanges:(id)arg1 withBlock:(id /* block */)arg2;
- (id)gmailLabelPersistence;
- (id)init;
- (id)initWithDatabase:(id)arg1 gmailLabelPersistence:(id)arg2 mailboxID:(long long)arg3 useNumericSearch:(bool)arg4 supportsLabels:(bool)arg5;
- (long long)mailboxID;
- (unsigned int)maximumIMAPUID;
- (unsigned long long)messageCount;
- (unsigned int)minimumIMAPUID;
- (id)serverMessagesForIMAPUIDs:(id)arg1 limit:(unsigned long long)arg2 returnLastEntries:(bool)arg3;
- (id)serverMessagesForMessageIDHeaders:(id)arg1;
- (id)serverMessagesForRemoteIDs:(id)arg1;
- (void)setDownloadStateForUIDs:(id)arg1;
- (bool)supportsLabels;
- (unsigned long long)undeletedMessageCount;
- (unsigned long long)unreadMessageCount;
- (bool)useNumericSearch;

@end
