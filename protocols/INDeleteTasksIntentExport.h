
@protocol INDeleteTasksIntentExport <NSObject, JSExport>

@required

- (NSNumber *)all;
- (id)init;
- (void)setAll:(NSNumber *)arg1;
- (void)setTaskList:(INTaskList *)arg1;
- (void)setTasks:(NSArray *)arg1;
- (INTaskList *)taskList;
- (NSArray *)tasks;

@end
