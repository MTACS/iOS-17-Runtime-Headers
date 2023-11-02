
@interface ICHTMLSearchIndexerDataSource : ICBaseSearchIndexerDataSource

// Image: /System/Library/PrivateFrameworks/Notes.framework/Notes

- (id)addNotesFromSubtree:(id)arg1;
- (id)allIndexableObjectIDsInReversedReindexingOrderWithContext:(id)arg1;
- (void)contextWillSave:(id)arg1;
- (id)dataSourceIdentifier;
- (id)indexableObjectIDsMatchingPredicate:(id)arg1 sortByReversedReindexingOrder:(bool)arg2 context:(id)arg3;
- (unsigned long long)indexingPriority;
- (bool)isFolderWithServerShareChanged:(id)arg1;
- (id)newManagedObjectContext;
- (id)persistentStoreCoordinator;

// Image: /System/Library/PrivateFrameworks/NotesEditor.framework/NotesEditor

- (id)mainThreadContext;

@end
