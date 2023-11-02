
@interface FLOWLINKSchemaFLOWLinkActionStarted : SISchemaInstrumentationMessage {
    FLOWLINKSchemaFLOWLINKAction * _currentAction;
    bool  _hasCurrentAction;
}

@property (nonatomic, retain) FLOWLINKSchemaFLOWLINKAction *currentAction;
@property (nonatomic) bool hasCurrentAction;
@property (nonatomic, readonly) NSData *jsonData;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (id)currentAction;
- (void)deleteCurrentAction;
- (id)dictionaryRepresentation;
- (bool)hasCurrentAction;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setCurrentAction:(id)arg1;
- (void)setHasCurrentAction:(bool)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
