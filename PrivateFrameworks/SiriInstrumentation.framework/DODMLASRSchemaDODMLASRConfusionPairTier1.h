
@interface DODMLASRSchemaDODMLASRConfusionPairTier1 : SISchemaInstrumentationMessage {
    NSArray * _correctedTokens;
    bool  _hasLeftContextToken;
    bool  _hasRightContextToken;
    NSString * _leftContextToken;
    NSArray * _recognizedTokens;
    NSString * _rightContextToken;
}

@property (nonatomic, copy) NSArray *correctedTokens;
@property (nonatomic) bool hasLeftContextToken;
@property (nonatomic) bool hasRightContextToken;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSString *leftContextToken;
@property (nonatomic, copy) NSArray *recognizedTokens;
@property (nonatomic, copy) NSString *rightContextToken;

- (void).cxx_destruct;
- (void)addCorrectedTokens:(id)arg1;
- (void)addRecognizedTokens:(id)arg1;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)clearCorrectedTokens;
- (void)clearRecognizedTokens;
- (id)correctedTokens;
- (id)correctedTokensAtIndex:(unsigned long long)arg1;
- (unsigned long long)correctedTokensCount;
- (void)deleteCorrectedTokens;
- (void)deleteLeftContextToken;
- (void)deleteRecognizedTokens;
- (void)deleteRightContextToken;
- (id)dictionaryRepresentation;
- (bool)hasLeftContextToken;
- (bool)hasRightContextToken;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)leftContextToken;
- (bool)readFrom:(id)arg1;
- (id)recognizedTokens;
- (id)recognizedTokensAtIndex:(unsigned long long)arg1;
- (unsigned long long)recognizedTokensCount;
- (id)rightContextToken;
- (void)setCorrectedTokens:(id)arg1;
- (void)setHasLeftContextToken:(bool)arg1;
- (void)setHasRightContextToken:(bool)arg1;
- (void)setLeftContextToken:(id)arg1;
- (void)setRecognizedTokens:(id)arg1;
- (void)setRightContextToken:(id)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
