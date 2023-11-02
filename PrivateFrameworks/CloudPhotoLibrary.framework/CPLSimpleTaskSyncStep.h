
@interface CPLSimpleTaskSyncStep : CPLSyncStep {
    CPLEngineSyncTask * _currentTask;
    Class  _taskClass;
}

@property (nonatomic, readonly) CPLEngineSyncTask *currentTask;
@property (nonatomic, readonly) Class taskClass;

- (void).cxx_destruct;
- (void)cancelAllTasks:(bool)arg1;
- (bool)containsTask:(id)arg1;
- (id)currentTask;
- (id)descriptionForTasks;
- (bool)didFinishTask:(id)arg1 withError:(id)arg2 shouldStop:(bool*)arg3;
- (bool)hasTasks;
- (id)initWithSyncManager:(id)arg1 syncSession:(id)arg2 taskClass:(Class)arg3;
- (bool)launchNecessaryTasks;
- (void)moveTasksToBackground;
- (id)newTask;
- (Class)taskClass;

@end
