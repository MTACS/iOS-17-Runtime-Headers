
@interface LIGHTHOUSE_BITACORA_PROTOLighthouseLedgerTrialdEvent : PBCodable <NSCopying> {
    NSString * _contextID;
    bool  _eventSucceeded;
    int  _eventType;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int eventType : 1; 
        unsigned int eventSucceeded : 1; 
    }  _has;
    double  _timestamp;
    LIGHTHOUSE_BITACORA_PROTOLighthouseLedgerTrialIdentifiers * _trialIdentifiers;
}

@property (nonatomic, retain) NSString *contextID;
@property (nonatomic) bool eventSucceeded;
@property (nonatomic) int eventType;
@property (nonatomic, readonly) bool hasContextID;
@property (nonatomic) bool hasEventSucceeded;
@property (nonatomic) bool hasEventType;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic, readonly) bool hasTrialIdentifiers;
@property (nonatomic) double timestamp;
@property (nonatomic, retain) LIGHTHOUSE_BITACORA_PROTOLighthouseLedgerTrialIdentifiers *trialIdentifiers;

- (void).cxx_destruct;
- (int)StringAsEventType:(id)arg1;
- (id)contextID;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)eventSucceeded;
- (int)eventType;
- (id)eventTypeAsString:(int)arg1;
- (bool)hasContextID;
- (bool)hasEventSucceeded;
- (bool)hasEventType;
- (bool)hasTimestamp;
- (bool)hasTrialIdentifiers;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setContextID:(id)arg1;
- (void)setEventSucceeded:(bool)arg1;
- (void)setEventType:(int)arg1;
- (void)setHasEventSucceeded:(bool)arg1;
- (void)setHasEventType:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setTimestamp:(double)arg1;
- (void)setTrialIdentifiers:(id)arg1;
- (double)timestamp;
- (id)trialIdentifiers;
- (void)writeTo:(id)arg1;

@end
