
@interface PETSchemaPETDistribution : SISchemaInstrumentationMessage {
    struct { 
        unsigned int min : 1; 
        unsigned int max : 1; 
        unsigned int mean : 1; 
        unsigned int variance : 1; 
    }  _has;
    double  _max;
    double  _mean;
    double  _min;
    double  _variance;
}

@property (nonatomic) bool hasMax;
@property (nonatomic) bool hasMean;
@property (nonatomic) bool hasMin;
@property (nonatomic) bool hasVariance;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) double max;
@property (nonatomic) double mean;
@property (nonatomic) double min;
@property (nonatomic) double variance;

- (void)deleteMax;
- (void)deleteMean;
- (void)deleteMin;
- (void)deleteVariance;
- (id)dictionaryRepresentation;
- (bool)hasMax;
- (bool)hasMean;
- (bool)hasMin;
- (bool)hasVariance;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (double)max;
- (double)mean;
- (double)min;
- (bool)readFrom:(id)arg1;
- (void)setHasMax:(bool)arg1;
- (void)setHasMean:(bool)arg1;
- (void)setHasMin:(bool)arg1;
- (void)setHasVariance:(bool)arg1;
- (void)setMax:(double)arg1;
- (void)setMean:(double)arg1;
- (void)setMin:(double)arg1;
- (void)setVariance:(double)arg1;
- (id)suppressMessageUnderConditions;
- (double)variance;
- (void)writeTo:(id)arg1;

@end
