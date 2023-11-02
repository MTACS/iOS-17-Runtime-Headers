
@interface FLOWLINKSchemaFLOWLINKActionParametersUpdated : SISchemaInstrumentationMessage {
    NSArray * _parameters;
}

@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSArray *parameters;

- (void).cxx_destruct;
- (void)addParameters:(id)arg1;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)clearParameters;
- (void)deleteParameters;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)parameters;
- (id)parametersAtIndex:(unsigned long long)arg1;
- (unsigned long long)parametersCount;
- (bool)readFrom:(id)arg1;
- (void)setParameters:(id)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
