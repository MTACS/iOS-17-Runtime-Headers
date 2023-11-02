
@interface EMMessageRepository : EMRepository <EFFutureDelegate, EFLoggable> {
    EFLazyCache * _brandIndicatorsCache;
    NSURL * _cacheURL;
    EMRemoteConnectionRecoveryAssertion * _connectionRecoveryAssertion;
    EMMailboxRepository * _mailboxRepository;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _messageListItemCacheLock;
    NSMapTable * _observedMessageListItemCache;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _observersLock;
    NSCache * _queryCountCache;
    NSHashTable * _recoverableObservers;
    EFPromise * _remoteContentCachePromise;
    NSMapTable * _unobservedMessageListItemCache;
    <EMVIPManager> * _vipManager;
    NSMapTable * _wrappedObserversByActualObserver;
}

@property (nonatomic, retain) EFLazyCache *brandIndicatorsCache;
@property (nonatomic, retain) NSURL *cacheURL;
@property (readonly, copy) NSArray *currentObservers;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) EMMailboxRepository *mailboxRepository;
@property (nonatomic, retain) NSCache *queryCountCache;
@property (nonatomic, retain) EFPromise *remoteContentCachePromise;
@property (nonatomic, readonly) EFFuture *remoteContentURLCache;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <EMVIPManager> *vipManager;

+ (void)addValidSortDescriptorsToEMQuery;
+ (id)log;
+ (id)remoteInterface;
+ (id)signpostLog;

- (void).cxx_destruct;
- (bool)_anyObserver:(id)arg1 containsObjectID:(id)arg2;
- (void)_applyChangesToCachedObjects:(id)arg1;
- (void)_blockedSendersDidChange:(id)arg1;
- (void)_broadcastMessageListItemChangesToObservers:(id /* block */)arg1;
- (id)_cachedItemForItem:(id)arg1 observers:(id)arg2 validationBlock:(id /* block */)arg3;
- (void)_detectChangesForMatchedAddedObjectIDs:(id)arg1 observerationIdentifier:(id)arg2 matchedChangesHandler:(id /* block */)arg3;
- (id)_existingObservedItemForObjectID:(id)arg1;
- (id)_messageListItemsForObjectIDs:(id)arg1 observationIdentifier:(id)arg2 checkCache:(bool)arg3;
- (void)_notifyRecoverableObservers;
- (void)_removeItemsFromObservedItemsCacheIfNotObservedByObservers:(id)arg1;
- (bool)_shouldActionUpdateObserversForDeletedObjectIDs:(id)arg1;
- (void)_updateObserversForAction:(id)arg1;
- (void)_updateObserversForDeletedObjectIDs:(id)arg1;
- (void)_updateObserversForFlagChangeAction:(id)arg1;
- (void)_vipsDidChange:(id)arg1;
- (id)brandIndicatorForLocation:(id)arg1;
- (id)brandIndicatorsCache;
- (id)cacheURL;
- (id)cachedMetadataJSONForKey:(id)arg1 messageID:(id)arg2;
- (id)currentObservers;
- (void)dealloc;
- (void)didFinishBlockingMainThreadForFuture:(id)arg1;
- (void)didStartBlockingMainThreadForFuture:(id)arg1;
- (void)getCachedMetadataJSONForKey:(id)arg1 messageID:(id)arg2 handler:(id /* block */)arg3;
- (void)getRemoteContentURLInfoOrderedBy:(long long)arg1 inReverseOrder:(bool)arg2 limit:(long long)arg3 completionHandler:(id /* block */)arg4;
- (id)initInternal;
- (id)initWithRemoteConnection:(id)arg1 mailboxRepository:(id)arg2 vipManager:(id)arg3;
- (void)isDataAccessible:(id /* block */)arg1;
- (void)loadOlderMessagesForMailboxes:(id)arg1;
- (id)mailboxRepository;
- (id)messageForObjectID:(id)arg1;
- (id)messageForSearchableItemIdentifier:(id)arg1;
- (id)messageListItemsForObjectIDs:(id)arg1;
- (id)messageListItemsForObjectIDs:(id)arg1 observationIdentifier:(id)arg2;
- (id)messageObjectIDForURL:(id)arg1;
- (id)messageObjectIDsForSearchableItemIdentifiers:(id)arg1;
- (id)metadataForAddresses:(id)arg1;
- (void)noteViewOfRemoteContentLinks:(id)arg1;
- (void)parseRemoteContentURLsFromMessageWithObjectID:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)performCountQuery:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)performMessageChangeAction:(id)arg1;
- (id)performMessageChangeActionReturningUndoAction:(id)arg1;
- (void)performOneTimeCodeMessageDeletionWithObjectID:(id)arg1 afterDelay:(double)arg2;
- (void)performQuery:(id)arg1 limit:(long long)arg2 completionHandler:(id /* block */)arg3;
- (id)performQuery:(id)arg1 withObserver:(id)arg2;
- (id)persistentIDForMessageObjectID:(id)arg1;
- (id)predictMailboxForMovingMessages:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)predictMailboxForMovingMessagesWithIDs:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)queryCountCache;
- (void)refreshQueryWithObserver:(id)arg1;
- (id)remoteContentCachePromise;
- (id)remoteContentURLCache;
- (id)requestRepresentationForMessageWithID:(id)arg1 options:(id)arg2 delegate:(id)arg3 completionHandler:(id /* block */)arg4;
- (id)requestRepresentationForMessageWithID:(id)arg1 requestID:(unsigned long long)arg2 options:(id)arg3 delegate:(id)arg4 completionHandler:(id /* block */)arg5;
- (void)requestRichLinkMetadataForRichLinkID:(id)arg1 messageID:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)resetAllPrecomputedThreadScopes;
- (void)setBrandIndicatorsCache:(id)arg1;
- (void)setCacheURL:(id)arg1;
- (void)setCachedMetadataJSON:(id)arg1 forKey:(id)arg2 messageID:(id)arg3;
- (void)setQueryCount:(id)arg1 forQueryIdentifier:(id)arg2;
- (void)setQueryCountCache:(id)arg1;
- (void)setRemoteContentCachePromise:(id)arg1;
- (void)setUpURLCacheWithMemoryCapacity:(unsigned long long)arg1;
- (unsigned long long)signpostID;
- (id)startCountingQuery:(id)arg1 includingServerCountsForMailboxScope:(id)arg2 withObserver:(id)arg3;
- (id)startObservingOneTimeCodes:(id)arg1;
- (id)vipManager;

@end
