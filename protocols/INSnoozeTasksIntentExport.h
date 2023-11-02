
@protocol INSnoozeTasksIntentExport <NSObject, JSExport>

@required

- (NSNumber *)all;
- (id)init;
- (INDateComponentsRange *)nextTriggerTime;
- (void)setAll:(NSNumber *)arg1;
- (void)setNextTriggerTime:(INDateComponentsRange *)arg1;
- (void)setTasks:(NSArray *)arg1;
- (NSArray *)tasks;

@end
