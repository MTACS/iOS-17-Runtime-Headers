
@interface NLXSchemaCDMTurnInput : SISchemaInstrumentationMessage {
    NSArray * _asrHypothesisIds;
    struct { 
        unsigned int isTapToEdit : 1; 
    }  _has;
    bool  _hasTurnContext;
    bool  _isTapToEdit;
    NLXSchemaCDMTurnContext * _turnContext;
}

@property (nonatomic, copy) NSArray *asrHypothesisIds;
@property (nonatomic) bool hasIsTapToEdit;
@property (nonatomic) bool hasTurnContext;
@property (nonatomic) bool isTapToEdit;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) NLXSchemaCDMTurnContext *turnContext;

- (void).cxx_destruct;
- (void)addAsrHypothesisIds:(id)arg1;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (id)asrHypothesisIds;
- (id)asrHypothesisIdsAtIndex:(unsigned long long)arg1;
- (unsigned long long)asrHypothesisIdsCount;
- (void)clearAsrHypothesisIds;
- (void)deleteAsrHypothesisIds;
- (void)deleteIsTapToEdit;
- (void)deleteTurnContext;
- (id)dictionaryRepresentation;
- (bool)hasIsTapToEdit;
- (bool)hasTurnContext;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isTapToEdit;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setAsrHypothesisIds:(id)arg1;
- (void)setHasIsTapToEdit:(bool)arg1;
- (void)setHasTurnContext:(bool)arg1;
- (void)setIsTapToEdit:(bool)arg1;
- (void)setTurnContext:(id)arg1;
- (id)suppressMessageUnderConditions;
- (id)turnContext;
- (void)writeTo:(id)arg1;

@end
