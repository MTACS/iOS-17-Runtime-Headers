
@interface ASRSchemaASRPhrase : SISchemaInstrumentationMessage {
    NSArray * _interpretations;
}

@property (nonatomic, copy) NSArray *interpretations;
@property (nonatomic, readonly) NSData *jsonData;

- (void).cxx_destruct;
- (void)addInterpretations:(id)arg1;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)clearInterpretations;
- (void)deleteInterpretations;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (id)interpretations;
- (id)interpretationsAtIndex:(unsigned long long)arg1;
- (unsigned long long)interpretationsCount;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setInterpretations:(id)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
