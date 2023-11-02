
@interface EMMailboxRepository : EMRepository <EFLoggable, EMMailboxChangeObserver, EMMailboxTypeResolver> {
    EMAccountRepository * _accountRepository;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSMutableDictionary * _mailboxesByObjectID;
    EFPromise * _mailboxesPromise;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _mailboxesPromiseLock;
    NSMapTable * _observerMap;
    <EFCancelable> * _registrationCancelable;
}

@property (nonatomic, readonly) EMAccountRepository *accountRepository;
@property (nonatomic, readonly) NSSet *allMailboxObjectIDs;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) NSOrderedSet *mailboxesIfAvailable;
@property (nonatomic, retain) EFPromise *mailboxesPromise;
@property (nonatomic, retain) NSMapTable *observerMap;
@property (retain) <EFCancelable> *registrationCancelable;
@property (readonly) Class superclass;

+ (id)log;
+ (id)remoteInterface;

- (void).cxx_destruct;
- (id)_filterIDsFromMailbox:(id)arg1 withQuery:(id)arg2;
- (id)_mailboxesFuture;
- (void)_prepareMailboxes:(id)arg1;
- (void)_restartObservingMailboxChangesIfNecessary;
- (void)_startObservingMailboxChangesIfNecessary;
- (id)accountRepository;
- (id)allMailboxObjectIDs;
- (void)dealloc;
- (id)initInternal;
- (id)initWithRemoteConnection:(id)arg1 accountRepository:(id)arg2;
- (id)mailboxForObjectID:(id)arg1;
- (id)mailboxIfAvailableForObjectID:(id)arg1;
- (void)mailboxListChanged:(id)arg1;
- (id)mailboxObjectIDsForMailboxType:(long long)arg1;
- (long long)mailboxTypeForMailboxObjectID:(id)arg1;
- (id)mailboxesForObjectIDs:(id)arg1;
- (id)mailboxesIfAvailable;
- (id)mailboxesIfAvailableForObjectIDs:(id)arg1;
- (id)mailboxesPromise;
- (id)observerMap;
- (id)performMailboxChangeAction:(id)arg1;
- (void)performQuery:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)performQuery:(id)arg1 withObserver:(id)arg2;
- (void)refreshMailboxList;
- (void)refreshQueryWithObserver:(id)arg1;
- (id)registrationCancelable;
- (id)remoteAllMailboxObjectIDs;
- (id)remoteMailboxObjectIDsForMailboxType:(long long)arg1;
- (long long)remoteMailboxTypeForMailboxObjectID:(id)arg1;
- (void)setMailboxesPromise:(id)arg1;
- (void)setObserverMap:(id)arg1;
- (void)setRegistrationCancelable:(id)arg1;

@end
