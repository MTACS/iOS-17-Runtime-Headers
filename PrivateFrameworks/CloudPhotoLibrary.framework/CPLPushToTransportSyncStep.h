
@interface CPLPushToTransportSyncStep : CPLSimpleTaskSyncStep {
    bool  _highPriority;
}

@property (nonatomic, readonly) bool highPriority;

- (void)cancelAllTasks:(bool)arg1;
- (bool)highPriority;
- (id)initWithSyncManager:(id)arg1 syncSession:(id)arg2 highPriority:(bool)arg3;
- (id)newTask;

@end
