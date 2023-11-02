
@interface TTMSchemaTTMRequestEnded : SISchemaInstrumentationMessage {
    NSArray * _results;
}

@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSArray *results;

- (void).cxx_destruct;
- (void)addResults:(id)arg1;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)clearResults;
- (void)deleteResults;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (id)results;
- (id)resultsAtIndex:(unsigned long long)arg1;
- (unsigned long long)resultsCount;
- (void)setResults:(id)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
