
@interface READSchemaREADClientEventMetadata : SISchemaInstrumentationMessage {
    bool  _hasReadId;
    SISchemaUUID * _readId;
}

@property (nonatomic) bool hasReadId;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) SISchemaUUID *readId;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)deleteReadId;
- (id)dictionaryRepresentation;
- (bool)hasReadId;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (id)readId;
- (void)setHasReadId:(bool)arg1;
- (void)setReadId:(id)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
