
@interface SUTSchemaTestAssociatedSchemaIdentifier : SISchemaInstrumentationMessage {
    bool  _hasRequestId;
    bool  _hasTurnID;
    SUTSchemaTestGeneratedRequestId * _requestId;
    SUTSchemaTestGeneratedTurnID * _turnID;
    unsigned long long  _whichIdentifier_Type;
}

@property (nonatomic) bool hasRequestId;
@property (nonatomic) bool hasTurnID;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) SUTSchemaTestGeneratedRequestId *requestId;
@property (nonatomic, retain) SUTSchemaTestGeneratedTurnID *turnID;
@property (nonatomic, readonly) unsigned long long whichIdentifier_Type;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)deleteRequestId;
- (void)deleteTurnID;
- (id)dictionaryRepresentation;
- (bool)hasRequestId;
- (bool)hasTurnID;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (id)requestId;
- (void)setHasRequestId:(bool)arg1;
- (void)setHasTurnID:(bool)arg1;
- (void)setRequestId:(id)arg1;
- (void)setTurnID:(id)arg1;
- (id)suppressMessageUnderConditions;
- (id)turnID;
- (unsigned long long)whichIdentifier_Type;
- (void)writeTo:(id)arg1;

@end
