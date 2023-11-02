
@interface EDMailboxProvider : NSObject <EMMailboxTypeResolver> {
    <EDAccountsProvider> * _accountsProvider;
    NSArray * _allMailboxCache;
    _Atomic int  _deferringInvalidationCount;
    NSMapTable * _legacyMailboxToMailboxMap;
    NSObject<OS_dispatch_queue> * _mailboxCacheQueue;
    bool  _needsToInvalidate;
    NSMapTable * _objectIDToLegacyMailboxMap;
    <EFScheduler> * _observerScheduler;
    <EDMailboxProviderDelegate> * delegate;
}

@property (nonatomic) <EDAccountsProvider> *accountsProvider;
@property (retain) NSArray *allMailboxCache;
@property (nonatomic, readonly) NSSet *allMailboxObjectIDs;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <EDMailboxProviderDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (retain) NSMapTable *legacyMailboxToMailboxMap;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *mailboxCacheQueue;
@property (retain) NSMapTable *objectIDToLegacyMailboxMap;
@property (nonatomic, retain) <EFScheduler> *observerScheduler;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_beginDeferringInvalidation;
- (void)_didChangeMailboxList:(id)arg1;
- (void)_didFetchMailboxList:(id)arg1;
- (void)_didReloadMailboxList:(id)arg1;
- (void)_endDeferringInvalidation;
- (void)_fetchMailboxesForAccount:(id)arg1;
- (void)_invalidateCache;
- (bool)_isDeferringInvalidation;
- (void)_mailboxInvalidated:(id)arg1;
- (void)_populateCache;
- (id)_transformMailbox:(id)arg1 legacyMailboxToMailboxMap:(id)arg2 objectIDToLegacyMailboxMap:(id)arg3;
- (void)_willFetchMailboxList:(id)arg1;
- (void)_willReloadMailboxList:(id)arg1;
- (id)accountsProvider;
- (id)allMailboxCache;
- (id)allMailboxObjectIDs;
- (id)allMailboxes;
- (id)delegate;
- (void)enumerateAccountsWithBlock:(id /* block */)arg1;
- (void)fetchMailboxes;
- (id)initWithAccountsProvider:(id)arg1;
- (void)invalidateMailboxes;
- (id)legacyMailboxForObjectID:(id)arg1;
- (id)legacyMailboxToMailboxMap;
- (id)legacyMailboxesForObjectIDs:(id)arg1;
- (id)mailboxCacheQueue;
- (id)mailboxForObjectID:(id)arg1;
- (id)mailboxFromLegacyMailbox:(id)arg1;
- (id)mailboxObjectIDsForMailboxType:(long long)arg1;
- (long long)mailboxTypeForMailboxObjectID:(id)arg1;
- (id)mailboxesFromLegacyMailboxes:(id)arg1;
- (id)objectIDToLegacyMailboxMap;
- (id)observerScheduler;
- (void)setAccountsProvider:(id)arg1;
- (void)setAllMailboxCache:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setLegacyMailboxToMailboxMap:(id)arg1;
- (void)setObjectIDToLegacyMailboxMap:(id)arg1;
- (void)setObserverScheduler:(id)arg1;
- (void)test_tearDown;

@end
