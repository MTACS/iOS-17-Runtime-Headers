
@interface HDSummarySharingEntryManager : NSObject <HDAnalyticsSubmissionCoordinatorDelegate, HDProfileReadyObserver> {
    long long  _authorizationStatusWhenContactsResolved;
    <HDSummarySharingEntryManagerDelegate> * _delegate;
    bool  _hasCompletedContactResolution;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    HKObserverSet * _observerSet;
    HDProfile * _profile;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <HDSummarySharingEntryManagerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HDProfile *profile;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_contactStoreDidChange;
- (void)addObserver:(id)arg1;
- (id)anyCodableEntryWithPredicate:(id)arg1 errorOut:(id*)arg2;
- (id)codableEntryWithIdentifier:(id)arg1 type:(long long)arg2 direction:(unsigned long long)arg3 errorOut:(id*)arg4;
- (id)codableEntryWithUUID:(id)arg1 errorOut:(id*)arg2;
- (void)dealloc;
- (id)delegate;
- (bool)deleteEntryWithUUID:(id)arg1 error:(id*)arg2;
- (bool)enumerateCodableEntriesWithPredicate:(id)arg1 error:(id*)arg2 handler:(id /* block */)arg3;
- (id)fetchAllCodableSharingEntriesWithError:(id*)arg1;
- (id)fetchSharingEntriesWithError:(id*)arg1;
- (id)initWithProfile:(id)arg1;
- (bool)insertOrReplaceCodableEntries:(id)arg1 ignoreIfExists:(bool)arg2 shouldResolveCNContact:(bool)arg3 syncProvenance:(long long)arg4 error:(id*)arg5;
- (bool)insertOrReplaceCodableEntries:(id)arg1 shouldResolveCNContact:(bool)arg2 error:(id*)arg3;
- (bool)pauseActiveEntriesWithError:(id*)arg1;
- (bool)pauseStatusForEntryWithUUID:(id)arg1 error:(id*)arg2;
- (id)profile;
- (void)profileDidBecomeReady:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)reportDailyAnalyticsWithCoordinator:(id)arg1 completion:(id /* block */)arg2;
- (bool)resolveContactsIfNeededWithError:(id*)arg1;
- (void)setDelegate:(id)arg1;
- (bool)updateEntryWithInvitationUUID:(id)arg1 newNotificationStatus:(long long)arg2 error:(id*)arg3;
- (bool)updateEntryWithInvitationUUID:(id)arg1 newStatus:(long long)arg2 dateAccepted:(id)arg3 ownerParticipant:(id)arg4 error:(id*)arg5;
- (bool)updateEntryWithUUID:(id)arg1 authorizationsToAdd:(id)arg2 authorizationsToDelete:(id)arg3 deleteOnCommit:(bool)arg4 error:(id*)arg5;
- (bool)updateEntryWithUUID:(id)arg1 pauseStatus:(bool)arg2 error:(id*)arg3;

@end
