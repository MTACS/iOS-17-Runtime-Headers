
@interface LIGHTHOUSE_BITACORA_PROTOLighthouseLedgerMlruntimedEvent : PBCodable <NSCopying> {
    LIGHTHOUSE_BITACORA_PROTOScheduleStatus * _activityScheduleStatus;
    NSString * _contextID;
    struct { 
        unsigned int timestamp : 1; 
    }  _has;
    LIGHTHOUSE_BITACORA_PROTOTaskEvent * _taskCompleted;
    LIGHTHOUSE_BITACORA_PROTOTaskEvent * _taskFetched;
    LIGHTHOUSE_BITACORA_PROTOTaskEvent * _taskScheduled;
    double  _timestamp;
    LIGHTHOUSE_BITACORA_PROTOLighthouseLedgerTrialIdentifiers * _trialIdentifiers;
}

@property (nonatomic, retain) LIGHTHOUSE_BITACORA_PROTOScheduleStatus *activityScheduleStatus;
@property (nonatomic, retain) NSString *contextID;
@property (nonatomic, readonly) bool hasActivityScheduleStatus;
@property (nonatomic, readonly) bool hasContextID;
@property (nonatomic, readonly) bool hasTaskCompleted;
@property (nonatomic, readonly) bool hasTaskFetched;
@property (nonatomic, readonly) bool hasTaskScheduled;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic, readonly) bool hasTrialIdentifiers;
@property (nonatomic, retain) LIGHTHOUSE_BITACORA_PROTOTaskEvent *taskCompleted;
@property (nonatomic, retain) LIGHTHOUSE_BITACORA_PROTOTaskEvent *taskFetched;
@property (nonatomic, retain) LIGHTHOUSE_BITACORA_PROTOTaskEvent *taskScheduled;
@property (nonatomic) double timestamp;
@property (nonatomic, retain) LIGHTHOUSE_BITACORA_PROTOLighthouseLedgerTrialIdentifiers *trialIdentifiers;

- (void).cxx_destruct;
- (id)activityScheduleStatus;
- (id)contextID;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasActivityScheduleStatus;
- (bool)hasContextID;
- (bool)hasTaskCompleted;
- (bool)hasTaskFetched;
- (bool)hasTaskScheduled;
- (bool)hasTimestamp;
- (bool)hasTrialIdentifiers;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setActivityScheduleStatus:(id)arg1;
- (void)setContextID:(id)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setTaskCompleted:(id)arg1;
- (void)setTaskFetched:(id)arg1;
- (void)setTaskScheduled:(id)arg1;
- (void)setTimestamp:(double)arg1;
- (void)setTrialIdentifiers:(id)arg1;
- (id)taskCompleted;
- (id)taskFetched;
- (id)taskScheduled;
- (double)timestamp;
- (id)trialIdentifiers;
- (void)writeTo:(id)arg1;

@end
