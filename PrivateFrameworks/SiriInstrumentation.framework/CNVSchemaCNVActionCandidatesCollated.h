
@interface CNVSchemaCNVActionCandidatesCollated : SISchemaInstrumentationMessage {
    NSArray * _collatedActionCandidates;
}

@property (nonatomic, copy) NSArray *collatedActionCandidates;
@property (nonatomic, readonly) NSData *jsonData;

- (void).cxx_destruct;
- (void)addCollatedActionCandidates:(id)arg1;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)clearCollatedActionCandidates;
- (id)collatedActionCandidates;
- (id)collatedActionCandidatesAtIndex:(unsigned long long)arg1;
- (unsigned long long)collatedActionCandidatesCount;
- (void)deleteCollatedActionCandidates;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setCollatedActionCandidates:(id)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
