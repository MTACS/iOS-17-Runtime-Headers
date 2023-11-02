
@protocol INAddTasksIntentExport <NSObject, JSExport>

@required

- (INContactEventTrigger *)contactEventTrigger;
- (id)init;
- (INIntent *)intent;
- (long long)priority;
- (void)setContactEventTrigger:(INContactEventTrigger *)arg1;
- (void)setIntent:(INIntent *)arg1;
- (void)setPriority:(long long)arg1;
- (void)setSpatialEventTrigger:(INSpatialEventTrigger *)arg1;
- (void)setTargetTaskList:(INTaskList *)arg1;
- (void)setTargetTaskListMembers:(NSArray *)arg1;
- (void)setTaskReference:(long long)arg1;
- (void)setTaskTitles:(NSArray *)arg1;
- (void)setTemporalEventTrigger:(INTemporalEventTrigger *)arg1;
- (INSpatialEventTrigger *)spatialEventTrigger;
- (INTaskList *)targetTaskList;
- (NSArray *)targetTaskListMembers;
- (long long)taskReference;
- (NSArray *)taskTitles;
- (INTemporalEventTrigger *)temporalEventTrigger;

@end
