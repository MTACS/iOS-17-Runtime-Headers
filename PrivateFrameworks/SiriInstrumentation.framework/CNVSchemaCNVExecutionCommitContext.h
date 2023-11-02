
@interface CNVSchemaCNVExecutionCommitContext : SISchemaInstrumentationMessage {
    SISchemaUUID * _contextId;
    CNVSchemaCNVExecutionCommitEnded * _ended;
    bool  _hasContextId;
    bool  _hasEnded;
    bool  _hasHypothesisId;
    bool  _hasStartedOrChanged;
    SISchemaUUID * _hypothesisId;
    CNVSchemaCNVExecutionCommitStarted * _startedOrChanged;
    unsigned long long  _whichContextevent;
}

@property (nonatomic, retain) SISchemaUUID *contextId;
@property (nonatomic, retain) CNVSchemaCNVExecutionCommitEnded *ended;
@property (nonatomic) bool hasContextId;
@property (nonatomic) bool hasEnded;
@property (nonatomic) bool hasHypothesisId;
@property (nonatomic) bool hasStartedOrChanged;
@property (nonatomic, retain) SISchemaUUID *hypothesisId;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) CNVSchemaCNVExecutionCommitStarted *startedOrChanged;
@property (nonatomic, readonly) unsigned long long whichContextevent;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (id)contextId;
- (void)deleteContextId;
- (void)deleteEnded;
- (void)deleteHypothesisId;
- (void)deleteStartedOrChanged;
- (id)dictionaryRepresentation;
- (id)ended;
- (bool)hasContextId;
- (bool)hasEnded;
- (bool)hasHypothesisId;
- (bool)hasStartedOrChanged;
- (unsigned long long)hash;
- (id)hypothesisId;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setContextId:(id)arg1;
- (void)setEnded:(id)arg1;
- (void)setHasContextId:(bool)arg1;
- (void)setHasEnded:(bool)arg1;
- (void)setHasHypothesisId:(bool)arg1;
- (void)setHasStartedOrChanged:(bool)arg1;
- (void)setHypothesisId:(id)arg1;
- (void)setStartedOrChanged:(id)arg1;
- (id)startedOrChanged;
- (id)suppressMessageUnderConditions;
- (unsigned long long)whichContextevent;
- (void)writeTo:(id)arg1;

@end
