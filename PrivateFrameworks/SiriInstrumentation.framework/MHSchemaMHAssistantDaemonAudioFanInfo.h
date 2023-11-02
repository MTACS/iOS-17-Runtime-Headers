
@interface MHSchemaMHAssistantDaemonAudioFanInfo : SISchemaInstrumentationMessage {
    int  _currentSpeed;
    unsigned int  _fanId;
    struct { 
        unsigned int fanId : 1; 
        unsigned int currentSpeed : 1; 
        unsigned int targetSpeed : 1; 
    }  _has;
    int  _targetSpeed;
}

@property (nonatomic) int currentSpeed;
@property (nonatomic) unsigned int fanId;
@property (nonatomic) bool hasCurrentSpeed;
@property (nonatomic) bool hasFanId;
@property (nonatomic) bool hasTargetSpeed;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) int targetSpeed;

- (int)currentSpeed;
- (void)deleteCurrentSpeed;
- (void)deleteFanId;
- (void)deleteTargetSpeed;
- (id)dictionaryRepresentation;
- (unsigned int)fanId;
- (bool)hasCurrentSpeed;
- (bool)hasFanId;
- (bool)hasTargetSpeed;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setCurrentSpeed:(int)arg1;
- (void)setFanId:(unsigned int)arg1;
- (void)setHasCurrentSpeed:(bool)arg1;
- (void)setHasFanId:(bool)arg1;
- (void)setHasTargetSpeed:(bool)arg1;
- (void)setTargetSpeed:(int)arg1;
- (id)suppressMessageUnderConditions;
- (int)targetSpeed;
- (void)writeTo:(id)arg1;

@end
