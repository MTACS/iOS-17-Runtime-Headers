
@interface CAMSchemaCAMAggregateFeatureValue : SISchemaInstrumentationMessage {
    struct { 
        unsigned int mean : 1; 
        unsigned int variance : 1; 
        unsigned int numInteractions : 1; 
    }  _has;
    double  _mean;
    unsigned int  _numInteractions;
    double  _variance;
}

@property (nonatomic) bool hasMean;
@property (nonatomic) bool hasNumInteractions;
@property (nonatomic) bool hasVariance;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) double mean;
@property (nonatomic) unsigned int numInteractions;
@property (nonatomic) double variance;

- (void)deleteMean;
- (void)deleteNumInteractions;
- (void)deleteVariance;
- (id)dictionaryRepresentation;
- (bool)hasMean;
- (bool)hasNumInteractions;
- (bool)hasVariance;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (double)mean;
- (unsigned int)numInteractions;
- (bool)readFrom:(id)arg1;
- (void)setHasMean:(bool)arg1;
- (void)setHasNumInteractions:(bool)arg1;
- (void)setHasVariance:(bool)arg1;
- (void)setMean:(double)arg1;
- (void)setNumInteractions:(unsigned int)arg1;
- (void)setVariance:(double)arg1;
- (id)suppressMessageUnderConditions;
- (double)variance;
- (void)writeTo:(id)arg1;

@end
