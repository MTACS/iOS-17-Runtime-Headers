
@interface ACTVSchemaACTVTurnActivated : SISchemaInstrumentationMessage {
    bool  _hasTurnId;
    SISchemaUUID * _turnId;
}

@property (nonatomic) bool hasTurnId;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) SISchemaUUID *turnId;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)deleteTurnId;
- (id)dictionaryRepresentation;
- (bool)hasTurnId;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setHasTurnId:(bool)arg1;
- (void)setTurnId:(id)arg1;
- (id)suppressMessageUnderConditions;
- (id)turnId;
- (void)writeTo:(id)arg1;

@end
