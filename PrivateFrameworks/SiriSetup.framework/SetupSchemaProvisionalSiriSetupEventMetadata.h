
@interface SetupSchemaProvisionalSiriSetupEventMetadata : SISchemaInstrumentationMessage {
    bool  _hasSetupId;
    SISchemaUUID * _setupId;
}

@property (nonatomic) bool hasSetupId;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) SISchemaUUID *setupId;

- (void).cxx_destruct;
- (void)deleteSetupId;
- (id)dictionaryRepresentation;
- (bool)hasSetupId;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setHasSetupId:(bool)arg1;
- (void)setSetupId:(id)arg1;
- (id)setupId;
- (void)writeTo:(id)arg1;

@end
