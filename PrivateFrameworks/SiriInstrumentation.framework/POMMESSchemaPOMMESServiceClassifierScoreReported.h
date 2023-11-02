
@interface POMMESSchemaPOMMESServiceClassifierScoreReported : SISchemaInstrumentationMessage {
    int  _classifierLabel;
    struct { 
        unsigned int score : 1; 
        unsigned int classifierLabel : 1; 
    }  _has;
    double  _score;
}

@property (nonatomic) int classifierLabel;
@property (nonatomic) bool hasClassifierLabel;
@property (nonatomic) bool hasScore;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) double score;

- (int)classifierLabel;
- (void)deleteClassifierLabel;
- (void)deleteScore;
- (id)dictionaryRepresentation;
- (bool)hasClassifierLabel;
- (bool)hasScore;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (double)score;
- (void)setClassifierLabel:(int)arg1;
- (void)setHasClassifierLabel:(bool)arg1;
- (void)setHasScore:(bool)arg1;
- (void)setScore:(double)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
