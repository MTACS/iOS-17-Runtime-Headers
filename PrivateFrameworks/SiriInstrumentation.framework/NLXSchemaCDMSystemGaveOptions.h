
@interface NLXSchemaCDMSystemGaveOptions : SISchemaInstrumentationMessage {
    NSArray * _choices;
}

@property (nonatomic, copy) NSArray *choices;
@property (nonatomic, readonly) NSData *jsonData;

- (void).cxx_destruct;
- (void)addChoices:(id)arg1;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (id)choices;
- (id)choicesAtIndex:(unsigned long long)arg1;
- (unsigned long long)choicesCount;
- (void)clearChoices;
- (void)deleteChoices;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setChoices:(id)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
