
@interface SUTSchemaTestExecutionMetadata : SISchemaInstrumentationMessage {
    SISchemaUUID * _fingerprint;
    bool  _hasFingerprint;
}

@property (nonatomic, retain) SISchemaUUID *fingerprint;
@property (nonatomic) bool hasFingerprint;
@property (nonatomic, readonly) NSData *jsonData;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)deleteFingerprint;
- (id)dictionaryRepresentation;
- (id)fingerprint;
- (bool)hasFingerprint;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setFingerprint:(id)arg1;
- (void)setHasFingerprint:(bool)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
