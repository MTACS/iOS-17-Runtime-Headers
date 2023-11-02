
@interface BMPBSiriQueryResult : PBCodable <NSCopying> {
    double  _confidence;
    NSString * _domain;
    struct { 
        unsigned int confidence : 1; 
    }  _has;
    NSString * _qid;
}

@property (nonatomic) double confidence;
@property (nonatomic, retain) NSString *domain;
@property (nonatomic) bool hasConfidence;
@property (nonatomic, readonly) bool hasDomain;
@property (nonatomic, readonly) bool hasQid;
@property (nonatomic, retain) NSString *qid;

- (void).cxx_destruct;
- (double)confidence;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)domain;
- (bool)hasConfidence;
- (bool)hasDomain;
- (bool)hasQid;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)qid;
- (bool)readFrom:(id)arg1;
- (void)setConfidence:(double)arg1;
- (void)setDomain:(id)arg1;
- (void)setHasConfidence:(bool)arg1;
- (void)setQid:(id)arg1;
- (void)writeTo:(id)arg1;

@end
