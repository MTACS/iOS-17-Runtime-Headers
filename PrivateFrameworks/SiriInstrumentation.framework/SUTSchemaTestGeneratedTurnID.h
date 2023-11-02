
@interface SUTSchemaTestGeneratedTurnID : SISchemaInstrumentationMessage {
    bool  _hasTurnID;
    SISchemaUUID * _turnID;
}

@property (nonatomic) bool hasTurnID;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) SISchemaUUID *turnID;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)deleteTurnID;
- (id)dictionaryRepresentation;
- (bool)hasTurnID;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setHasTurnID:(bool)arg1;
- (void)setTurnID:(id)arg1;
- (id)suppressMessageUnderConditions;
- (id)turnID;
- (void)writeTo:(id)arg1;

@end
