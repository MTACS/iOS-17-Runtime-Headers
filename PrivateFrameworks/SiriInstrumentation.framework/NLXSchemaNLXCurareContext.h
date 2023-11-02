
@interface NLXSchemaNLXCurareContext : SISchemaInstrumentationMessage {
    SISchemaUUID * _curareId;
    bool  _hasCurareId;
}

@property (nonatomic, retain) SISchemaUUID *curareId;
@property (nonatomic) bool hasCurareId;
@property (nonatomic, readonly) NSData *jsonData;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (id)curareId;
- (void)deleteCurareId;
- (id)dictionaryRepresentation;
- (bool)hasCurareId;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setCurareId:(id)arg1;
- (void)setHasCurareId:(bool)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
