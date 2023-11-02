
@interface ICModernSearchIndexerDataSource : ICBaseSearchIndexerDataSource {
    ICPersistentContainer * _persistentContainer;
}

@property (nonatomic) ICPersistentContainer *persistentContainer;

// Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared

- (void).cxx_destruct;
- (id)addNotesFromSubtree:(id)arg1;
- (id)additionalItemsForObject:(id)arg1;
- (id)additionalUniqueIdentifiersToDeleteForObject:(id)arg1;
- (id)allIndexableObjectIDsInReversedReindexingOrderWithContext:(id)arg1;
- (void)contextWillSave:(id)arg1;
- (id)dataSourceIdentifier;
- (unsigned long long)indexingPriority;
- (id)initWithPersistentContainer:(id)arg1;
- (bool)isFolderWithServerShareChanged:(id)arg1;
- (bool)isPaperKitOrSynapseAttachment:(id)arg1;
- (id)newManagedObjectContext;
- (id)persistentContainer;
- (id)persistentStoreCoordinator;
- (id)searchableItemForSynapseContentItem:(id)arg1 note:(id)arg2 attachment:(id)arg3;
- (id)searchableItemResultForObject:(id)arg1;
- (void)setPersistentContainer:(id)arg1;
- (id)synapseItemsForObject:(id)arg1;

// Image: /System/Library/PrivateFrameworks/NotesEditor.framework/NotesEditor

- (id)mainThreadContext;

@end
