
@interface EDMessageQueryHandler : EDMessageRepositoryQueryHandler <EDMessageQueryHelperDelegate, EFContentProtectionObserver, EFLoggable, EMCollectionItemIDStateCapturerDelegate> {
    NSObject<OS_dispatch_queue> * _contentProtectionQueue;
    EDMessageQueryHelper * _currentQueryHelper;
    bool  _didCancel;
    bool  _hasEverReconciledJournal;
    bool  _isInitialized;
    NSMutableDictionary * _oldestMessageIDsByMailboxObjectIDs;
    <EDRemoteSearchProvider> * _remoteSearchProvider;
    NSObject<OS_dispatch_queue> * _resultQueue;
    <EFScheduler> * _scheduler;
    EMCollectionItemIDStateCapturer * _stateCapturer;
    struct EFAtomicObject { 
        _Atomic long long cfObject; 
    }  _updateOldestMessagesCancelationToken;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *contentProtectionQueue;
@property (nonatomic, retain) EDMessageQueryHelper *currentQueryHelper;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool didCancel;
@property (nonatomic) bool hasEverReconciledJournal;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isInitialized;
@property (nonatomic, readonly, copy) NSMutableDictionary *oldestMessageIDsByMailboxObjectIDs;
@property (nonatomic, readonly) <EDRemoteSearchProvider> *remoteSearchProvider;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *resultQueue;
@property (nonatomic, readonly) <EFScheduler> *scheduler;
@property (nonatomic, readonly) EMCollectionItemIDStateCapturer *stateCapturer;
@property (readonly) Class superclass;

+ (id)findMessagesByPreviousObjectIDForAddedMessages:(id)arg1 messageSource:(id)arg2;
+ (id)log;

- (void).cxx_destruct;
- (void)_contentProtectionChangedToLocked;
- (void)_contentProtectionChangedToUnlocked;
- (id)_createChangesForMessagesWithConversationID:(long long)arg1 block:(id /* block */)arg2;
- (void)_createHelper;
- (void)_initializeOldestMessagesByMailbox;
- (id)_objectIDsAndUnreadObjectIDsFromMessages:(id)arg1 unreadObjectIDs:(id*)arg2;
- (id)_oldestItemQueryForMailbox:(id)arg1;
- (void)_oldestMessagesByMailboxObjectIDsWasUpdated;
- (void)_oldestMessagesNeedUpdate;
- (bool)_queryHelperIsCurrent:(id)arg1;
- (void)_restartHelper;
- (void)_updateOldestMessagesForMailboxes:(id)arg1 cancelationToken:(id)arg2;
- (void)cancel;
- (id)contentProtectionQueue;
- (void)contentProtectionStateChanged:(long long)arg1 previousState:(long long)arg2;
- (id)currentQueryHelper;
- (void)dealloc;
- (bool)didCancel;
- (id)findMessagesByPreviousObjectIDForAddedMessages:(id)arg1 helper:(id)arg2;
- (bool)hasEverReconciledJournal;
- (id)initWithQuery:(id)arg1 messagePersistence:(id)arg2 hookRegistry:(id)arg3 remindMeNotificationController:(id)arg4 remoteSearchProvider:(id)arg5 observer:(id)arg6 observationIdentifier:(id)arg7;
- (bool)isInitialized;
- (id)itemIDsForStateCaptureWithErrorString:(id*)arg1;
- (id)labelForStateCapture;
- (id)oldestMessageIDsByMailboxObjectIDs;
- (void)queryHelper:(id)arg1 conversationIDDidChangeForMessages:(id)arg2 fromConversationID:(long long)arg3;
- (void)queryHelper:(id)arg1 conversationNotificationLevelDidChangeForConversation:(long long)arg2 conversationID:(long long)arg3;
- (void)queryHelper:(id)arg1 didAddMessages:(id)arg2;
- (void)queryHelper:(id)arg1 didDeleteMessages:(id)arg2;
- (void)queryHelper:(id)arg1 didFindMessages:(id)arg2;
- (void)queryHelper:(id)arg1 didUpdateMessages:(id)arg2 forKeyPaths:(id)arg3;
- (void)queryHelper:(id)arg1 messageFlagsDidChangeForMessages:(id)arg2;
- (void)queryHelper:(id)arg1 objectIDDidChangeForMessage:(id)arg2 oldObjectID:(id)arg3 oldConversationID:(long long)arg4;
- (void)queryHelperDidFindAllMessages:(id)arg1;
- (void)queryHelperDidFinishRemoteSearch:(id)arg1;
- (void)queryHelperNeedsRestart:(id)arg1;
- (id)remoteSearchProvider;
- (id)resultQueue;
- (id)scheduler;
- (void)setCurrentQueryHelper:(id)arg1;
- (void)setDidCancel:(bool)arg1;
- (void)setHasEverReconciledJournal:(bool)arg1;
- (void)setIsInitialized:(bool)arg1;
- (bool)start;
- (id)stateCapturer;

@end
