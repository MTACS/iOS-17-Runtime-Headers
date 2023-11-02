
@interface VCPProtoVideoKeyFrame : PBCodable <NSCopying> {
    float  _curationScore;
    VCPProtoTime * _timestamp;
}

@property (nonatomic) float curationScore;
@property (nonatomic, retain) VCPProtoTime *timestamp;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (float)curationScore;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setCurationScore:(float)arg1;
- (void)setTimestamp:(id)arg1;
- (id)timestamp;
- (void)writeTo:(id)arg1;

@end
