
@protocol _INPBAddTasksIntent <NSObject>

@required

+ (Class)targetTaskListMembersType;
+ (Class)taskTitlesType;

- (int)StringAsPriority:(NSString *)arg1;
- (int)StringAsTaskReference:(NSString *)arg1;
- (void)addTargetTaskListMembers:(_INPBContact *)arg1;
- (void)addTaskTitles:(_INPBDataString *)arg1;
- (void)clearTargetTaskListMembers;
- (void)clearTaskTitles;
- (_INPBContactEventTrigger *)contactEventTrigger;
- (bool)hasContactEventTrigger;
- (bool)hasIntent;
- (bool)hasIntentMetadata;
- (bool)hasPriority;
- (bool)hasSpatialEventTrigger;
- (bool)hasTargetTaskList;
- (bool)hasTaskReference;
- (bool)hasTemporalEventTrigger;
- (_INPBIntent *)intent;
- (_INPBIntentMetadata *)intentMetadata;
- (int)priority;
- (NSString *)priorityAsString:(int)arg1;
- (void)setContactEventTrigger:(_INPBContactEventTrigger *)arg1;
- (void)setHasPriority:(bool)arg1;
- (void)setHasTaskReference:(bool)arg1;
- (void)setIntent:(_INPBIntent *)arg1;
- (void)setIntentMetadata:(_INPBIntentMetadata *)arg1;
- (void)setPriority:(int)arg1;
- (void)setSpatialEventTrigger:(_INPBSpatialEventTrigger *)arg1;
- (void)setTargetTaskList:(_INPBTaskList *)arg1;
- (void)setTargetTaskListMembers:(NSArray *)arg1;
- (void)setTaskReference:(int)arg1;
- (void)setTaskTitles:(NSArray *)arg1;
- (void)setTemporalEventTrigger:(_INPBTemporalEventTrigger *)arg1;
- (_INPBSpatialEventTrigger *)spatialEventTrigger;
- (_INPBTaskList *)targetTaskList;
- (NSArray *)targetTaskListMembers;
- (_INPBContact *)targetTaskListMembersAtIndex:(unsigned long long)arg1;
- (unsigned long long)targetTaskListMembersCount;
- (int)taskReference;
- (NSString *)taskReferenceAsString:(int)arg1;
- (NSArray *)taskTitles;
- (_INPBDataString *)taskTitlesAtIndex:(unsigned long long)arg1;
- (unsigned long long)taskTitlesCount;
- (_INPBTemporalEventTrigger *)temporalEventTrigger;

@end
