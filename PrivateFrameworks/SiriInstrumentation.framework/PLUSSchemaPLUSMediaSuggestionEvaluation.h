
@interface PLUSSchemaPLUSMediaSuggestionEvaluation : SISchemaInstrumentationMessage {
    NSArray * _entitySummaries;
    bool  _hasInferredMediaEntityAdamId;
    bool  _hasPommesSelectedMediaEntityAdamId;
    NSString * _inferredMediaEntityAdamId;
    NSArray * _pommesAlternativeEntityIds;
    NSString * _pommesSelectedMediaEntityAdamId;
}

@property (nonatomic, copy) NSArray *entitySummaries;
@property (nonatomic) bool hasInferredMediaEntityAdamId;
@property (nonatomic) bool hasPommesSelectedMediaEntityAdamId;
@property (nonatomic, copy) NSString *inferredMediaEntityAdamId;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSArray *pommesAlternativeEntityIds;
@property (nonatomic, copy) NSString *pommesSelectedMediaEntityAdamId;

- (void).cxx_destruct;
- (void)addEntitySummaries:(id)arg1;
- (void)addPommesAlternativeEntityIds:(id)arg1;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)clearEntitySummaries;
- (void)clearPommesAlternativeEntityIds;
- (void)deleteEntitySummaries;
- (void)deleteInferredMediaEntityAdamId;
- (void)deletePommesAlternativeEntityIds;
- (void)deletePommesSelectedMediaEntityAdamId;
- (id)dictionaryRepresentation;
- (id)entitySummaries;
- (id)entitySummariesAtIndex:(unsigned long long)arg1;
- (unsigned long long)entitySummariesCount;
- (bool)hasInferredMediaEntityAdamId;
- (bool)hasPommesSelectedMediaEntityAdamId;
- (unsigned long long)hash;
- (id)inferredMediaEntityAdamId;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)pommesAlternativeEntityIds;
- (id)pommesAlternativeEntityIdsAtIndex:(unsigned long long)arg1;
- (unsigned long long)pommesAlternativeEntityIdsCount;
- (id)pommesSelectedMediaEntityAdamId;
- (bool)readFrom:(id)arg1;
- (void)setEntitySummaries:(id)arg1;
- (void)setHasInferredMediaEntityAdamId:(bool)arg1;
- (void)setHasPommesSelectedMediaEntityAdamId:(bool)arg1;
- (void)setInferredMediaEntityAdamId:(id)arg1;
- (void)setPommesAlternativeEntityIds:(id)arg1;
- (void)setPommesSelectedMediaEntityAdamId:(id)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
