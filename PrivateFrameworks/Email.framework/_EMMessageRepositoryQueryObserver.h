
@interface _EMMessageRepositoryQueryObserver : NSObject <EMMessageListItemQueryResultsObserver, EMRecoverableObserver> {
    EMObjectID * _observationIdentifier;
    <EMQueryResultsObserver> * _observer;
    EMQuery * _query;
    long long  _recoveryAttempt;
    bool  _recoveryIsScheduled;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _recoveryLock;
    <EFScheduler> * _recoveryScheduler;
    <EFCancelable> * _remoteCancelable;
    EMMessageRepository * _repository;
    EFCancelationToken * _token;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_performQueryWithRemoteConnection:(id)arg1 forRecovery:(bool)arg2;
- (void)cancel;
- (void)dealloc;
- (id)initWithRepository:(id)arg1 query:(id)arg2 observer:(id)arg3;
- (void)observer:(id)arg1 matchedAddedObjectIDs:(id)arg2 after:(id)arg3 extraInfo:(id)arg4;
- (void)observer:(id)arg1 matchedAddedObjectIDs:(id)arg2 before:(id)arg3 extraInfo:(id)arg4;
- (void)observer:(id)arg1 matchedChangesForObjectIDs:(id)arg2;
- (void)observer:(id)arg1 matchedDeletedObjectIDs:(id)arg2;
- (void)observer:(id)arg1 matchedMovedObjectIDs:(id)arg2 after:(id)arg3;
- (void)observer:(id)arg1 matchedMovedObjectIDs:(id)arg2 before:(id)arg3;
- (void)observer:(id)arg1 matchedOldestItemsUpdatedForMailboxes:(id)arg2;
- (void)observer:(id)arg1 replacedExistingObjectID:(id)arg2 withNewObjectID:(id)arg3;
- (void)observer:(id)arg1 wasUpdated:(id)arg2;
- (void)observerDidFinishInitialLoad:(id)arg1;
- (void)observerDidFinishRemoteSearch:(id)arg1;
- (void)observerWillRestart:(id)arg1;
- (void)performWithRemoteConnection:(id)arg1;
- (void)recoverWithRemoteConnection:(id)arg1;
- (void)refreshQueryWithRemoteConnection:(id)arg1;
- (id)trampoliningObserver;

@end
