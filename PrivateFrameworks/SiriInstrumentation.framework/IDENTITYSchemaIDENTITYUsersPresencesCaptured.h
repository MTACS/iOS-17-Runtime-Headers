
@interface IDENTITYSchemaIDENTITYUsersPresencesCaptured : SISchemaInstrumentationMessage {
    NSArray * _usersPresences;
}

@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSArray *usersPresences;

- (void).cxx_destruct;
- (void)addUsersPresences:(id)arg1;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)clearUsersPresences;
- (void)deleteUsersPresences;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setUsersPresences:(id)arg1;
- (id)suppressMessageUnderConditions;
- (id)usersPresences;
- (id)usersPresencesAtIndex:(unsigned long long)arg1;
- (unsigned long long)usersPresencesCount;
- (void)writeTo:(id)arg1;

@end
