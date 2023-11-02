
@interface CNVSchemaCNVActionCandidatesGenerated : SISchemaInstrumentationMessage {
    NSArray * _actionCandidates;
}

@property (nonatomic, copy) NSArray *actionCandidates;
@property (nonatomic, readonly) NSData *jsonData;

- (void).cxx_destruct;
- (id)actionCandidates;
- (id)actionCandidatesAtIndex:(unsigned long long)arg1;
- (unsigned long long)actionCandidatesCount;
- (void)addActionCandidates:(id)arg1;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)clearActionCandidates;
- (void)deleteActionCandidates;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setActionCandidates:(id)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
