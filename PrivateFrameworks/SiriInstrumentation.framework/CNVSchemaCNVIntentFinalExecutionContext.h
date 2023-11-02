
@interface CNVSchemaCNVIntentFinalExecutionContext : SISchemaInstrumentationMessage {
    CNVSchemaCNVIntentFinalExecutionCancelled * _cancelled;
    CNVSchemaCNVIntentFinalExecutionEnded * _ended;
    CNVSchemaCNVIntentFinalExecutionFailed * _failed;
    bool  _hasCancelled;
    bool  _hasEnded;
    bool  _hasFailed;
    bool  _hasHypothesisId;
    bool  _hasStartedOrChanged;
    SISchemaUUID * _hypothesisId;
    CNVSchemaCNVIntentFinalExecutionStarted * _startedOrChanged;
    unsigned long long  _whichContextevent;
}

@property (nonatomic, retain) CNVSchemaCNVIntentFinalExecutionCancelled *cancelled;
@property (nonatomic, retain) CNVSchemaCNVIntentFinalExecutionEnded *ended;
@property (nonatomic, retain) CNVSchemaCNVIntentFinalExecutionFailed *failed;
@property (nonatomic) bool hasCancelled;
@property (nonatomic) bool hasEnded;
@property (nonatomic) bool hasFailed;
@property (nonatomic) bool hasHypothesisId;
@property (nonatomic) bool hasStartedOrChanged;
@property (nonatomic, retain) SISchemaUUID *hypothesisId;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) CNVSchemaCNVIntentFinalExecutionStarted *startedOrChanged;
@property (nonatomic, readonly) unsigned long long whichContextevent;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (id)cancelled;
- (void)deleteCancelled;
- (void)deleteEnded;
- (void)deleteFailed;
- (void)deleteHypothesisId;
- (void)deleteStartedOrChanged;
- (id)dictionaryRepresentation;
- (id)ended;
- (id)failed;
- (bool)hasCancelled;
- (bool)hasEnded;
- (bool)hasFailed;
- (bool)hasHypothesisId;
- (bool)hasStartedOrChanged;
- (unsigned long long)hash;
- (id)hypothesisId;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setCancelled:(id)arg1;
- (void)setEnded:(id)arg1;
- (void)setFailed:(id)arg1;
- (void)setHasCancelled:(bool)arg1;
- (void)setHasEnded:(bool)arg1;
- (void)setHasFailed:(bool)arg1;
- (void)setHasHypothesisId:(bool)arg1;
- (void)setHasStartedOrChanged:(bool)arg1;
- (void)setHypothesisId:(id)arg1;
- (void)setStartedOrChanged:(id)arg1;
- (id)startedOrChanged;
- (id)suppressMessageUnderConditions;
- (unsigned long long)whichContextevent;
- (void)writeTo:(id)arg1;

@end
