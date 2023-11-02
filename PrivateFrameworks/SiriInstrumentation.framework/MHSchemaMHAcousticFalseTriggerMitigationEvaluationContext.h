
@interface MHSchemaMHAcousticFalseTriggerMitigationEvaluationContext : SISchemaInstrumentationMessage {
    MHSchemaMHAcousticFalseTriggerMitigationFailed * _failed;
    bool  _hasFailed;
    bool  _hasScoreGenerated;
    bool  _hasStartedOrChanged;
    MHSchemaMHAcousticFalseTriggerMitigationScoreGenerated * _scoreGenerated;
    MHSchemaMHAcousticFalseTriggerMitigationStarted * _startedOrChanged;
    unsigned long long  _whichContextevent;
}

@property (nonatomic, retain) MHSchemaMHAcousticFalseTriggerMitigationFailed *failed;
@property (nonatomic) bool hasFailed;
@property (nonatomic) bool hasScoreGenerated;
@property (nonatomic) bool hasStartedOrChanged;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) MHSchemaMHAcousticFalseTriggerMitigationScoreGenerated *scoreGenerated;
@property (nonatomic, retain) MHSchemaMHAcousticFalseTriggerMitigationStarted *startedOrChanged;
@property (nonatomic, readonly) unsigned long long whichContextevent;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)deleteFailed;
- (void)deleteScoreGenerated;
- (void)deleteStartedOrChanged;
- (id)dictionaryRepresentation;
- (id)failed;
- (bool)hasFailed;
- (bool)hasScoreGenerated;
- (bool)hasStartedOrChanged;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (id)scoreGenerated;
- (void)setFailed:(id)arg1;
- (void)setHasFailed:(bool)arg1;
- (void)setHasScoreGenerated:(bool)arg1;
- (void)setHasStartedOrChanged:(bool)arg1;
- (void)setScoreGenerated:(id)arg1;
- (void)setStartedOrChanged:(id)arg1;
- (id)startedOrChanged;
- (id)suppressMessageUnderConditions;
- (unsigned long long)whichContextevent;
- (void)writeTo:(id)arg1;

@end
