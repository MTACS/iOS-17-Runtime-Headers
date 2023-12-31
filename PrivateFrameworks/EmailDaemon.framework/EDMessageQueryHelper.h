
@interface EDMessageQueryHelper : NSObject <EDMessageChangeHookResponder, EDMessageQueryHelperMessageSource, EDRemindMeNotificationControllerObserver, EDRemoteSearchDelegate, EDSenderBucketChangeHookResponder, EFCancelable, EFLoggable> {
    bool  _addMessagesSynchronously;
    EFCancelationToken * _cancelationToken;
    <EDMessageQueryHelperDelegate> * _delegate;
    struct atomic_flag { 
        _Atomic bool _Value; 
    }  _didStart;
    EDPersistenceHookRegistry * _hookRegistry;
    NSPredicate * _ignoreMessagesPredicate;
    NSMutableSet * _ignoredMessages;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _ignoredMessagesLock;
    long long  _initialBatchSize;
    bool  _keepMessagesInListOnBucketChange;
    long long  _maximumBatchSize;
    EDMessagePersistence * _messagePersistence;
    NSMutableSet * _noLongerMatchingMessages;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _noLongerMatchingMessagesLock;
    NSString * _pendingConversationIDChangesKey;
    NSString * _pendingDisplayDateChangesKey;
    NSString * _pendingFlagChangesKey;
    NSString * _pendingReadLaterDateChangesKey;
    NSString * _pendingSenderBucketChangesKey;
    EMQuery * _query;
    EDMessageQueryEvaluator * _queryEvaluator;
    EDRemindMeNotificationController * _remindMeNotificationController;
    <EDRemoteSearchProvider> * _remoteSearchProvider;
    <EFScheduler> * _scheduler;
    bool  _shouldReconcileJournal;
}

@property (nonatomic) bool addMessagesSynchronously;
@property (nonatomic, retain) EFCancelationToken *cancelationToken;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) <EDMessageQueryHelperDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) EDPersistenceHookRegistry *hookRegistry;
@property (nonatomic, retain) NSPredicate *ignoreMessagesPredicate;
@property (nonatomic, readonly) long long initialBatchSize;
@property (nonatomic) bool keepMessagesInListOnBucketChange;
@property (nonatomic, readonly) long long maximumBatchSize;
@property (nonatomic, readonly) EDMessagePersistence *messagePersistence;
@property (readonly) NSString *pendingConversationIDChangesKey;
@property (readonly) NSString *pendingDisplayDateChangesKey;
@property (readonly) NSString *pendingFlagChangesKey;
@property (readonly) NSString *pendingReadLaterDateChangesKey;
@property (readonly) NSString *pendingSenderBucketChangesKey;
@property (nonatomic, readonly) EMQuery *query;
@property (nonatomic, retain) EDMessageQueryEvaluator *queryEvaluator;
@property (nonatomic, readonly) EDRemindMeNotificationController *remindMeNotificationController;
@property (nonatomic, readonly) <EDRemoteSearchProvider> *remoteSearchProvider;
@property (nonatomic, readonly) <EFScheduler> *scheduler;
@property (nonatomic) bool shouldReconcileJournal;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool updateDisplayDate;

+ (id)log;

- (void).cxx_destruct;
- (void)_calculateAndReportChangesForPersistedMessages:(id)arg1 withPendingChangesKey:(id)arg2 changeBlock:(id /* block */)arg3;
- (id)_filteredMessagesForPredicate:(id)arg1 limit:(long long)arg2;
- (void)_foundMessages:(id)arg1;
- (void)_getInitialResults;
- (id)_persistedMessagesFromSendersWithAddresses:(id)arg1;
- (void)_persistenceDidDeleteMessages:(id)arg1 includeMessagesWithDeletedFlag:(bool)arg2;
- (id)_predicateWithAdditionalPredicates:(id)arg1;
- (void)_prepareForSenderBucketChangeForThreadsWithSenderAddresses:(id)arg1;
- (void)_reportChangesForCurrentlyMatchingMessages:(id)arg1 previouslyMatchingMessages:(id)arg2 keyPaths:(id)arg3;
- (void)_reportChangesForPersistedMessages:(id)arg1 withPendingChangesKey:(id)arg2 keyPaths:(id)arg3;
- (void)_reportSenderBucketChangeForThreadsWithSenderAddresses:(id)arg1;
- (id)_transformAndFilterMessages:(id)arg1 includeDeleted:(bool)arg2 removeIgnoredMessages:(bool)arg3;
- (id)_unjournaledMessagesForMessages:(id)arg1;
- (void)_updateDisplayDateForMessagesIfNeeded;
- (bool)addMessagesSynchronously;
- (void)cancel;
- (id)cancelationToken;
- (void)controller:(id)arg1 messageTimerFired:(id)arg2;
- (void)dealloc;
- (id)delegate;
- (id)hookRegistry;
- (id)ignoreMessagesPredicate;
- (id)initWithQuery:(id)arg1 initialBatchSize:(long long)arg2 maximumBatchSize:(long long)arg3 messagePersistence:(id)arg4 hookRegistry:(id)arg5 remoteSearchProvider:(id)arg6 scheduler:(id)arg7 remindMeNotificationController:(id)arg8 delegate:(id)arg9 shouldReconcileJournal:(bool)arg10 shouldAddMessagesSynchronously:(bool)arg11 keepMessagesInListOnBucketChange:(bool)arg12;
- (long long)initialBatchSize;
- (bool)keepMessagesInListOnBucketChange;
- (long long)maximumBatchSize;
- (id)messagePersistence;
- (id)messagesWithAdditionalPredicates:(id)arg1 limit:(long long)arg2;
- (id)pendingConversationIDChangesKey;
- (id)pendingDisplayDateChangesKey;
- (id)pendingFlagChangesKey;
- (id)pendingReadLaterDateChangesKey;
- (id)pendingSenderBucketChangesKey;
- (void)persistenceDidAddAddresses:(id)arg1 toSender:(id)arg2 generation:(long long)arg3;
- (void)persistenceDidAddMessages:(id)arg1 generationWindow:(id)arg2;
- (void)persistenceDidChangeConversationNotificationLevel:(long long)arg1 conversationID:(long long)arg2 generationWindow:(id)arg3;
- (void)persistenceDidChangeFlags:(id)arg1 messages:(id)arg2 generationWindow:(id)arg3;
- (void)persistenceDidChangeGlobalMessageID:(long long)arg1 orConversationID:(long long)arg2 message:(id)arg3 generationWindow:(id)arg4;
- (void)persistenceDidChangeReadLaterDate:(id)arg1 messages:(id)arg2 changeIsRemote:(bool)arg3 generationWindow:(id)arg4;
- (void)persistenceDidChangeSenders:(id)arg1 generation:(long long)arg2;
- (void)persistenceDidDeleteAllMessagesInMailboxesWithURLs:(id)arg1 generationWindow:(id)arg2;
- (void)persistenceDidDeleteMessages:(id)arg1 generationWindow:(id)arg2;
- (void)persistenceDidReconcileJournaledMessages:(id)arg1 generationWindow:(id)arg2;
- (void)persistenceDidRemoveAddresses:(id)arg1 fromSender:(id)arg2 generation:(long long)arg3;
- (void)persistenceDidUpdateDisplayDateForMessages:(id)arg1 changeIsRemote:(bool)arg2 generation:(long long)arg3;
- (void)persistenceDidUpdateProperties:(id)arg1 message:(id)arg2 generationWindow:(id)arg3;
- (void)persistenceIsChangingConversationID:(long long)arg1 messages:(id)arg2 generationWindow:(id)arg3;
- (void)persistenceWillAddAddresses:(id)arg1 toSender:(id)arg2;
- (void)persistenceWillChangeConversationID:(long long)arg1 messages:(id)arg2;
- (void)persistenceWillChangeFlags:(id)arg1 messages:(id)arg2;
- (void)persistenceWillChangeReadLaterDate:(id)arg1 messages:(id)arg2;
- (void)persistenceWillChangeSenders:(id)arg1;
- (void)persistenceWillChangeSendersForAddresses:(id)arg1;
- (void)persistenceWillRemoveAddresses:(id)arg1 fromSender:(id)arg2;
- (void)persistenceWillUpdateDisplayDateForMessages:(id)arg1;
- (id)query;
- (id)queryEvaluator;
- (id)remindMeNotificationController;
- (void)remoteSearchDidFindMessages:(id)arg1;
- (void)remoteSearchDidFinish;
- (id)remoteSearchProvider;
- (id)scheduler;
- (void)setAddMessagesSynchronously:(bool)arg1;
- (void)setCancelationToken:(id)arg1;
- (void)setIgnoreMessagesPredicate:(id)arg1;
- (void)setKeepMessagesInListOnBucketChange:(bool)arg1;
- (void)setQueryEvaluator:(id)arg1;
- (void)setShouldReconcileJournal:(bool)arg1;
- (bool)shouldReconcileJournal;
- (id)sortableMessagesWithAdditionalPredicates:(id)arg1 limit:(long long)arg2;
- (void)start;
- (bool)updateDisplayDate;

@end
