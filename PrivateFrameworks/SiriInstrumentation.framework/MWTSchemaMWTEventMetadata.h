
@interface MWTSchemaMWTEventMetadata : SISchemaInstrumentationMessage {
    bool  _hasMwtId;
    SISchemaUUID * _mwtId;
}

@property (nonatomic) bool hasMwtId;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) SISchemaUUID *mwtId;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)deleteMwtId;
- (id)dictionaryRepresentation;
- (bool)hasMwtId;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)mwtId;
- (bool)readFrom:(id)arg1;
- (void)setHasMwtId:(bool)arg1;
- (void)setMwtId:(id)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
