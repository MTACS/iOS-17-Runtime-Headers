
@interface NTPBTagRecommendation : PBCodable <NSCopying> {
    struct { 
        unsigned int score : 1; 
    }  _has;
    double  _score;
    NSString * _tagId;
}

@property (nonatomic) bool hasScore;
@property (nonatomic, readonly) bool hasTagId;
@property (nonatomic) double score;
@property (nonatomic, retain) NSString *tagId;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasScore;
- (bool)hasTagId;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (double)score;
- (void)setHasScore:(bool)arg1;
- (void)setScore:(double)arg1;
- (void)setTagId:(id)arg1;
- (id)tagId;
- (void)writeTo:(id)arg1;

@end
