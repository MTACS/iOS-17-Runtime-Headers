
@interface BMPBSiriExecutionEvent : PBCodable <NSCopying> {
    double  _absoluteTimestamp;
    NSString * _appBundleId;
    struct { 
        unsigned int absoluteTimestamp : 1; 
        unsigned int taskStep : 1; 
    }  _has;
    NSString * _intentName;
    NSString * _interactionId;
    NSString * _slotValue;
    NSString * _statusReason;
    NSString * _taskId;
    int  _taskStep;
}

@property (nonatomic) double absoluteTimestamp;
@property (nonatomic, retain) NSString *appBundleId;
@property (nonatomic) bool hasAbsoluteTimestamp;
@property (nonatomic, readonly) bool hasAppBundleId;
@property (nonatomic, readonly) bool hasIntentName;
@property (nonatomic, readonly) bool hasInteractionId;
@property (nonatomic, readonly) bool hasSlotValue;
@property (nonatomic, readonly) bool hasStatusReason;
@property (nonatomic, readonly) bool hasTaskId;
@property (nonatomic) bool hasTaskStep;
@property (nonatomic, retain) NSString *intentName;
@property (nonatomic, retain) NSString *interactionId;
@property (nonatomic, retain) NSString *slotValue;
@property (nonatomic, retain) NSString *statusReason;
@property (nonatomic, retain) NSString *taskId;
@property (nonatomic) int taskStep;

- (void).cxx_destruct;
- (int)StringAsTaskStep:(id)arg1;
- (double)absoluteTimestamp;
- (id)appBundleId;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAbsoluteTimestamp;
- (bool)hasAppBundleId;
- (bool)hasIntentName;
- (bool)hasInteractionId;
- (bool)hasSlotValue;
- (bool)hasStatusReason;
- (bool)hasTaskId;
- (bool)hasTaskStep;
- (unsigned long long)hash;
- (id)intentName;
- (id)interactionId;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAbsoluteTimestamp:(double)arg1;
- (void)setAppBundleId:(id)arg1;
- (void)setHasAbsoluteTimestamp:(bool)arg1;
- (void)setHasTaskStep:(bool)arg1;
- (void)setIntentName:(id)arg1;
- (void)setInteractionId:(id)arg1;
- (void)setSlotValue:(id)arg1;
- (void)setStatusReason:(id)arg1;
- (void)setTaskId:(id)arg1;
- (void)setTaskStep:(int)arg1;
- (id)slotValue;
- (id)statusReason;
- (id)taskId;
- (int)taskStep;
- (id)taskStepAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end
