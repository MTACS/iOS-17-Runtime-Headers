
@interface CNVSchemaCNVActionCandidatesGeneratedTier1 : SISchemaInstrumentationMessage {
    NSArray * _metadataTier1s;
}

@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSArray *metadataTier1s;

- (void).cxx_destruct;
- (void)addMetadataTier1:(id)arg1;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)clearMetadataTier1;
- (void)deleteMetadataTier1;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)metadataTier1AtIndex:(unsigned long long)arg1;
- (unsigned long long)metadataTier1Count;
- (id)metadataTier1s;
- (bool)readFrom:(id)arg1;
- (void)setMetadataTier1s:(id)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
