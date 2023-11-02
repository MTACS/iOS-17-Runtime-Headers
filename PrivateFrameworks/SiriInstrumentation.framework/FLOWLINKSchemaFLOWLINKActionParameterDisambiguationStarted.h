
@interface FLOWLINKSchemaFLOWLINKActionParameterDisambiguationStarted : SISchemaInstrumentationMessage {
    bool  _hasParameter;
    FLOWLINKSchemaFLOWLINKActionParameter * _parameter;
}

@property (nonatomic) bool hasParameter;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) FLOWLINKSchemaFLOWLINKActionParameter *parameter;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)deleteParameter;
- (id)dictionaryRepresentation;
- (bool)hasParameter;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)parameter;
- (bool)readFrom:(id)arg1;
- (void)setHasParameter:(bool)arg1;
- (void)setParameter:(id)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
