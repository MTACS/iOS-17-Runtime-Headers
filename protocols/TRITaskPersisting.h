
@protocol TRITaskPersisting

@required

- (NSNumber *)addTask:(id <TRITask>)arg1 startTime:(NSDate *)arg2 tags:(NSArray *)arg3 dependencies:(NSArray *)arg4 error:(id*)arg5;
- (NSDictionary *)allTasks;
- (unsigned long long)count;
- (NSDictionary *)dependencyFreeTasksForAllowedCapabilities:(unsigned long long)arg1 dateForRunnability:(NSDate *)arg2;
- (NSDictionary *)dependencyFreeTasksForAllowedCapabilities:(unsigned long long)arg1 dateForRunnability:(NSDate *)arg2 taskType:(int)arg3;
- (NSArray *)directDependenciesOfTaskWithId:(NSNumber *)arg1;
- (bool)enumerateTasksWithTagsIntersectingTagSet:(void *)arg1 block:(void *)arg2; // needs 2 arg types, found 8: NSSet *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, TRITaskRecord *, bool*, void*
- (NSNumber *)idForTask:(id <TRITask>)arg1;
- (bool)removeTaskWithId:(void *)arg1 cleanupBlock:(void *)arg2; // needs 2 arg types, found 7: NSNumber *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <TRITask> *, void*
- (NSArray *)taskIdsWithTag:(NSString *)arg1;
- (NSArray *)tasksDependentOnTask:(NSNumber *)arg1;
- (bool)updateTaskWithTaskId:(NSNumber *)arg1 capabilities:(unsigned long long)arg2 task:(id <TRITask>)arg3;
- (bool)updateTaskWithTaskId:(NSNumber *)arg1 startDate:(NSDate *)arg2 task:(id <TRITask>)arg3;

@end
