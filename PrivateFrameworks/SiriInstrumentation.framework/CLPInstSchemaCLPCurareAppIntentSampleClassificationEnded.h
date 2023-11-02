
@interface CLPInstSchemaCLPCurareAppIntentSampleClassificationEnded : SISchemaInstrumentationMessage {
    struct { 
        unsigned int probability : 1; 
    }  _has;
    float  _probability;
}

@property (nonatomic) bool hasProbability;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) float probability;

- (void)deleteProbability;
- (id)dictionaryRepresentation;
- (bool)hasProbability;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (float)probability;
- (bool)readFrom:(id)arg1;
- (void)setHasProbability:(bool)arg1;
- (void)setProbability:(float)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
