
@interface NLXSchemaCDMUsoGraphTier1 : SISchemaInstrumentationMessage {
    bool  _hasUsoGraphTier1;
    USOSchemaUSOGraphTier1 * _usoGraphTier1;
}

@property (nonatomic) bool hasUsoGraphTier1;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) USOSchemaUSOGraphTier1 *usoGraphTier1;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)deleteUsoGraphTier1;
- (id)dictionaryRepresentation;
- (bool)hasUsoGraphTier1;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setHasUsoGraphTier1:(bool)arg1;
- (void)setUsoGraphTier1:(id)arg1;
- (id)suppressMessageUnderConditions;
- (id)usoGraphTier1;
- (void)writeTo:(id)arg1;

@end
