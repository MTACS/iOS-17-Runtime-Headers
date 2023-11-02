
@interface IASchemaIASiriMissEvaluationEnded : SISchemaInstrumentationMessage {
    struct { 
        unsigned int isSiriMiss : 1; 
    }  _has;
    bool  _hasVoiceTriggerSummary;
    bool  _isSiriMiss;
    IASchemaIAVoiceTriggerEventSummary * _voiceTriggerSummary;
}

@property (nonatomic) bool hasIsSiriMiss;
@property (nonatomic) bool hasVoiceTriggerSummary;
@property (nonatomic) bool isSiriMiss;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) IASchemaIAVoiceTriggerEventSummary *voiceTriggerSummary;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)deleteIsSiriMiss;
- (void)deleteVoiceTriggerSummary;
- (id)dictionaryRepresentation;
- (bool)hasIsSiriMiss;
- (bool)hasVoiceTriggerSummary;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isSiriMiss;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setHasIsSiriMiss:(bool)arg1;
- (void)setHasVoiceTriggerSummary:(bool)arg1;
- (void)setIsSiriMiss:(bool)arg1;
- (void)setVoiceTriggerSummary:(id)arg1;
- (id)suppressMessageUnderConditions;
- (id)voiceTriggerSummary;
- (void)writeTo:(id)arg1;

@end
