
@interface TRITaskDatabase : NSObject <TRITaskPersisting> {
    TRIDatabase * _db;
    <TRITaskSetProviding> * _taskSetProvider;
}

- (void).cxx_destruct;
- (bool)_checkTaskId:(id)arg1 IsPresent:(bool*)arg2 transaction:(id)arg3;
- (id)_tasksForQuery:(id)arg1 onPrep:(id /* block */)arg2;
- (id)addTask:(id)arg1 startTime:(id)arg2 tags:(id)arg3 dependencies:(id)arg4 error:(id*)arg5;
- (id)allTasks;
- (unsigned long long)count;
- (id)dependencyFreeTasksForAllowedCapabilities:(unsigned long long)arg1 dateForRunnability:(id)arg2;
- (id)dependencyFreeTasksForAllowedCapabilities:(unsigned long long)arg1 dateForRunnability:(id)arg2 taskType:(int)arg3;
- (id)directDependenciesOfTaskWithId:(id)arg1;
- (bool)enumerateTasksWithTagsIntersectingTagSet:(id)arg1 block:(id /* block */)arg2;
- (id)idForTask:(id)arg1;
- (id)init;
- (id)initWithDatabase:(id)arg1 taskSetProvider:(id)arg2;
- (struct _PASDBTransactionCompletion_ { bool x1; })readTransactionWithFailableBlock:(id /* block */)arg1;
- (bool)removeTaskWithId:(id)arg1 cleanupBlock:(id /* block */)arg2;
- (id)taskIdsWithTag:(id)arg1;
- (id)tasksDependentOnTask:(id)arg1;
- (bool)updateTaskWithTaskId:(id)arg1 capabilities:(unsigned long long)arg2 task:(id)arg3;
- (bool)updateTaskWithTaskId:(id)arg1 startDate:(id)arg2 task:(id)arg3;
- (struct _PASDBTransactionCompletion_ { bool x1; })writeTransactionWithFailableBlock:(id /* block */)arg1;

@end
