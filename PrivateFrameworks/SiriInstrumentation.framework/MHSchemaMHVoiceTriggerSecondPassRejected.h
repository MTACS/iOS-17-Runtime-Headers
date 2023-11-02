
@interface MHSchemaMHVoiceTriggerSecondPassRejected : SISchemaInstrumentationMessage {
    struct { 
        unsigned int reason : 1; 
    }  _has;
    bool  _hasVoiceTriggerEventInfo;
    int  _reason;
    MHSchemaMHVoiceTriggerEventInfo * _voiceTriggerEventInfo;
}

@property (nonatomic) bool hasReason;
@property (nonatomic) bool hasVoiceTriggerEventInfo;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) int reason;
@property (nonatomic, retain) MHSchemaMHVoiceTriggerEventInfo *voiceTriggerEventInfo;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)deleteReason;
- (void)deleteVoiceTriggerEventInfo;
- (id)dictionaryRepresentation;
- (bool)hasReason;
- (bool)hasVoiceTriggerEventInfo;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (int)reason;
- (void)setHasReason:(bool)arg1;
- (void)setHasVoiceTriggerEventInfo:(bool)arg1;
- (void)setReason:(int)arg1;
- (void)setVoiceTriggerEventInfo:(id)arg1;
- (id)suppressMessageUnderConditions;
- (id)voiceTriggerEventInfo;
- (void)writeTo:(id)arg1;

@end
