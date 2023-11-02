
@interface GRRSchemaGRRFeatureExtractionStarted : SISchemaInstrumentationMessage {
    bool  _hasSource;
    GRRSchemaGRRSource * _source;
}

@property (nonatomic) bool hasSource;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) GRRSchemaGRRSource *source;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)deleteSource;
- (id)dictionaryRepresentation;
- (bool)hasSource;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setHasSource:(bool)arg1;
- (void)setSource:(id)arg1;
- (id)source;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
