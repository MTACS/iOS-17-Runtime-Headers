
@interface HALSchemaHALVoiceTriggerContext : SISchemaInstrumentationMessage {
    struct { 
        unsigned int timeSinceVoiceTriggerHeardInSeconds : 1; 
    }  _has;
    unsigned long long  _timeSinceVoiceTriggerHeardInSeconds;
}

@property (nonatomic) bool hasTimeSinceVoiceTriggerHeardInSeconds;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) unsigned long long timeSinceVoiceTriggerHeardInSeconds;

- (void)deleteTimeSinceVoiceTriggerHeardInSeconds;
- (id)dictionaryRepresentation;
- (bool)hasTimeSinceVoiceTriggerHeardInSeconds;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setHasTimeSinceVoiceTriggerHeardInSeconds:(bool)arg1;
- (void)setTimeSinceVoiceTriggerHeardInSeconds:(unsigned long long)arg1;
- (id)suppressMessageUnderConditions;
- (unsigned long long)timeSinceVoiceTriggerHeardInSeconds;
- (void)writeTo:(id)arg1;

@end
