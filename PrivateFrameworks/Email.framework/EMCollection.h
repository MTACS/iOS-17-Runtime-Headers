
@interface EMCollection : EMRepositoryObject <EFLoggable, EFSignpostable> {
    EFPromise * _allItemIDsPromise;
    <EFCancelable> * _cancelationToken;
    NSHashTable * _changeObservers;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _changeObserversLock;
    bool  _foundAllItemIDs;
    bool  _foundFirstBatch;
    NSMutableOrderedSet * _itemIDs;
    NSMutableSet * _itemIDsAnticipatingDelete;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _itemIDsLock;
    <EFScheduler> * _observerScheduler;
    EMQuery * _query;
    NSOrderedSet * _recoveringItemIDs;
}

@property (nonatomic, readonly) EFFuture *allItemIDs;
@property (nonatomic, retain) <EFCancelable> *cancelationToken;
@property (nonatomic, retain) NSHashTable *changeObservers;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <EFScheduler> *observerScheduler;
@property (nonatomic, readonly) EMQuery *query;
@property (nonatomic, readonly) <EFScheduler> *queryScheduler;
@property (readonly) unsigned long long signpostID;
@property (readonly) Class superclass;

+ (id)log;
+ (id)signpostLog;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_cancelQuery;
- (void)_cancelQueryIfNeeded;
- (void)_commonInitWithQuery:(id)arg1;
- (void)_filterAndTransformObjectIDs:(id)arg1 before:(bool)arg2 existingObjectID:(id)arg3 batchBlock:(id /* block */)arg4;
- (id)_firstExistingItemIDForItemID:(id)arg1 inReverse:(bool)arg2;
- (id)_itemIDsForObjectIDs:(id)arg1;
- (id)_iterateItemIDsStartingAtItemID:(id)arg1 inReverse:(bool)arg2 includeStartingItem:(bool)arg3 withBlock:(id /* block */)arg4;
- (void)_performQuery;
- (void)_performQueryIfNeeded;
- (id)allItemIDs;
- (void)beginObserving:(id)arg1;
- (id)cancelationToken;
- (id)changeObservers;
- (bool)containsItemID:(id)arg1 includeRecovery:(bool)arg2;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (void)enumerateObserversWithBlock:(id /* block */)arg1;
- (void)finishRecovery;
- (id)firstExistingItemIDAfterItemID:(id)arg1;
- (id)firstExistingItemIDBeforeItemID:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithObjectID:(id)arg1 query:(id)arg2;
- (id)initWithQuery:(id)arg1 repository:(id)arg2;
- (void)insertItemIDs:(id)arg1 after:(id)arg2;
- (void)insertItemIDs:(id)arg1 before:(id)arg2;
- (bool)isRecovering;
- (id)itemIDForObjectID:(id)arg1;
- (id)iterateItemIDsStartingAtItemID:(id)arg1 inReverse:(bool)arg2 withBlock:(id /* block */)arg3;
- (void)notifyChangeObserver:(id)arg1 stockedItemIDs:(id)arg2;
- (void)notifyChangeObserverAboutStockedItemIDs:(id)arg1;
- (void)notifyChangeObserversAboutAddedItemIDs:(id)arg1 after:(id)arg2 extraInfo:(id)arg3;
- (void)notifyChangeObserversAboutAddedItemIDs:(id)arg1 before:(id)arg2 extraInfo:(id)arg3;
- (void)notifyChangeObserversAboutChangesByItemIDs:(id)arg1;
- (bool)objectIDBelongsToCollection:(id)arg1;
- (id)objectIDForItemID:(id)arg1;
- (bool)observerContainsObjectID:(id)arg1;
- (id)observerScheduler;
- (id)query;
- (void)queryAnticipatesDeletedObjectIDs:(id)arg1;
- (void)queryDidFinishInitialLoad;
- (void)queryDidFinishRemoteSearch;
- (void)queryDidStartRecovery;
- (void)queryMatchedAddedObjectIDs:(id)arg1 after:(id)arg2 extraInfo:(id)arg3;
- (void)queryMatchedAddedObjectIDs:(id)arg1 before:(id)arg2 extraInfo:(id)arg3;
- (void)queryMatchedChangesByObjectIDs:(id)arg1;
- (void)queryMatchedDeletedObjectIDs:(id)arg1;
- (void)queryMatchedMovedObjectIDs:(id)arg1 after:(id)arg2;
- (void)queryMatchedMovedObjectIDs:(id)arg1 before:(id)arg2;
- (void)queryReplacedObjectID:(id)arg1 withNewObjectID:(id)arg2;
- (id)queryScheduler;
- (void)refresh;
- (id)removeItemIDs:(id)arg1;
- (void)setCancelationToken:(id)arg1;
- (void)setChangeObservers:(id)arg1;
- (unsigned long long)signpostID;
- (void)stopObserving:(id)arg1;

@end
