
@protocol _INPBSnoozeTasksIntent <NSObject>

@required

+ (Class)tasksType;

- (void)addTasks:(_INPBTask *)arg1;
- (bool)all;
- (void)clearTasks;
- (bool)hasAll;
- (bool)hasIntentMetadata;
- (bool)hasNextTriggerTime;
- (_INPBIntentMetadata *)intentMetadata;
- (_INPBDateTimeRange *)nextTriggerTime;
- (void)setAll:(bool)arg1;
- (void)setHasAll:(bool)arg1;
- (void)setIntentMetadata:(_INPBIntentMetadata *)arg1;
- (void)setNextTriggerTime:(_INPBDateTimeRange *)arg1;
- (void)setTasks:(NSArray *)arg1;
- (NSArray *)tasks;
- (_INPBTask *)tasksAtIndex:(unsigned long long)arg1;
- (unsigned long long)tasksCount;

@end
