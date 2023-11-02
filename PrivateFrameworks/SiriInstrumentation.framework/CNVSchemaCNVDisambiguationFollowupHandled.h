
@interface CNVSchemaCNVDisambiguationFollowupHandled : SISchemaInstrumentationMessage {
    SISchemaUUID * _actionCandidateId;
    bool  _hasActionCandidateId;
}

@property (nonatomic, retain) SISchemaUUID *actionCandidateId;
@property (nonatomic) bool hasActionCandidateId;
@property (nonatomic, readonly) NSData *jsonData;

- (void).cxx_destruct;
- (id)actionCandidateId;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)deleteActionCandidateId;
- (id)dictionaryRepresentation;
- (bool)hasActionCandidateId;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setActionCandidateId:(id)arg1;
- (void)setHasActionCandidateId:(bool)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
