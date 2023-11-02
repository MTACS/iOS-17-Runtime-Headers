
@interface ASRSchemaASRInterpretation : SISchemaInstrumentationMessage {
    NSArray * _tokens;
}

@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSArray *tokens;

- (void).cxx_destruct;
- (void)addTokens:(id)arg1;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)clearTokens;
- (void)deleteTokens;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setTokens:(id)arg1;
- (id)suppressMessageUnderConditions;
- (id)tokens;
- (id)tokensAtIndex:(unsigned long long)arg1;
- (unsigned long long)tokensCount;
- (void)writeTo:(id)arg1;

@end
