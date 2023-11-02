
@interface VCPProtoKeypoint : PBCodable <NSCopying> {
    float  _confidence;
    float  _x;
    float  _y;
}

@property (nonatomic) float confidence;
@property (nonatomic) float x;
@property (nonatomic) float y;

- (float)confidence;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setConfidence:(float)arg1;
- (void)setX:(float)arg1;
- (void)setY:(float)arg1;
- (void)writeTo:(id)arg1;
- (float)x;
- (float)y;

@end
