
@protocol ICTTMergeableStringUndoCommand <NSObject, ICTTMergeableStringIDTracker>

@required

- (bool)addToGroup:(ICTTMergeableStringUndoGroup *)arg1;
- (void)applyToString:(ICTTMergeableUndoString *)arg1;

@end
