
@protocol SWSetupManager <NSObject>

@required

- (void)addTask:(id <SWSetupTask>)arg1;
- (void)performTasks;

@end
