
@protocol _INPBSetTaskAttributeIntent <NSObject>

@required

- (int)StringAsPriority:(NSString *)arg1;
- (int)StringAsStatus:(NSString *)arg1;
- (_INPBContactEventTrigger *)contactEventTrigger;
- (bool)hasContactEventTrigger;
- (bool)hasIntentMetadata;
- (bool)hasPriority;
- (bool)hasSpatialEventTrigger;
- (bool)hasStatus;
- (bool)hasTargetTask;
- (bool)hasTaskTitle;
- (bool)hasTemporalEventTrigger;
- (_INPBIntentMetadata *)intentMetadata;
- (int)priority;
- (NSString *)priorityAsString:(int)arg1;
- (void)setContactEventTrigger:(_INPBContactEventTrigger *)arg1;
- (void)setHasPriority:(bool)arg1;
- (void)setHasStatus:(bool)arg1;
- (void)setIntentMetadata:(_INPBIntentMetadata *)arg1;
- (void)setPriority:(int)arg1;
- (void)setSpatialEventTrigger:(_INPBSpatialEventTrigger *)arg1;
- (void)setStatus:(int)arg1;
- (void)setTargetTask:(_INPBTask *)arg1;
- (void)setTaskTitle:(_INPBDataString *)arg1;
- (void)setTemporalEventTrigger:(_INPBTemporalEventTrigger *)arg1;
- (_INPBSpatialEventTrigger *)spatialEventTrigger;
- (int)status;
- (NSString *)statusAsString:(int)arg1;
- (_INPBTask *)targetTask;
- (_INPBDataString *)taskTitle;
- (_INPBTemporalEventTrigger *)temporalEventTrigger;

@end
