
@interface MXLatnnMitigatorResult : PBCodable <NSCopying> {
    struct { 
        unsigned int score : 1; 
        unsigned int threshold : 1; 
        unsigned int processed : 1; 
    }  _has;
    bool  _processed;
    double  _score;
    double  _threshold;
    NSString * _version;
}

@property (nonatomic) bool hasProcessed;
@property (nonatomic) bool hasScore;
@property (nonatomic) bool hasThreshold;
@property (nonatomic, readonly) bool hasVersion;
@property (nonatomic) bool processed;
@property (nonatomic) double score;
@property (nonatomic) double threshold;
@property (nonatomic, retain) NSString *version;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasProcessed;
- (bool)hasScore;
- (bool)hasThreshold;
- (bool)hasVersion;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)processed;
- (bool)readFrom:(id)arg1;
- (double)score;
- (void)setHasProcessed:(bool)arg1;
- (void)setHasScore:(bool)arg1;
- (void)setHasThreshold:(bool)arg1;
- (void)setProcessed:(bool)arg1;
- (void)setScore:(double)arg1;
- (void)setThreshold:(double)arg1;
- (void)setVersion:(id)arg1;
- (double)threshold;
- (id)version;
- (void)writeTo:(id)arg1;

@end
