
@interface LIGHTHOUSE_BITACORA_PROTOLighthouseLedgerLighthousePluginEvent : PBCodable <NSCopying> {
    NSString * _contextID;
    struct { 
        unsigned int timestamp : 1; 
    }  _has;
    LIGHTHOUSE_BITACORA_PROTOEventStatus * _performTaskStatus;
    LIGHTHOUSE_BITACORA_PROTOEventStatus * _performTrialTaskStatus;
    LIGHTHOUSE_BITACORA_PROTOEventStatus * _stop;
    double  _timestamp;
    LIGHTHOUSE_BITACORA_PROTOLighthouseLedgerTrialIdentifiers * _trialIdentifiers;
}

@property (nonatomic, retain) NSString *contextID;
@property (nonatomic, readonly) bool hasContextID;
@property (nonatomic, readonly) bool hasPerformTaskStatus;
@property (nonatomic, readonly) bool hasPerformTrialTaskStatus;
@property (nonatomic, readonly) bool hasStop;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic, readonly) bool hasTrialIdentifiers;
@property (nonatomic, retain) LIGHTHOUSE_BITACORA_PROTOEventStatus *performTaskStatus;
@property (nonatomic, retain) LIGHTHOUSE_BITACORA_PROTOEventStatus *performTrialTaskStatus;
@property (nonatomic, retain) LIGHTHOUSE_BITACORA_PROTOEventStatus *stop;
@property (nonatomic) double timestamp;
@property (nonatomic, retain) LIGHTHOUSE_BITACORA_PROTOLighthouseLedgerTrialIdentifiers *trialIdentifiers;

- (void).cxx_destruct;
- (id)contextID;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasContextID;
- (bool)hasPerformTaskStatus;
- (bool)hasPerformTrialTaskStatus;
- (bool)hasStop;
- (bool)hasTimestamp;
- (bool)hasTrialIdentifiers;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)performTaskStatus;
- (id)performTrialTaskStatus;
- (bool)readFrom:(id)arg1;
- (void)setContextID:(id)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setPerformTaskStatus:(id)arg1;
- (void)setPerformTrialTaskStatus:(id)arg1;
- (void)setStop:(id)arg1;
- (void)setTimestamp:(double)arg1;
- (void)setTrialIdentifiers:(id)arg1;
- (id)stop;
- (double)timestamp;
- (id)trialIdentifiers;
- (void)writeTo:(id)arg1;

@end
