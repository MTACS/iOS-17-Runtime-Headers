
@interface NTPBCohortMembership : PBCodable <NSCopying> {
    struct { 
        unsigned int score : 1; 
    }  _has;
    double  _score;
    NSString * _tagID;
}

@property (nonatomic) bool hasScore;
@property (nonatomic, readonly) bool hasTagID;
@property (nonatomic) double score;
@property (nonatomic, retain) NSString *tagID;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasScore;
- (bool)hasTagID;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (double)score;
- (void)setHasScore:(bool)arg1;
- (void)setScore:(double)arg1;
- (void)setTagID:(id)arg1;
- (id)tagID;
- (void)writeTo:(id)arg1;

@end
