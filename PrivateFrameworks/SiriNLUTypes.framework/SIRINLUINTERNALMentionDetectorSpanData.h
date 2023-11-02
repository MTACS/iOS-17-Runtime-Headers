
@interface SIRINLUINTERNALMentionDetectorSpanData : PBCodable <NSCopying> {
    struct { 
        unsigned int score : 1; 
    }  _has;
    double  _score;
}

@property (nonatomic) bool hasScore;
@property (nonatomic) double score;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasScore;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (double)score;
- (void)setHasScore:(bool)arg1;
- (void)setScore:(double)arg1;
- (void)writeTo:(id)arg1;

@end
