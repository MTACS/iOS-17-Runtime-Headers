
@protocol _INPBTask <NSObject>

@required

- (int)StringAsPriority:(NSString *)arg1;
- (int)StringAsStatus:(NSString *)arg1;
- (int)StringAsTaskReference:(NSString *)arg1;
- (int)StringAsTaskType:(NSString *)arg1;
- (_INPBContactEventTrigger *)contactEventTrigger;
- (_INPBDateTime *)createdDateTime;
- (bool)hasContactEventTrigger;
- (bool)hasCreatedDateTime;
- (bool)hasIdentifier;
- (bool)hasModifiedDateTime;
- (bool)hasParentIdentifier;
- (bool)hasPriority;
- (bool)hasSpatialEventTrigger;
- (bool)hasStatus;
- (bool)hasTaskReference;
- (bool)hasTaskType;
- (bool)hasTemporalEventTrigger;
- (bool)hasTitle;
- (NSString *)identifier;
- (_INPBDateTime *)modifiedDateTime;
- (NSString *)parentIdentifier;
- (int)priority;
- (NSString *)priorityAsString:(int)arg1;
- (void)setContactEventTrigger:(_INPBContactEventTrigger *)arg1;
- (void)setCreatedDateTime:(_INPBDateTime *)arg1;
- (void)setHasPriority:(bool)arg1;
- (void)setHasStatus:(bool)arg1;
- (void)setHasTaskReference:(bool)arg1;
- (void)setHasTaskType:(bool)arg1;
- (void)setIdentifier:(NSString *)arg1;
- (void)setModifiedDateTime:(_INPBDateTime *)arg1;
- (void)setParentIdentifier:(NSString *)arg1;
- (void)setPriority:(int)arg1;
- (void)setSpatialEventTrigger:(_INPBSpatialEventTrigger *)arg1;
- (void)setStatus:(int)arg1;
- (void)setTaskReference:(int)arg1;
- (void)setTaskType:(int)arg1;
- (void)setTemporalEventTrigger:(_INPBTemporalEventTrigger *)arg1;
- (void)setTitle:(_INPBDataString *)arg1;
- (_INPBSpatialEventTrigger *)spatialEventTrigger;
- (int)status;
- (NSString *)statusAsString:(int)arg1;
- (int)taskReference;
- (NSString *)taskReferenceAsString:(int)arg1;
- (int)taskType;
- (NSString *)taskTypeAsString:(int)arg1;
- (_INPBTemporalEventTrigger *)temporalEventTrigger;
- (_INPBDataString *)title;

@end
