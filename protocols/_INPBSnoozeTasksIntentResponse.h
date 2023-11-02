
@protocol _INPBSnoozeTasksIntentResponse <NSObject>

@required

+ (Class)snoozedTasksType;

- (void)addSnoozedTasks:(_INPBTask *)arg1;
- (void)clearSnoozedTasks;
- (void)setSnoozedTasks:(NSArray *)arg1;
- (NSArray *)snoozedTasks;
- (_INPBTask *)snoozedTasksAtIndex:(unsigned long long)arg1;
- (unsigned long long)snoozedTasksCount;

@end
