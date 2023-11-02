
@interface EDPrecomputedThreadQueryHandler : EDMessageRepositoryQueryHandler <EDMessageChangeHookResponder, EDRemindMeNotificationControllerObserver, EDThreadChangeHookResponder, EFLoggable, EMCollectionItemIDStateCapturerDelegate> {
    <EFScheduler> * _backgroundWorkScheduler;
    EFCancelationToken * _cancelationToken;
    <EFScheduler> * _changeScheduler;
    EMMailboxScope * _mailboxScope;
    NSMutableDictionary * _oldestThreadObjectIDsByMailbox;
    NSMutableDictionary * _pendingChanges;
    NSMutableArray * _pendingPositionChanges;
    EDThreadReloadSummaryHelper * _reloadSummaryHelper;
    NSMutableDictionary * _reportedJournaledObjectIDs;
    EMCollectionItemIDStateCapturer * _stateCapturer;
    EDThreadPersistence * _threadPersistence;
    EMThreadScope * _threadScope;
    NSMutableSet * _unreportedJournaledObjectIDs;
    <EFCancelable> * _updateOldestThreadsCancelationToken;
    EDUpdateThrottler * _updateThrottler;
}

@property (nonatomic, readonly) <EFScheduler> *backgroundWorkScheduler;
@property (nonatomic, retain) EFCancelationToken *cancelationToken;
@property (nonatomic, readonly) <EFScheduler> *changeScheduler;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) EMMailboxScope *mailboxScope;
@property (nonatomic, retain) NSMutableDictionary *oldestThreadObjectIDsByMailbox;
@property (nonatomic, retain) NSMutableDictionary *pendingChanges;
@property (nonatomic, retain) NSMutableArray *pendingPositionChanges;
@property (nonatomic, readonly) EDThreadReloadSummaryHelper *reloadSummaryHelper;
@property (nonatomic, retain) NSMutableDictionary *reportedJournaledObjectIDs;
@property (nonatomic, readonly) EMCollectionItemIDStateCapturer *stateCapturer;
@property (readonly) Class superclass;
@property (nonatomic, readonly) EDThreadPersistence *threadPersistence;
@property (nonatomic, readonly) EMThreadScope *threadScope;
@property (nonatomic, retain) NSMutableSet *unreportedJournaledObjectIDs;
@property (nonatomic, readonly) bool updateDisplayDate;
@property (nonatomic, retain) <EFCancelable> *updateOldestThreadsCancelationToken;
@property (nonatomic, readonly) EDUpdateThrottler *updateThrottler;

+ (id)log;

- (void).cxx_destruct;
- (void)_addChangeToPendingChanges:(id)arg1 forThreadObjectID:(id)arg2;
- (void)_flushUpdatesWithReason:(id)arg1;
- (void)_getInitialResults;
- (bool)_isAddingOrDeletingObjectID:(id)arg1;
- (id)_messageForPersistedMessage:(id)arg1;
- (void)_oldestThreadsNeedUpdate;
- (void)_onScheduler:(id)arg1 performCancelableBlock:(id /* block */)arg2;
- (void)_persistenceIsAddingThreadWithObjectID:(id)arg1;
- (void)_persistenceIsChangingThreadWithObjectID:(id)arg1 changedKeyPaths:(id)arg2;
- (void)_updateDisplayDateForMessagesIfNeeded;
- (id)backgroundWorkScheduler;
- (void)cancel;
- (id)cancelationToken;
- (id)changeScheduler;
- (void)controller:(id)arg1 messageTimerFired:(id)arg2;
- (id)initWithQuery:(id)arg1 threadScope:(id)arg2 messagePersistence:(id)arg3 threadPersistence:(id)arg4 hookRegistry:(id)arg5 remindMeNotificationController:(id)arg6 observer:(id)arg7 observationIdentifier:(id)arg8 observationResumer:(id)arg9;
- (id)itemIDsForStateCaptureWithErrorString:(id*)arg1;
- (id)labelForStateCapture;
- (id)mailboxScope;
- (id)messageListItemForObjectID:(id)arg1 error:(id*)arg2;
- (id)oldestThreadObjectIDsByMailbox;
- (id)pendingChanges;
- (id)pendingPositionChanges;
- (void)persistenceDidChangeConversationNotificationLevel:(long long)arg1 conversationID:(long long)arg2 generationWindow:(id)arg3;
- (void)persistenceDidChangeGlobalMessageID:(long long)arg1 orConversationID:(long long)arg2 message:(id)arg3 generationWindow:(id)arg4;
- (void)persistenceDidFinishThreadUpdates;
- (void)persistenceDidUpdateProperties:(id)arg1 message:(id)arg2 generationWindow:(id)arg3;
- (void)persistenceIsAddingThreadWithObjectID:(id)arg1 journaled:(bool)arg2 generationWindow:(id)arg3;
- (void)persistenceIsChangingThreadWithObjectID:(id)arg1 changedKeyPaths:(id)arg2 generationWindow:(id)arg3;
- (void)persistenceIsDeletingThreadWithObjectID:(id)arg1 generationWindow:(id)arg2;
- (void)persistenceIsMarkingThreadAsJournaledWithObjectID:(id)arg1 generationWindow:(id)arg2;
- (void)persistenceIsReconcilingJournaledThreadsWithObjectIDs:(id)arg1 generationWindow:(id)arg2;
- (id)reloadSummaryHelper;
- (id)reportedJournaledObjectIDs;
- (void)setCancelationToken:(id)arg1;
- (void)setOldestThreadObjectIDsByMailbox:(id)arg1;
- (void)setPendingChanges:(id)arg1;
- (void)setPendingPositionChanges:(id)arg1;
- (void)setReportedJournaledObjectIDs:(id)arg1;
- (void)setUnreportedJournaledObjectIDs:(id)arg1;
- (void)setUpdateOldestThreadsCancelationToken:(id)arg1;
- (bool)start;
- (id)stateCapturer;
- (void)test_tearDown;
- (id)threadPersistence;
- (id)threadScope;
- (id)unreportedJournaledObjectIDs;
- (bool)updateDisplayDate;
- (id)updateOldestThreadsCancelationToken;
- (id)updateThrottler;

@end