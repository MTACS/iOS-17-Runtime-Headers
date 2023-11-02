
@interface MHSchemaMHUnintendedResponseSuppressionEnded : SISchemaInstrumentationMessage {
    struct { 
        unsigned int score : 1; 
        unsigned int threshold : 1; 
    }  _has;
    bool  _hasModelVersion;
    NSString * _modelVersion;
    float  _score;
    float  _threshold;
}

@property (nonatomic) bool hasModelVersion;
@property (nonatomic) bool hasScore;
@property (nonatomic) bool hasThreshold;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSString *modelVersion;
@property (nonatomic) float score;
@property (nonatomic) float threshold;

- (void).cxx_destruct;
- (void)deleteModelVersion;
- (void)deleteScore;
- (void)deleteThreshold;
- (id)dictionaryRepresentation;
- (bool)hasModelVersion;
- (bool)hasScore;
- (bool)hasThreshold;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)modelVersion;
- (bool)readFrom:(id)arg1;
- (float)score;
- (void)setHasModelVersion:(bool)arg1;
- (void)setHasScore:(bool)arg1;
- (void)setHasThreshold:(bool)arg1;
- (void)setModelVersion:(id)arg1;
- (void)setScore:(float)arg1;
- (void)setThreshold:(float)arg1;
- (id)suppressMessageUnderConditions;
- (float)threshold;
- (void)writeTo:(id)arg1;

@end
