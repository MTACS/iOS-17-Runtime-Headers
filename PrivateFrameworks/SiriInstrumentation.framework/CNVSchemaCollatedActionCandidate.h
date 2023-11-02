
@interface CNVSchemaCollatedActionCandidate : SISchemaInstrumentationMessage {
    NSArray * _alternativeActionCandidateIds;
    bool  _hasPrimaryActionCandidateId;
    SISchemaUUID * _primaryActionCandidateId;
}

@property (nonatomic, copy) NSArray *alternativeActionCandidateIds;
@property (nonatomic) bool hasPrimaryActionCandidateId;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) SISchemaUUID *primaryActionCandidateId;

- (void).cxx_destruct;
- (void)addAlternativeActionCandidateIds:(id)arg1;
- (id)alternativeActionCandidateIds;
- (id)alternativeActionCandidateIdsAtIndex:(unsigned long long)arg1;
- (unsigned long long)alternativeActionCandidateIdsCount;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)clearAlternativeActionCandidateIds;
- (void)deleteAlternativeActionCandidateIds;
- (void)deletePrimaryActionCandidateId;
- (id)dictionaryRepresentation;
- (bool)hasPrimaryActionCandidateId;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)primaryActionCandidateId;
- (bool)readFrom:(id)arg1;
- (void)setAlternativeActionCandidateIds:(id)arg1;
- (void)setHasPrimaryActionCandidateId:(bool)arg1;
- (void)setPrimaryActionCandidateId:(id)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
