
@protocol INAddTasksIntentResponseExport <NSObject, JSExport>

@required

- (NSArray *)addedTasks;
- (long long)code;
- (INTaskList *)modifiedTaskList;
- (void)setAddedTasks:(NSArray *)arg1;
- (void)setModifiedTaskList:(INTaskList *)arg1;
- (void)setWarnings:(unsigned long long)arg1;
- (unsigned long long)warnings;

@end
