
@interface GRPSchemaGroupedMessagesGrouping : SISchemaTopLevelUnionType {
    SISchemaUUID * _clockIdentifier;
    bool  _hasClockIdentifier;
}

@property (nonatomic, retain) SISchemaUUID *clockIdentifier;
@property (nonatomic) bool hasClockIdentifier;
@property (nonatomic, readonly) NSData *jsonData;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (id)clockIdentifier;
- (void)deleteClockIdentifier;
- (id)dictionaryRepresentation;
- (int)getAnyEventType;
- (bool)hasClockIdentifier;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)qualifiedMessageName;
- (bool)readFrom:(id)arg1;
- (void)setClockIdentifier:(id)arg1;
- (void)setHasClockIdentifier:(bool)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
