
@interface ASRSchemaASRConfusionPairToken : SISchemaInstrumentationMessage {
    NSArray * _correctedTokens;
    struct { 
        unsigned int recognizedTokensStartIndex : 1; 
    }  _has;
    NSArray * _recognizedTokens;
    int  _recognizedTokensStartIndex;
}

@property (nonatomic, copy) NSArray *correctedTokens;
@property (nonatomic) bool hasRecognizedTokensStartIndex;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSArray *recognizedTokens;
@property (nonatomic) int recognizedTokensStartIndex;

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
- (void)deleteRecognizedTokens;
- (void)deleteRecognizedTokensStartIndex;
- (id)dictionaryRepresentation;
- (bool)hasRecognizedTokensStartIndex;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (id)recognizedTokens;
- (id)recognizedTokensAtIndex:(unsigned long long)arg1;
- (unsigned long long)recognizedTokensCount;
- (int)recognizedTokensStartIndex;
- (void)setCorrectedTokens:(id)arg1;
- (void)setHasRecognizedTokensStartIndex:(bool)arg1;
- (void)setRecognizedTokens:(id)arg1;
- (void)setRecognizedTokensStartIndex:(int)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
