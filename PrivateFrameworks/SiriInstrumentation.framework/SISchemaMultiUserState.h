
@interface SISchemaMultiUserState : SISchemaInstrumentationMessage {
    NSArray * _enrolledUsers;
}

@property (nonatomic, copy) NSArray *enrolledUsers;
@property (nonatomic, readonly) NSData *jsonData;

- (void).cxx_destruct;
- (void)addEnrolledUsers:(id)arg1;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)clearEnrolledUsers;
- (void)deleteEnrolledUsers;
- (id)dictionaryRepresentation;
- (id)enrolledUsers;
- (id)enrolledUsersAtIndex:(unsigned long long)arg1;
- (unsigned long long)enrolledUsersCount;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setEnrolledUsers:(id)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
