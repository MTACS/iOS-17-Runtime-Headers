
@interface MHSchemaMHVoiceTriggerSecondPassTriggered : SISchemaInstrumentationMessage {
    bool  _hasVoiceTriggerEventInfo;
    MHSchemaMHVoiceTriggerEventInfo * _voiceTriggerEventInfo;
}

@property (nonatomic) bool hasVoiceTriggerEventInfo;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) MHSchemaMHVoiceTriggerEventInfo *voiceTriggerEventInfo;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)deleteVoiceTriggerEventInfo;
- (id)dictionaryRepresentation;
- (bool)hasVoiceTriggerEventInfo;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setHasVoiceTriggerEventInfo:(bool)arg1;
- (void)setVoiceTriggerEventInfo:(id)arg1;
- (id)suppressMessageUnderConditions;
- (id)voiceTriggerEventInfo;
- (void)writeTo:(id)arg1;

@end
