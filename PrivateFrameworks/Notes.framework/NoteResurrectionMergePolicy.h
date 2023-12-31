
@interface NoteResurrectionMergePolicy : NSMergePolicy

+ (id)sharedNoteResurrectionMergePolicy;

- (bool)accountExists:(id)arg1;
- (id)localStoreForNote:(id)arg1;
- (bool)resolveConflicts:(id)arg1 error:(id*)arg2;
- (id)snapshotFromRecord:(id)arg1;

@end
