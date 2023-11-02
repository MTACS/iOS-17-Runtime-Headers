
@protocol _INPBAddTasksIntentResponse <NSObject>

@required

+ (Class)addedTasksType;

- (int)StringAsWarnings:(NSString *)arg1;
- (void)addAddedTasks:(_INPBTask *)arg1;
- (void)addWarnings:(int)arg1;
- (NSArray *)addedTasks;
- (_INPBTask *)addedTasksAtIndex:(unsigned long long)arg1;
- (unsigned long long)addedTasksCount;
- (void)clearAddedTasks;
- (void)clearWarnings;
- (bool)hasModifiedTaskList;
- (_INPBTaskList *)modifiedTaskList;
- (void)setAddedTasks:(NSArray *)arg1;
- (void)setModifiedTaskList:(_INPBTaskList *)arg1;
- (void)setWarnings:(int*)arg1 count:(unsigned long long)arg2;
- (int*)warnings;
- (NSString *)warningsAsString:(int)arg1;
- (int)warningsAtIndex:(unsigned long long)arg1;
- (unsigned long long)warningsCount;

@end
