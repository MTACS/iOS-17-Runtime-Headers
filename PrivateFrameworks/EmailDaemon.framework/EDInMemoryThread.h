
@interface EDInMemoryThread : NSObject <NSCopying> {
    NSMutableArray * _dateSortedMessages;
    EMMessage * _displayMessage;
    <EMMailboxTypeResolver> * _mailboxTypeResolver;
    NSMutableArray * _messages;
    EMQuery * _originatingQuery;
    EMThread * _thread;
    EMThreadScope * _threadScope;
}

@property (nonatomic, retain) EMMessage *displayMessage;
@property (nonatomic, readonly) <EMMailboxTypeResolver> *mailboxTypeResolver;
@property (nonatomic, readonly) <EMMessageListItem> *messageListItem;
@property (nonatomic, readonly, copy) NSArray *messages;
@property (nonatomic, readonly) EMMessage *newestMessage;
@property (nonatomic, readonly) EMQuery *originatingQuery;
@property (nonatomic, retain) EMThread *thread;
@property (nonatomic, readonly) EMThreadScope *threadScope;

+ (id)_dateSortDescriptors;

- (void).cxx_destruct;
- (void)_addMessagesToThread:(id)arg1;
- (id)_calculateAndApplyChange;
- (id)_calculateChangesAfterRemovingMessages:(id)arg1 applyingChanges:(id)arg2 threadIsEmpty:(bool*)arg3;
- (id)_combinedCCList;
- (id)_combinedFlagColors;
- (id)_combinedFlags;
- (bool)_combinedHasAttachments;
- (bool)_combinedHasUnflagged;
- (bool)_combinedIsBlocked;
- (bool)_combinedIsVIP;
- (id)_combinedMailboxes;
- (id)_combinedReadLater;
- (long long)_combinedSenderBucket;
- (id)_combinedSenderList;
- (id)_combinedToList;
- (void)_commonInitWithOriginatingQuery:(id)arg1 mailboxTypeResolver:(id)arg2;
- (id)_createThreadWithObjectID:(id)arg1;
- (id)_dateSortedMessages;
- (bool)_isSortedByDate:(id)arg1;
- (void)_recalculateDisplayMessage;
- (id)addMessages:(id)arg1;
- (id)changeMessages:(id)arg1 forKeyPaths:(id)arg2 threadIsEmpty:(bool*)arg3;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)displayMessage;
- (id)initWithMessages:(id)arg1 originatingQuery:(id)arg2 mailboxTypeResolver:(id)arg3;
- (id)mailboxTypeResolver;
- (id)messageListItem;
- (id)messages;
- (id)newestMessage;
- (id)originatingQuery;
- (id)removeMessages:(id)arg1 threadIsEmpty:(bool*)arg2;
- (void)setDisplayMessage:(id)arg1;
- (void)setThread:(id)arg1;
- (id)thread;
- (id)threadScope;
- (id)updateMessage:(id)arg1 fromOldObjectID:(id)arg2;

@end
