
@protocol _INPBDeleteTasksIntent <NSObject>

@required

+ (Class)tasksType;

- (void)addTasks:(_INPBTask *)arg1;
- (bool)all;
- (void)clearTasks;
- (bool)hasAll;
- (bool)hasIntentMetadata;
- (bool)hasTaskList;
- (_INPBIntentMetadata *)intentMetadata;
- (void)setAll:(bool)arg1;
- (void)setHasAll:(bool)arg1;
- (void)setIntentMetadata:(_INPBIntentMetadata *)arg1;
- (void)setTaskList:(_INPBTaskList *)arg1;
- (void)setTasks:(NSArray *)arg1;
- (_INPBTaskList *)taskList;
- (NSArray *)tasks;
- (_INPBTask *)tasksAtIndex:(unsigned long long)arg1;
- (unsigned long long)tasksCount;

@end
