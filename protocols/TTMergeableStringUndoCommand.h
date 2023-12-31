
@protocol TTMergeableStringUndoCommand <NSObject, TTMergeableStringIDTracker>

@required

- (bool)addToGroup:(TTMergeableStringUndoGroup *)arg1;
- (void)applyToString:(TTMergeableUndoString *)arg1;

@end
