
@protocol INCreateTaskListIntentResponseExport <NSObject, JSExport>

@required

- (long long)code;
- (INTaskList *)createdTaskList;
- (void)setCreatedTaskList:(INTaskList *)arg1;

@end
