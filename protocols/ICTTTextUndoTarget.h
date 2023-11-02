
@protocol ICTTTextUndoTarget <NSObject>

@required

- (void)applyUndoGroup:(ICTTMergeableStringUndoGroup *)arg1;

@optional

- (ICTTMergeableStringUndoGroup *)newCoalescingUndoGroup;

@end
