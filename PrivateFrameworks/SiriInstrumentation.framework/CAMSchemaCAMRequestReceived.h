
@interface CAMSchemaCAMRequestReceived : SISchemaInstrumentationMessage {
    NSArray * _features;
}

@property (nonatomic, copy) NSArray *features;
@property (nonatomic, readonly) NSData *jsonData;

- (void).cxx_destruct;
- (void)addFeature:(id)arg1;
- (void)clearFeature;
- (void)deleteFeature;
- (id)dictionaryRepresentation;
- (id)featureAtIndex:(unsigned long long)arg1;
- (unsigned long long)featureCount;
- (id)features;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setFeatures:(id)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
