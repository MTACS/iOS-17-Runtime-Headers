
@interface _INPBSetTaskAttributeIntent : PBCodable <NSCopying, NSSecureCoding, _INPBSetTaskAttributeIntent> {
    _INPBContactEventTrigger * _contactEventTrigger;
    struct { 
        unsigned int priority : 1; 
        unsigned int status : 1; 
    }  _has;
    _INPBIntentMetadata * _intentMetadata;
    int  _priority;
    _INPBSpatialEventTrigger * _spatialEventTrigger;
    int  _status;
    _INPBTask * _targetTask;
    _INPBDataString * _taskTitle;
    _INPBTemporalEventTrigger * _temporalEventTrigger;
}

@property (nonatomic, retain) _INPBContactEventTrigger *contactEventTrigger;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasContactEventTrigger;
@property (nonatomic, readonly) bool hasIntentMetadata;
@property (nonatomic) bool hasPriority;
@property (nonatomic, readonly) bool hasSpatialEventTrigger;
@property (nonatomic) bool hasStatus;
@property (nonatomic, readonly) bool hasTargetTask;
@property (nonatomic, readonly) bool hasTaskTitle;
@property (nonatomic, readonly) bool hasTemporalEventTrigger;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) _INPBIntentMetadata *intentMetadata;
@property (nonatomic) int priority;
@property (nonatomic, retain) _INPBSpatialEventTrigger *spatialEventTrigger;
@property (nonatomic) int status;
@property (readonly) Class superclass;
@property (nonatomic, retain) _INPBTask *targetTask;
@property (nonatomic, retain) _INPBDataString *taskTitle;
@property (nonatomic, retain) _INPBTemporalEventTrigger *temporalEventTrigger;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (int)StringAsPriority:(id)arg1;
- (int)StringAsStatus:(id)arg1;
- (id)contactEventTrigger;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasContactEventTrigger;
- (bool)hasIntentMetadata;
- (bool)hasPriority;
- (bool)hasSpatialEventTrigger;
- (bool)hasStatus;
- (bool)hasTargetTask;
- (bool)hasTaskTitle;
- (bool)hasTemporalEventTrigger;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)intentMetadata;
- (bool)isEqual:(id)arg1;
- (int)priority;
- (id)priorityAsString:(int)arg1;
- (bool)readFrom:(id)arg1;
- (void)setContactEventTrigger:(id)arg1;
- (void)setHasPriority:(bool)arg1;
- (void)setHasStatus:(bool)arg1;
- (void)setIntentMetadata:(id)arg1;
- (void)setPriority:(int)arg1;
- (void)setSpatialEventTrigger:(id)arg1;
- (void)setStatus:(int)arg1;
- (void)setTargetTask:(id)arg1;
- (void)setTaskTitle:(id)arg1;
- (void)setTemporalEventTrigger:(id)arg1;
- (id)spatialEventTrigger;
- (int)status;
- (id)statusAsString:(int)arg1;
- (id)targetTask;
- (id)taskTitle;
- (id)temporalEventTrigger;
- (void)writeTo:(id)arg1;

@end
