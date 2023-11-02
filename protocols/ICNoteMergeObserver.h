
@protocol ICNoteMergeObserver

@required

- (void)textStorageDidPerformMerge:(ICTTTextStorage *)arg1;
- (void)textStorageWillPerformMerge:(ICTTTextStorage *)arg1;

@end
