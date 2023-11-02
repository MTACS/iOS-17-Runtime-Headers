
@protocol INDeleteTasksIntentResponseExport <NSObject, JSExport>

@required

- (long long)code;
- (NSArray *)deletedTasks;
- (void)setDeletedTasks:(NSArray *)arg1;

@end
