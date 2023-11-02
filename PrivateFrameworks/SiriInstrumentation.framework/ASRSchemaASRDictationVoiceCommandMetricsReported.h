
@interface ASRSchemaASRDictationVoiceCommandMetricsReported : SISchemaInstrumentationMessage {
    unsigned long long  _commandEndTimeInNs;
    struct { 
        unsigned int commandEndTimeInNs : 1; 
    }  _has;
    bool  _hasVoiceCommandId;
    SISchemaUUID * _voiceCommandId;
}

@property (nonatomic) unsigned long long commandEndTimeInNs;
@property (nonatomic) bool hasCommandEndTimeInNs;
@property (nonatomic) bool hasVoiceCommandId;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) SISchemaUUID *voiceCommandId;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (unsigned long long)commandEndTimeInNs;
- (void)deleteCommandEndTimeInNs;
- (void)deleteVoiceCommandId;
- (id)dictionaryRepresentation;
- (bool)hasCommandEndTimeInNs;
- (bool)hasVoiceCommandId;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setCommandEndTimeInNs:(unsigned long long)arg1;
- (void)setHasCommandEndTimeInNs:(bool)arg1;
- (void)setHasVoiceCommandId:(bool)arg1;
- (void)setVoiceCommandId:(id)arg1;
- (id)suppressMessageUnderConditions;
- (id)voiceCommandId;
- (void)writeTo:(id)arg1;

@end
