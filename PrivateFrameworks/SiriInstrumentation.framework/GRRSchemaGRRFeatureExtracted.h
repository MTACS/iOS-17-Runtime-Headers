
@interface GRRSchemaGRRFeatureExtracted : SISchemaInstrumentationMessage {
    NSArray * _featureNames;
    NSArray * _features;
    bool  _hasSource;
    GRRSchemaGRRSource * _source;
}

@property (nonatomic, copy) NSArray *featureNames;
@property (nonatomic, copy) NSArray *features;
@property (nonatomic) bool hasSource;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) GRRSchemaGRRSource *source;

- (void).cxx_destruct;
- (void)addFeatureNames:(id)arg1;
- (void)addFeatures:(id)arg1;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)clearFeatureNames;
- (void)clearFeatures;
- (void)deleteFeatureNames;
- (void)deleteFeatures;
- (void)deleteSource;
- (id)dictionaryRepresentation;
- (id)featureNames;
- (id)featureNamesAtIndex:(unsigned long long)arg1;
- (unsigned long long)featureNamesCount;
- (id)features;
- (id)featuresAtIndex:(unsigned long long)arg1;
- (unsigned long long)featuresCount;
- (bool)hasSource;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setFeatureNames:(id)arg1;
- (void)setFeatures:(id)arg1;
- (void)setHasSource:(bool)arg1;
- (void)setSource:(id)arg1;
- (id)source;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
