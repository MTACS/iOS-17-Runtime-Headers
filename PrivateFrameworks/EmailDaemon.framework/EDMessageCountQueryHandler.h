
@interface EDMessageCountQueryHandler : NSObject <EDMailboxChangeHookResponder, EDMessageChangeHookResponder, EFCancelable, EFListStateCapturerDelegate, EFLoggable, EMMailboxChangeObserver> {
    struct EFAtomicObject { 
        _Atomic long long cfObject; 
    }  _atomicMailboxScopeDescription;
    struct EFAtomicObject { 
        _Atomic long long cfObject; 
    }  _atomicQueryDescription;
    EFCancelationToken * _cancelationToken;
    EMQuery * _expandedQuery;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _expandedQueryLock;
    EDPersistenceHookRegistry * _hookRegistry;
    long long  _localCount;
    EMObjectID * _mailboxObserverID;
    NSMutableSet * _mailboxesBeingSynced;
    EDMessagePersistence * _messagePersistence;
    EFMutableInt64Set * _newMessageIDs;
    NSString * _pendingFlagChangesKey;
    NSPredicate * _predicateIgnoringFlags;
    EMQuery * _query;
    EDMessageQueryEvaluator * _queryEvaluator;
    _Atomic unsigned long long  _recalculationPending;
    EFDebouncer * _refireDebouncer;
    <EMMessageRepositoryCountQueryObserver_xpc> * _resultsObserver;
    long long  _resyncDatabaseGeneration;
    EFStoppableScheduler<EFAssertableScheduler> * _scheduler;
    EFMutableInt64Set * _seenMessageIDs;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _seenMessageIDsLock;
    EMMailboxScope * _serverCountMailboxScope;
    NSMutableDictionary * _serverCounts;
    EFListStateCapturer * _stateCapturer;
    EDUpdateThrottler * _updateThrottler;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)log;

- (void).cxx_destruct;
- (void)cancel;
- (void)dealloc;
- (id)descriptionForItem:(id)arg1;
- (void)didSyncMailbox:(id)arg1;
- (id)initWithQuery:(id)arg1 serverCountMailboxScope:(id)arg2 messagePersistence:(id)arg3 hookRegistry:(id)arg4 observer:(id)arg5;
- (id)initWithQuery:(id)arg1 serverCountMailboxScope:(id)arg2 messagePersistence:(id)arg3 hookRegistry:(id)arg4 observer:(id)arg5 refireDebounceInterval:(double)arg6;
- (id)itemsForStateCaptureWithErrorString:(id*)arg1;
- (id)labelForStateCapture;
- (void)mailboxListChanged:(id)arg1;
- (void)persistenceDidAddMessages:(id)arg1 generationWindow:(id)arg2;
- (void)persistenceDidChangeFlags:(id)arg1 messages:(id)arg2 generationWindow:(id)arg3;
- (void)persistenceDidChangeGlobalMessageID:(long long)arg1 orConversationID:(long long)arg2 message:(id)arg3 generationWindow:(id)arg4;
- (void)persistenceDidChangeReadLaterDate:(id)arg1 messages:(id)arg2 changeIsRemote:(bool)arg3 generationWindow:(id)arg4;
- (void)persistenceDidChangeVIPStatus:(bool)arg1 messages:(id)arg2;
- (void)persistenceDidDeleteMessages:(id)arg1 generationWindow:(id)arg2;
- (void)persistenceDidUpdateDisplayDateForMessages:(id)arg1 changeIsRemote:(bool)arg2 generation:(long long)arg3;
- (void)persistenceDidUpdateFollowUpForMessages:(id)arg1 generationWindow:(id)arg2;
- (void)persistenceDidUpdateLastSyncAndMostRecentStatusCount:(long long)arg1 forMailboxWithObjectID:(id)arg2 generationWindow:(id)arg3;
- (void)persistenceDidUpdateMostRecentStatusCount:(long long)arg1 forMailboxWithObjectID:(id)arg2 generationWindow:(id)arg3;
- (void)persistenceDidUpdateProperties:(id)arg1 message:(id)arg2 generationWindow:(id)arg3;
- (void)persistenceDidUpdateSendLaterDate:(id)arg1 messages:(id)arg2 generationWindow:(id)arg3;
- (void)persistenceDidUpdateServerCount:(long long)arg1 forMailboxWithObjectID:(id)arg2 generationWindow:(id)arg3;
- (void)persistenceIsAddingMailboxWithDatabaseID:(long long)arg1 objectID:(id)arg2 generationWindow:(id)arg3;
- (void)persistenceWillChangeFlags:(id)arg1 messages:(id)arg2;
- (void)test_tearDown;
- (void)willSyncMailbox:(id)arg1;

@end
