
@interface FLOWLINKSchemaFLOWLINKActionConversionEnded : SISchemaInstrumentationMessage {
    FLOWLINKSchemaFLOWLINKAction * _action;
    bool  _hasAction;
}

@property (nonatomic, retain) FLOWLINKSchemaFLOWLINKAction *action;
@property (nonatomic) bool hasAction;
@property (nonatomic, readonly) NSData *jsonData;

- (void).cxx_destruct;
- (id)action;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)deleteAction;
- (id)dictionaryRepresentation;
- (bool)hasAction;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setAction:(id)arg1;
- (void)setHasAction:(bool)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
