
@interface IDENTITYSchemaIDENTITYIdentityRequestContext : SISchemaInstrumentationMessage {
    IDENTITYSchemaIDENTITYIdentityRequestFailed * _failed;
    bool  _hasFailed;
    unsigned long long  _whichContextevent;
}

@property (nonatomic, retain) IDENTITYSchemaIDENTITYIdentityRequestFailed *failed;
@property (nonatomic) bool hasFailed;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, readonly) unsigned long long whichContextevent;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)deleteFailed;
- (id)dictionaryRepresentation;
- (id)failed;
- (bool)hasFailed;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setFailed:(id)arg1;
- (void)setHasFailed:(bool)arg1;
- (id)suppressMessageUnderConditions;
- (unsigned long long)whichContextevent;
- (void)writeTo:(id)arg1;

@end
