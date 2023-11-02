
@interface DODMLASRSchemaDODMLASRChoiceInfo : SISchemaInstrumentationMessage {
    float  _acousticCost;
    float  _graphCost;
    struct { 
        unsigned int graphCost : 1; 
        unsigned int acousticCost : 1; 
    }  _has;
    NSArray * _tokens;
}

@property (nonatomic) float acousticCost;
@property (nonatomic) float graphCost;
@property (nonatomic) bool hasAcousticCost;
@property (nonatomic) bool hasGraphCost;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSArray *tokens;

- (void).cxx_destruct;
- (float)acousticCost;
- (void)addTokens:(id)arg1;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)clearTokens;
- (void)deleteAcousticCost;
- (void)deleteGraphCost;
- (void)deleteTokens;
- (id)dictionaryRepresentation;
- (float)graphCost;
- (bool)hasAcousticCost;
- (bool)hasGraphCost;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setAcousticCost:(float)arg1;
- (void)setGraphCost:(float)arg1;
- (void)setHasAcousticCost:(bool)arg1;
- (void)setHasGraphCost:(bool)arg1;
- (void)setTokens:(id)arg1;
- (id)suppressMessageUnderConditions;
- (id)tokens;
- (id)tokensAtIndex:(unsigned long long)arg1;
- (unsigned long long)tokensCount;
- (void)writeTo:(id)arg1;

@end
