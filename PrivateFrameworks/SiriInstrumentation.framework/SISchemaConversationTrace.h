
@interface SISchemaConversationTrace : SISchemaInstrumentationMessage {
    bool  _hasPreviousTurnID;
    NSData * _previousTurnID;
}

@property (nonatomic) bool hasPreviousTurnID;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSData *previousTurnID;

- (void).cxx_destruct;
- (void)deletePreviousTurnID;
- (id)dictionaryRepresentation;
- (bool)hasPreviousTurnID;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)previousTurnID;
- (bool)readFrom:(id)arg1;
- (void)setHasPreviousTurnID:(bool)arg1;
- (void)setPreviousTurnID:(id)arg1;
- (id)suppressMessageUnderConditions;
- (void)willProduceDictionaryRepresentation:(id)arg1;
- (void)writeTo:(id)arg1;

@end
