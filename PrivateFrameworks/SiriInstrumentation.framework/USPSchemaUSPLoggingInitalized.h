
@interface USPSchemaUSPLoggingInitalized : SISchemaInstrumentationMessage {
    NSArray * _sessionInfoItems;
}

@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSArray *sessionInfoItems;

- (void).cxx_destruct;
- (void)addSessionInfoItems:(id)arg1;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)clearSessionInfoItems;
- (void)deleteSessionInfoItems;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (id)sessionInfoItems;
- (id)sessionInfoItemsAtIndex:(unsigned long long)arg1;
- (unsigned long long)sessionInfoItemsCount;
- (void)setSessionInfoItems:(id)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
