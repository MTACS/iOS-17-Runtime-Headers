
@interface SISchemaTurnMTERequest : SISchemaInstrumentationMessage {
    bool  _hasMteRequestId;
    SISchemaUUID * _mteRequestId;
}

@property (nonatomic) bool hasMteRequestId;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) SISchemaUUID *mteRequestId;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)deleteMteRequestId;
- (id)dictionaryRepresentation;
- (bool)hasMteRequestId;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)mteRequestId;
- (bool)readFrom:(id)arg1;
- (void)setHasMteRequestId:(bool)arg1;
- (void)setMteRequestId:(id)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
