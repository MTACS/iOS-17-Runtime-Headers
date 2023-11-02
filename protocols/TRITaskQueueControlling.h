
@protocol TRITaskQueueControlling

@required

- (bool)cancelTasksWithTag:(NSString *)arg1;
- (bool)cancelTasksWithTag:(NSString *)arg1 excludingTasks:(NSArray *)arg2;
- (bool)enumerateTasksWithTagsIntersectingTagSet:(void *)arg1 block:(void *)arg2; // needs 2 arg types, found 8: NSSet *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, TRITaskRecord *, bool*, void*

@end
