
@interface NLXSchemaPLUMSpanData : SISchemaInstrumentationMessage {
    struct { 
        unsigned int score : 1; 
    }  _has;
    double  _score;
}

@property (nonatomic) bool hasScore;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) double score;

- (void)deleteScore;
- (id)dictionaryRepresentation;
- (bool)hasScore;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (double)score;
- (void)setHasScore:(bool)arg1;
- (void)setScore:(double)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
