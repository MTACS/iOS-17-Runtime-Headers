
@protocol _INPBDeleteTasksIntentResponse <NSObject>

@required

+ (Class)deletedTasksType;

- (void)addDeletedTasks:(_INPBTask *)arg1;
- (void)clearDeletedTasks;
- (NSArray *)deletedTasks;
- (_INPBTask *)deletedTasksAtIndex:(unsigned long long)arg1;
- (unsigned long long)deletedTasksCount;
- (void)setDeletedTasks:(NSArray *)arg1;

@end
