
@interface ATXNotificationsPBContentFeatures : PBCodable <NSCopying> {
    struct { 
        unsigned int maxEntityScore : 1; 
        unsigned int sumCount : 1; 
        unsigned int titleMatch : 1; 
        unsigned int uniqueCount : 1; 
    }  _has;
    float  _maxEntityScore;
    float  _sumCount;
    float  _titleMatch;
    float  _uniqueCount;
}

@property (nonatomic) bool hasMaxEntityScore;
@property (nonatomic) bool hasSumCount;
@property (nonatomic) bool hasTitleMatch;
@property (nonatomic) bool hasUniqueCount;
@property (nonatomic) float maxEntityScore;
@property (nonatomic) float sumCount;
@property (nonatomic) float titleMatch;
@property (nonatomic) float uniqueCount;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasMaxEntityScore;
- (bool)hasSumCount;
- (bool)hasTitleMatch;
- (bool)hasUniqueCount;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (float)maxEntityScore;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasMaxEntityScore:(bool)arg1;
- (void)setHasSumCount:(bool)arg1;
- (void)setHasTitleMatch:(bool)arg1;
- (void)setHasUniqueCount:(bool)arg1;
- (void)setMaxEntityScore:(float)arg1;
- (void)setSumCount:(float)arg1;
- (void)setTitleMatch:(float)arg1;
- (void)setUniqueCount:(float)arg1;
- (float)sumCount;
- (float)titleMatch;
- (float)uniqueCount;
- (void)writeTo:(id)arg1;

@end
