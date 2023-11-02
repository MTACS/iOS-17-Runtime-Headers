
@interface ICBaseSearchIndexerDataSource : NSObject <ICSearchIndexerDataSource> {
    bool  _needsReindexing;
    NSMutableOrderedSet * _objectIDsBeingProcessed;
    NSMutableOrderedSet * _objectIDsToProcess;
    bool  _observingChanges;
    NSObject<OS_dispatch_queue> * _processingQueue;
    NSString * _uuid;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property bool needsReindexing;
@property (nonatomic, retain) NSMutableOrderedSet *objectIDsBeingProcessed;
@property (nonatomic, retain) NSMutableOrderedSet *objectIDsToProcess;
@property (getter=isObservingChanges, nonatomic) bool observingChanges;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *processingQueue;
@property (nonatomic, readonly) NSURL *stateFileURL;
@property (nonatomic, readonly, copy) NSString *stateFilename;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *uuid;

+ (id)didReindexForMigrationUserDefaultKeyForIdentifier:(id)arg1;
+ (bool)isAccountReindexedForMigration:(id)arg1;
+ (void)markAccountReindexedForMigration:(id)arg1;

- (void).cxx_destruct;
- (bool)_loadStateDictionaryWithFileManager:(id*)arg1 fileURL:(id*)arg2 NSError:(id*)arg3 fileExists:(bool*)arg4 savedDictionary:(id*)arg5;
- (bool)addNewObjectsForProcessing:(id)arg1;
- (id)addNotesFromSubtree:(id)arg1;
- (id)additionalItemsForObject:(id)arg1;
- (id)additionalUniqueIdentifiersToDeleteForObject:(id)arg1;
- (id)allIndexableObjectIDsInReversedReindexingOrderWithContext:(id)arg1;
- (void)clearObjectIDsToIgnoreAndStageForReindexing;
- (void)clearObjectIDsToProcess;
- (void)contextWillSave:(id)arg1;
- (id)dataSourceIdentifier;
- (long long)decisionOnObjectID:(id)arg1 searchableItemToIndex:(id*)arg2 additionalItemsToIndex:(id*)arg3 objectIDURIToDelete:(id*)arg4 additionalUniqueIdentifiersToDelete:(id*)arg5 context:(id)arg6;
- (id)indexableObjectIDsWithURIs:(id)arg1 context:(id)arg2;
- (unsigned long long)indexingPriority;
- (id)init;
- (bool)isFolderWithServerShareChanged:(id)arg1;
- (bool)isObservingChanges;
- (bool)isPaperKitOrSynapseAttachment:(id)arg1;
- (void)loadOrClearStateIfNecessary;
- (id)loadStateDictionary;
- (void)logFileSizeForFileAtPath:(id)arg1 fileManager:(id)arg2;
- (id)moveIndexingTrackingFromUserDefaultsToFileIfNecessary;
- (bool)needsReindexing;
- (id)newManagedObjectContext;
- (id)objectForManagedObjectIDURI:(id)arg1 context:(id)arg2;
- (id)objectForSearchableItem:(id)arg1 context:(id)arg2;
- (id)objectIDsBeingProcessed;
- (id)objectIDsFromSearchableItems:(id)arg1;
- (id)objectIDsNeedingProcessing;
- (id)objectIDsToProcess;
- (id)persistentStoreCoordinator;
- (id)processingQueue;
- (void)resetContextObservers;
- (bool)saveStateDictionary:(id)arg1;
- (void)saveStateIfNecessary;
- (void)searchIndexerDidFinishDeletingSearchableItemsWithObjectIDURIs:(id)arg1 error:(id)arg2;
- (void)searchIndexerDidFinishIndexingObjectIDs:(id)arg1 error:(id)arg2;
- (void)searchIndexerWillDeleteSearchableItemsWithObjectIDURIs:(id)arg1;
- (void)searchIndexerWillIndexObjectIDs:(id)arg1;
- (id)searchableItemResultForObject:(id)arg1;
- (void)setNeedsReindexing:(bool)arg1;
- (void)setObjectIDsBeingProcessed:(id)arg1;
- (void)setObjectIDsToProcess:(id)arg1;
- (void)setObservingChanges:(bool)arg1;
- (void)setProcessingQueue:(id)arg1;
- (bool)shouldIndexableObjectExistInIndexing:(id)arg1;
- (void)stageForReindexingWithContext:(id)arg1;
- (void)stageObjectIDURIsForIndexing:(id)arg1 context:(id)arg2;
- (void)startObservingChanges;
- (id)stateFileURL;
- (id)stateFilename;
- (void)stopObservingChanges;
- (id)uuid;

@end
