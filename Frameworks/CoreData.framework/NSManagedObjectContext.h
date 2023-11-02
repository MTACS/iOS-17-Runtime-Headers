
@interface NSManagedObjectContext : NSObject <NSCoding, NSLocking> {
    id * _additionalPrivateIvars;
    id * _cachedObsInfoByEntity;
    int  _cd_rc;
    NSMutableSet * _changedObjects;
    NSString * _contextLabel;
    NSMutableSet * _deletedObjects;
    void * _dispatchQueue;
    double  _fetchTimestamp;
    struct _managedObjectContextFlags { 
        unsigned int _registeredForCallback : 1; 
        unsigned int _propagatesDeletesAtEndOfEvent : 1; 
        unsigned int _exhaustiveValidation : 1; 
        unsigned int _processingChanges : 1; 
        unsigned int _useCommittedSnapshot : 1; 
        unsigned int _registeredUndoTransactionID : 1; 
        unsigned int _retainsAllRegisteredObjects : 1; 
        unsigned int _savingInProgress : 1; 
        unsigned int _wasDisposed : 1; 
        unsigned int _unprocessedChangesPending : 1; 
        unsigned int _hasExcessivePrepareForPendingChangesAttempts : 1; 
        unsigned int _isDirty : 1; 
        unsigned int _ignoreUndoCheckpoints : 1; 
        unsigned int _propagatingDeletes : 1; 
        unsigned int _isNSEditorEditing : 1; 
        unsigned int _isMainThreadBlessed : 1; 
        unsigned int _isImportContext : 1; 
        unsigned int _preflightSaveInProgress : 1; 
        unsigned int _disableDiscardEditing : 1; 
        unsigned int _isParentStoreContext : 1; 
        unsigned int _postSaveNotifications : 1; 
        unsigned int _isMerging : 1; 
        unsigned int _concurrencyType : 1; 
        unsigned int _deleteInaccessible : 1; 
        unsigned int _priority : 2; 
        unsigned int _autoMerge : 1; 
        unsigned int _isXPCServerContext : 1; 
        unsigned int _pushSecureDelete : 1; 
        unsigned int _refreshAfterSave : 1; 
        unsigned int _allowAncillary : 1; 
        unsigned int _generatedMutatedIDsNotification : 1; 
        unsigned int _postSavedObjectNotifications : 1; 
        unsigned int _allowAdditionalUserInfoKeys : 1; 
        unsigned int _trackSQLiteDatabaseStatistics : 1; 
        unsigned int _usedBySwift : 1; 
        unsigned int _reservedFlags : 28; 
    }  _flags;
    short  _ignoreChangeNotification;
    _PFContextMapTable * _infoByGID;
    NSMutableSet * _insertedObjects;
    id  _lock;
    int  _lockCount;
    NSMutableSet * _lockedObjects;
    id  _parentObjectStore;
    NSArray * _persistentStoreIdentifiers;
    id  _queueOwner;
    long long  _referenceCallbackRegistration;
    _PFManagedObjectReferenceQueue * _referenceQueue;
    NSMutableSet * _refreshedObjects;
    void * _reserved1;
    int  _spinLock;
    short  _undoTransactionID;
    NSMutableSet * _unprocessedChanges;
    NSMutableSet * _unprocessedDeletes;
    NSMutableSet * _unprocessedInserts;
}

@property (nonatomic) bool _isSwiftBound;
@property (nonatomic) bool automaticallyMergesChangesFromParent;
@property (readonly) unsigned long long concurrencyType;
@property (nonatomic, readonly) NSSet *deletedObjects;
@property (nonatomic, readonly) bool hasChanges;
@property (nonatomic, readonly) NSString *hmd_cloudPrivateStoreIdentifier;
@property (nonatomic, readonly) NSString *hmd_cloudSharedStoreIdentifier;
@property (nonatomic, readonly) bool hmd_fakeRecordsEnabled;
@property (nonatomic, readonly) bool hmd_homeManagerApplicationDataChanged;
@property (nonatomic, retain) NSManagedObjectContext *hmd_homeManagerContext;
@property (nonatomic, readonly, copy) NSUUID *hmd_homeUUID;
@property (nonatomic, readonly) unsigned long long hmd_transactionAuthor;
@property (nonatomic, readonly) NSString *hmd_workingStoreIdentifier;
@property (nonatomic, retain) NSString *ic_debugName;
@property (nonatomic, readonly) bool ic_isMainThreadContext;
@property (nonatomic, readonly) NSSet *insertedObjects;
@property (retain) id mergePolicy;
@property (nonatomic, retain) NSString *name;
@property (copy) NSString *name;
@property (retain) NSManagedObjectContext *parentContext;
@property (retain) NSPersistentStoreCoordinator *persistentStoreCoordinator;
@property (nonatomic) bool propagatesDeletesAtEndOfEvent;
@property (nonatomic, readonly) NSQueryGenerationToken *queryGenerationToken;
@property (readonly) RCSavedRecordingsModel *recordingsModel;
@property (nonatomic, readonly) NSSet *registeredObjects;
@property (nonatomic) bool retainsRegisteredObjects;
@property bool shouldDeleteInaccessibleFaults;
@property double stalenessInterval;
@property (copy) NSString *transactionAuthor;
@property (nonatomic, retain) NSUndoManager *undoManager;
@property (nonatomic, readonly) NSSet *updatedObjects;
@property (nonatomic, readonly) NSMutableDictionary *userInfo;

// Image: /System/Library/Frameworks/CoreData.framework/CoreData

+ (void)_mergeChangesFromRemoteContextSave:(id)arg1 intoContexts:(id)arg2;
+ (bool)accessInstanceVariablesDirectly;
+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)createFutureForFileAtURL:(id)arg1;
+ (void)initialize;
+ (void)mergeChangesFromRemoteContextSave:(id)arg1 intoContexts:(id)arg2;
+ (id)new;

- (id)_allOrderKeysForDestination:(id)arg1 inRelationship:(id)arg2 error:(id*)arg3;
- (bool)_allowAncillaryEntities;
- (void)_automaticallyMergeChangesFromContextDidSaveNotification:(id)arg1;
- (id)_changeTrackingToken__;
- (void)_clearChangedThisTransaction:(id)arg1;
- (id)_delegate;
- (bool)_disableDiscardEditing;
- (void)_forceInsertionForObject:(id)arg1;
- (void)_forgetObject:(id)arg1 propagateToObjectStore:(bool)arg2 removeFromRegistry:(bool)arg3;
- (bool)_isDeallocating;
- (bool)_isSwiftBound;
- (void)_managedObjectContextEditor:(id)arg1 didCommit:(bool)arg2 contextInfo:(struct { id x1; SEL x2; void *x3; }*)arg3;
- (void)_mergeChangesFromDidSaveDictionary:(id)arg1 usingObjectIDs:(bool)arg2;
- (void)_mergeChangesFromRemoteContextSave:(id)arg1;
- (void)_mergeChangesFromRemoteContextSave:(id)arg1 presupposingQueryGeneration:(id)arg2;
- (id)_newOrderedRelationshipInformationForRelationship:(id)arg1 forObjectWithID:(id)arg2 withContext:(id)arg3 error:(id*)arg4;
- (void)_noop:(id)arg1;
- (id)_orderKeysForRelationshipWithName__:(id)arg1 onObjectWithID:(id)arg2;
- (id)_orderedSetWithResultsFromFetchRequest:(id)arg1;
- (bool)_parentObtainPermanentIDsForObjects:(id)arg1 context:(id)arg2 error:(id*)arg3;
- (bool)_performImmediate:(id /* block */)arg1;
- (void)_processChangedStoreConfigurationNotification:(id)arg1;
- (id)_queryGenerationToken__;
- (id)_retainedCurrentQueryGeneration:(id)arg1;
- (id)_retainedObjectsFromRemovedStore:(id)arg1;
- (void)_setAllowAncillaryEntities:(bool)arg1;
- (void)_setAllowsExpandedUserInfoKeys:(bool)arg1;
- (bool)_setChangeTrackingTokenFromToken:(id)arg1 error:(id*)arg2;
- (void)_setDelegate:(id)arg1;
- (void)_setDisableDiscardEditing:(bool)arg1;
- (void)_setFaultingError:(id)arg1;
- (bool)_setQueryGenerationFromToken:(id)arg1 error:(id*)arg2;
- (void)_stopConflictDetectionForObject:(id)arg1;
- (void)_storeConfigurationChanged:(id)arg1;
- (bool)_tryRetain;
- (void)_undoDeletions:(id)arg1;
- (void)_undoDeletionsMovedToUpdates:(id)arg1;
- (void)_undoInsertions:(id)arg1;
- (void)_undoManagerCheckpoint:(id)arg1;
- (void)_undoUpdates:(id)arg1;
- (bool)_updateLocationsOfObjectsToLocationByOrderKey:(id)arg1 inRelationshipWithName:(id)arg2 onObjectWithID:(id)arg3 error:(id*)arg4;
- (void)assignObject:(id)arg1 toPersistentStore:(id)arg2;
- (bool)automaticallyMergesChangesFromParent;
- (bool)commitEditing;
- (bool)commitEditingAndReturnError:(id*)arg1;
- (void)commitEditingWithDelegate:(id)arg1 didCommitSelector:(SEL)arg2 contextInfo:(void*)arg3;
- (unsigned long long)concurrencyType;
- (unsigned long long)countForFetchRequest:(id)arg1 error:(id*)arg2;
- (id)databaseStatistics;
- (void)dealloc;
- (void)deleteObject:(id)arg1;
- (id)deletedObjects;
- (id)description;
- (void)detectConflictsForObject:(id)arg1;
- (void)discardEditing;
- (void)encodeWithCoder:(id)arg1;
- (bool)evictFuture:(id)arg1 withError:(id*)arg2;
- (id)executeFetchRequest:(id)arg1 error:(id*)arg2;
- (id)executeRequest:(id)arg1 error:(id*)arg2;
- (id)executeRequest:(id)arg1 withContext:(id)arg2 error:(id*)arg3;
- (id)existingObjectWithID:(id)arg1 error:(id*)arg2;
- (bool)hasChanges;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithConcurrencyType:(unsigned long long)arg1;
- (void)insertObject:(id)arg1;
- (id)insertedObjects;
- (bool)isEditing;
- (void)lock;
- (void)managedObjectContextDidRegisterObjectsWithIDs:(id)arg1 generation:(id)arg2;
- (void)managedObjectContextDidUnregisterObjectsWithIDs:(id)arg1 generation:(id)arg2;
- (void)mergeChangesFromContextDidSaveNotification:(id)arg1;
- (id)mergePolicy;
- (id)name;
- (id)newValueForRelationship:(id)arg1 forObjectWithID:(id)arg2 withContext:(id)arg3 error:(id*)arg4;
- (id)newValuesForObjectWithID:(id)arg1 withContext:(id)arg2 error:(id*)arg3;
- (void)objectDidBeginEditing:(id)arg1;
- (void)objectDidEndEditing:(id)arg1;
- (id)objectRegisteredForID:(id)arg1;
- (void)objectWillChange:(id)arg1;
- (id)objectWithID:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (bool)obtainPermanentIDsForObjects:(id)arg1 error:(id*)arg2;
- (id)parentContext;
- (void)performBlock:(id /* block */)arg1;
- (void)performBlockAndWait:(id /* block */)arg1;
- (id)performBlockWithResult:(id /* block */)arg1;
- (void)performWithOptions:(unsigned long long)arg1 andBlock:(id /* block */)arg2;
- (id)persistentStoreCoordinator;
- (void)processPendingChanges;
- (bool)propagatesDeletesAtEndOfEvent;
- (id)queryGenerationToken;
- (void)redo;
- (void)refreshAllObjects;
- (void)refreshObject:(id)arg1 mergeChanges:(bool)arg2;
- (id)registeredObjects;
- (oneway void)release;
- (void)reset;
- (id)retain;
- (unsigned long long)retainCount;
- (bool)retainsRegisteredObjects;
- (void)rollback;
- (bool)save:(id*)arg1;
- (void)setAutomaticallyMergesChangesFromParent:(bool)arg1;
- (void)setMergePolicy:(id)arg1;
- (void)setName:(id)arg1;
- (void)setParentContext:(id)arg1;
- (void)setPersistentStoreCoordinator:(id)arg1;
- (void)setPropagatesDeletesAtEndOfEvent:(bool)arg1;
- (bool)setQueryGenerationFromToken:(id)arg1 error:(id*)arg2;
- (void)setRetainsRegisteredObjects:(bool)arg1;
- (void)setShouldDeleteInaccessibleFaults:(bool)arg1;
- (void)setShouldPerformSecureOperation:(bool)arg1;
- (void)setShouldRefreshAfterSave:(bool)arg1;
- (void)setStalenessInterval:(double)arg1;
- (void)setTrackSQLiteDatabaseStatistics:(bool)arg1;
- (void)setTransactionAuthor:(id)arg1;
- (void)setUndoManager:(id)arg1;
- (void)set_isSwiftBound:(bool)arg1;
- (bool)shouldDeleteInaccessibleFaults;
- (bool)shouldHandleInaccessibleFault:(id)arg1 forObjectID:(id)arg2 triggeredByProperty:(id)arg3;
- (bool)shouldPerformSecureOperation;
- (bool)shouldRefreshAfterSave;
- (double)stalenessInterval;
- (bool)trackSQLiteDatabaseStatistics;
- (id)transactionAuthor;
- (bool)tryLock;
- (void)undo;
- (id)undoManager;
- (void)unlock;
- (id)updatedObjects;
- (id)userInfo;

// Image: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount

- (void)vs_removeAllPersistentStores;

// Image: /System/Library/PrivateFrameworks/BookDataStore.framework/BookDataStore

+ (id)mergePredicate:(id)arg1 andPredicate:(id)arg2;

- (void)batchDeleteEntity:(id)arg1 matching:(id)arg2 prefetchRelationships:(id)arg3;
- (id)copyEntityPropertiesArray:(id)arg1 fromEntityName:(id)arg2 withPredicate:(id)arg3 sortBy:(id)arg4 ascending:(bool)arg5;
- (id)copyEntityPropertiesArray:(id)arg1 fromEntityName:(id)arg2 withPredicate:(id)arg3 sortBy:(id)arg4 ascending:(bool)arg5 distinct:(bool)arg6;
- (id)copyEntityProperty:(id)arg1 fromEntityName:(id)arg2 withPredicate:(id)arg3;
- (id)copyEntityPropertyArray:(id)arg1 fromEntityName:(id)arg2 withPredicate:(id)arg3 sortBy:(id)arg4 ascending:(bool)arg5;
- (unsigned long long)countEntity:(id)arg1 withPredicate:(id)arg2;
- (id)entity:(id)arg1 withPredicate:(id)arg2;
- (id)entity:(id)arg1 withPredicate:(id)arg2 sortBy:(id)arg3 ascending:(bool)arg4 fetchLimit:(unsigned long long)arg5;
- (id)entity:(id)arg1 withPredicate:(id)arg2 sortBy:(id)arg3 ascending:(bool)arg4 fetchLimit:(unsigned long long)arg5 prefetchRelationships:(id)arg6;
- (id)entity:(id)arg1 withPredicate:(id)arg2 sortDescriptors:(id)arg3 fetchLimit:(unsigned long long)arg4 prefetchRelationships:(id)arg5;
- (bool)im_isPerformingSafeAccess;
- (void)im_performSafeAccess:(id /* block */)arg1;
- (void)im_popSafeAccessState;
- (void)im_pushSafeAccessState;
- (id)newByClass:(Class)arg1;
- (id)objectIDsWithPredicate:(id)arg1 forEntity:(id)arg2;
- (id)unbatchedObjectsWithPredicate:(id)arg1 forEntity:(id)arg2;

// Image: /System/Library/PrivateFrameworks/FeedbackCore.framework/FeedbackCore

- (id)createFeedbackObjectWithEntityName:(id)arg1 remoteID:(id)arg2;
- (id)feedbackObjectWithEntityName:(id)arg1 remoteID:(id)arg2 creatingIfNeeded:(bool)arg3;
- (id)feedbackObjectsWithEntityName:(id)arg1 remoteIDs:(id)arg2 creatingIfNeeded:(bool)arg3;
- (id)findFeedbackObjectWithEntityName:(id)arg1 remoteID:(id)arg2;
- (id)findFeedbackObjectsWithEntityName:(id)arg1 remoteIDs:(id)arg2;
- (id)findLocalIDFeedbackObjectsWithEntityName:(id)arg1 serverID:(id)arg2;
- (id)tryFindingObjectInContextWithID:(id)arg1 andEntityName:(id)arg2;

// Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon

- (void)hmd_assertIsExecuting;
- (id)hmd_cloudPrivateStoreIdentifier;
- (id)hmd_cloudSharedStoreIdentifier;
- (id)hmd_coreData;
- (bool)hmd_fakeRecordsEnabled;
- (id)hmd_fetchExistingObjectWithID:(id)arg1 propertiesToFetch:(id)arg2;
- (id)hmd_fetchExistingObjectWithID:(id)arg1 propertiesToFetch:(id)arg2 error:(id*)arg3;
- (bool)hmd_homeManagerApplicationDataChanged;
- (id)hmd_homeManagerContext;
- (id)hmd_homeUUID;
- (void)hmd_logPendingChangesWithReason:(id)arg1;
- (bool)hmd_saveWithTransactionAuthor:(unsigned long long)arg1 error:(id*)arg2;
- (unsigned long long)hmd_transactionAuthor;
- (id)hmd_workingStoreIdentifier;
- (void)setHmd_cloudPrivateStoreIdentifier:(id)arg1;
- (void)setHmd_cloudSharedStoreIdentifier:(id)arg1;
- (void)setHmd_coreData:(id)arg1;
- (void)setHmd_fakeRecordsEnabled:(bool)arg1;
- (void)setHmd_homeManagerApplicationDataChanged:(bool)arg1;
- (void)setHmd_homeManagerContext:(id)arg1;
- (void)setHmd_workingStoreIdentifier:(id)arg1;

// Image: /System/Library/PrivateFrameworks/NotesSupport.framework/NotesSupport

- (id)ic_debugName;
- (id)ic_existingObjectWithID:(id)arg1;
- (bool)ic_isMainThreadContext;
- (id)ic_objectIDFromURL:(id)arg1;
- (id)ic_objectsWithIDs:(id)arg1;
- (void)ic_performBlock:(id /* block */)arg1 andPerformBlockOnMainThread:(id /* block */)arg2;
- (void)ic_performBlockAndWait:(id /* block */)arg1 andPerformBlockAndWaitOnMainThread:(id /* block */)arg2;
- (void)ic_refreshObject:(id)arg1 mergeChanges:(bool)arg2;
- (bool)ic_save;
- (bool)ic_saveWithLogDescription:(id)arg1;
- (bool)ic_saveWithLogDescription:(id)arg1 arguments:(char *)arg2;
- (void)setIc_debugName:(id)arg1;

// Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices

+ (bool)shouldHavePhotoLibrary;

- (id)deleteObjectsWithIncrementalSave:(id)arg1;
- (id)enumerateObjectsFromFetchRequest:(id)arg1 batchSize:(unsigned long long)arg2 usingBlock:(id /* block */)arg3;
- (id)enumerateObjectsFromFetchRequest:(id)arg1 count:(unsigned long long*)arg2 batchSize:(unsigned long long)arg3 usingBlock:(id /* block */)arg4;
- (id)enumerateObjectsFromFetchRequest:(id)arg1 count:(unsigned long long*)arg2 usingDefaultBatchSizeWithBlock:(id /* block */)arg3;
- (id)enumerateObjectsFromFetchRequest:(id)arg1 usingDefaultBatchSizeWithBlock:(id /* block */)arg2;
- (id)enumerateWithIncrementalSaveUsingObjects:(id)arg1 shouldRefreshAfterSave:(bool)arg2 withBlock:(id /* block */)arg3;
- (id)enumerateWithIncrementalSaveUsingObjects:(id)arg1 withBlock:(id /* block */)arg2;
- (bool)isUserInterfaceContext;
- (id)libraryBundle;
- (id)pathManager;
- (id)photoLibrary;
- (bool)pl_executeBatchUpdateRequest:(id)arg1 withBatchSize:(unsigned long long)arg2 error:(id*)arg3;
- (void)pl_refresh;
- (id)pl_resultWithError:(id*)arg1 block:(id /* block */)arg2;

// Image: /System/Library/PrivateFrameworks/PodcastsFoundation.framework/PodcastsFoundation

- (id)_allOrderedSyncInfoSinceRevision:(long long)arg1 revisionProperty:(id)arg2;
- (long long)_largestRevisionForRevisionProperty:(id)arg1;
- (unsigned long long)_nextSortOrderWithRequest:(id)arg1;
- (id)_objectsInEntity:(id)arg1 predicate:(id)arg2 sortDescriptors:(id)arg3 resultType:(unsigned long long)arg4 returnsObjectsAsFaults:(bool)arg5 limit:(long long)arg6;
- (id)_objectsInEntity:(id)arg1 predicate:(id)arg2 sortDescriptors:(id)arg3 resultType:(unsigned long long)arg4 returnsObjectsAsFaults:(bool)arg5 limit:(long long)arg6 propertiesToFetch:(id)arg7 batchSize:(unsigned long long)arg8;
- (id)_predicateForUuid:(id)arg1;
- (id)allOrderedSyncInfoSinceRevision:(long long)arg1;
- (id)allOrderedSyncInfoWithArtworkUpdatesSinceRevision:(long long)arg1;
- (void)batchDeleteObjectsInEntity:(id)arg1 predicate:(id)arg2;
- (id)channelForStoreId:(long long)arg1;
- (unsigned long long)countOfObjectsInEntity:(id)arg1 predicate:(id)arg2;
- (unsigned long long)countOfPodcasts;
- (unsigned long long)countOfSubscribedAndNotHiddenPodcasts;
- (long long)currentSyncAnchorRevision;
- (void)deletePlaylist:(id)arg1;
- (id)dictionaryForEpisodeUuid:(id)arg1;
- (id)dictionaryForPodcastUuid:(id)arg1;
- (id)dictionaryWithProperties:(id)arg1 episodeUuid:(id)arg2;
- (id)dictionaryWithProperties:(id)arg1 podcastUuid:(id)arg2;
- (id)episodeForStoreTrackID:(long long)arg1;
- (id)episodeForUuid:(id)arg1;
- (id)episodeForUuid:(id)arg1 returnsObjectAsFault:(bool)arg2;
- (id)episodesForStoreTrackIDs:(id)arg1;
- (id)episodesForUuids:(id)arg1;
- (id)executeFetchRequest:(id)arg1;
- (id)existingEpisodeWithID:(id)arg1;
- (bool)hasAnyObjectsInEntity:(id)arg1 satisfyingPredicate:(id)arg2;
- (unsigned long long)nextSortOrderForPodcasts;
- (id)objectDictionariesInEntity:(id)arg1 predicate:(id)arg2 sortDescriptors:(id)arg3 propertiesToFetch:(id)arg4 includeObjectId:(bool)arg5;
- (id)objectDictionariesInEntity:(id)arg1 predicate:(id)arg2 sortDescriptors:(id)arg3 propertiesToFetch:(id)arg4 includeObjectId:(bool)arg5 limit:(unsigned long long)arg6 distinct:(bool)arg7 groupBy:(id)arg8;
- (id)objectDictionaryForUuid:(id)arg1 entityName:(id)arg2;
- (id)objectDictionaryForUuid:(id)arg1 entityName:(id)arg2 byAddingComputedProperties:(id)arg3 toFetchedObjectDictionary:(id)arg4;
- (id)objectDictionaryForUuid:(id)arg1 propertiesToFetch:(id)arg2 entityName:(id)arg3;
- (id)objectForUuid:(id)arg1 entityName:(id)arg2;
- (id)objectForUuid:(id)arg1 entityName:(id)arg2 returnsObjectAsFault:(bool)arg3;
- (id)objectInEntity:(id)arg1 predicate:(id)arg2;
- (id)objectsInEntity:(id)arg1 predicate:(id)arg2 propertiesToFetch:(id)arg3 batchSize:(unsigned long long)arg4;
- (id)objectsInEntity:(id)arg1 predicate:(id)arg2 propertiesToFetch:(id)arg3 limit:(long long)arg4;
- (id)objectsInEntity:(id)arg1 predicate:(id)arg2 sortDescriptors:(id)arg3;
- (id)objectsInEntity:(id)arg1 predicate:(id)arg2 sortDescriptors:(id)arg3 returnsObjectsAsFaults:(bool)arg4;
- (id)objectsInEntity:(id)arg1 predicate:(id)arg2 sortDescriptors:(id)arg3 returnsObjectsAsFaults:(bool)arg4 limit:(long long)arg5;
- (void)performBlockAndWaitWithSave:(id /* block */)arg1;
- (id)playlistForUuid:(id)arg1;
- (id)podcastForFeedUrl:(id)arg1;
- (id)podcastForPodcastPID:(long long)arg1;
- (id)podcastForStoreId:(long long)arg1;
- (id)podcastForUuid:(id)arg1;
- (bool)saveInCurrentBlock;
- (id)syncInfosByUuids:(id)arg1;
- (id)titlesOfObjectsInEntity:(id)arg1 predicate:(id)arg2;
- (id)valueForProperty:(id)arg1 episodeUuid:(id)arg2;
- (id)valueForProperty:(id)arg1 objectUuid:(id)arg2 entityName:(id)arg3;
- (id)valueForProperty:(id)arg1 podcastUuid:(id)arg2;

// Image: /System/Library/PrivateFrameworks/PodcastsKit.framework/PodcastsKit

- (id)podcastPlaylistSettingsForUuid:(id)arg1;

// Image: /System/Library/PrivateFrameworks/PodcastsUI.framework/PodcastsUI

- (id)colorThemeForUuid:(id)arg1;
- (id)themeForUuid:(id)arg1;

// Image: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusFoundation.framework/OpusFoundation

- (id)objectWithURI:(id)arg1;

// Image: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos

- (bool)rc_performAndWaitReturningError:(id*)arg1 block:(id /* block */)arg2;
- (id)recordingsModel;

@end
