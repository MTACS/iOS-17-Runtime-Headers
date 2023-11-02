
@interface ICNoteMergePolicy : NSMergePolicy

- (id)init;
- (id)initWithMergeType:(unsigned long long)arg1;
- (void)resolveConflict:(id)arg1 forWallClockMergeablesInObject:(id)arg2;
- (bool)resolveConflictingAttachment:(id)arg1 with:(id)arg2;
- (bool)resolveConflictingAttachment:(id)arg1 withInlineAttachment:(id)arg2;
- (bool)resolveConflictingAttachmentPreviewImage:(id)arg1 with:(id)arg2;
- (bool)resolveConflictingDeviceMigrationState:(id)arg1 with:(id)arg2;
- (bool)resolveConflictingFolder:(id)arg1 with:(id)arg2;
- (bool)resolveConflictingInlineAttachment:(id)arg1 with:(id)arg2;
- (bool)resolveConflictingNote:(id)arg1 with:(id)arg2;
- (bool)resolveConstraintConflict:(id)arg1;
- (bool)resolveConstraintConflicts:(id)arg1 error:(id*)arg2;
- (bool)resolveOptimisticLockingVersionConflicts:(id)arg1 error:(id*)arg2;

@end
