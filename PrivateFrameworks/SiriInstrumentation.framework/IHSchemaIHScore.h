
@interface IHSchemaIHScore : SISchemaInstrumentationMessage {
    struct { 
        unsigned int score : 1; 
        unsigned int upperBoundary : 1; 
        unsigned int lowerBoundary : 1; 
    }  _has;
    float  _lowerBoundary;
    float  _score;
    float  _upperBoundary;
}

@property (nonatomic) bool hasLowerBoundary;
@property (nonatomic) bool hasScore;
@property (nonatomic) bool hasUpperBoundary;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) float lowerBoundary;
@property (nonatomic) float score;
@property (nonatomic) float upperBoundary;

- (void)deleteLowerBoundary;
- (void)deleteScore;
- (void)deleteUpperBoundary;
- (id)dictionaryRepresentation;
- (bool)hasLowerBoundary;
- (bool)hasScore;
- (bool)hasUpperBoundary;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (float)lowerBoundary;
- (bool)readFrom:(id)arg1;
- (float)score;
- (void)setHasLowerBoundary:(bool)arg1;
- (void)setHasScore:(bool)arg1;
- (void)setHasUpperBoundary:(bool)arg1;
- (void)setLowerBoundary:(float)arg1;
- (void)setScore:(float)arg1;
- (void)setUpperBoundary:(float)arg1;
- (id)suppressMessageUnderConditions;
- (float)upperBoundary;
- (void)writeTo:(id)arg1;

@end
