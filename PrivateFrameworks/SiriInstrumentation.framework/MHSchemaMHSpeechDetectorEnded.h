
@interface MHSchemaMHSpeechDetectorEnded : SISchemaInstrumentationMessage {
    float  _amountOfSpeechDetectedInMs;
    struct { 
        unsigned int timeSinceLastAcceptedRequestInNs : 1; 
        unsigned int amountOfSpeechDetectedInMs : 1; 
        unsigned int startSpeechDetectionThresholdInMs : 1; 
    }  _has;
    bool  _hasPreviousRequestId;
    SISchemaUUID * _previousRequestId;
    float  _startSpeechDetectionThresholdInMs;
    unsigned long long  _timeSinceLastAcceptedRequestInNs;
}

@property (nonatomic) float amountOfSpeechDetectedInMs;
@property (nonatomic) bool hasAmountOfSpeechDetectedInMs;
@property (nonatomic) bool hasPreviousRequestId;
@property (nonatomic) bool hasStartSpeechDetectionThresholdInMs;
@property (nonatomic) bool hasTimeSinceLastAcceptedRequestInNs;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) SISchemaUUID *previousRequestId;
@property (nonatomic) float startSpeechDetectionThresholdInMs;
@property (nonatomic) unsigned long long timeSinceLastAcceptedRequestInNs;

- (void).cxx_destruct;
- (float)amountOfSpeechDetectedInMs;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)deleteAmountOfSpeechDetectedInMs;
- (void)deletePreviousRequestId;
- (void)deleteStartSpeechDetectionThresholdInMs;
- (void)deleteTimeSinceLastAcceptedRequestInNs;
- (id)dictionaryRepresentation;
- (bool)hasAmountOfSpeechDetectedInMs;
- (bool)hasPreviousRequestId;
- (bool)hasStartSpeechDetectionThresholdInMs;
- (bool)hasTimeSinceLastAcceptedRequestInNs;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)previousRequestId;
- (bool)readFrom:(id)arg1;
- (void)setAmountOfSpeechDetectedInMs:(float)arg1;
- (void)setHasAmountOfSpeechDetectedInMs:(bool)arg1;
- (void)setHasPreviousRequestId:(bool)arg1;
- (void)setHasStartSpeechDetectionThresholdInMs:(bool)arg1;
- (void)setHasTimeSinceLastAcceptedRequestInNs:(bool)arg1;
- (void)setPreviousRequestId:(id)arg1;
- (void)setStartSpeechDetectionThresholdInMs:(float)arg1;
- (void)setTimeSinceLastAcceptedRequestInNs:(unsigned long long)arg1;
- (float)startSpeechDetectionThresholdInMs;
- (id)suppressMessageUnderConditions;
- (unsigned long long)timeSinceLastAcceptedRequestInNs;
- (void)writeTo:(id)arg1;

@end
