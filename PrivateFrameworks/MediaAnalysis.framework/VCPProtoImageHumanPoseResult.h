
@interface VCPProtoImageHumanPoseResult : PBCodable <NSCopying, VCPProtoResultLegacyConversionProtocol> {
    VCPProtoBounds * _bounds;
    float  _confidence;
    int  _flags;
    NSMutableArray * _keypoints;
}

@property (nonatomic, retain) VCPProtoBounds *bounds;
@property (nonatomic) float confidence;
@property (nonatomic) int flags;
@property (nonatomic, retain) NSMutableArray *keypoints;

+ (Class)keypointsType;
+ (id)resultFromLegacyDictionary:(id)arg1;

- (void).cxx_destruct;
- (void)addKeypoints:(id)arg1;
- (id)bounds;
- (void)clearKeypoints;
- (float)confidence;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)exportToLegacyDictionary;
- (int)flags;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)keypoints;
- (id)keypointsAtIndex:(unsigned long long)arg1;
- (unsigned long long)keypointsCount;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setBounds:(id)arg1;
- (void)setConfidence:(float)arg1;
- (void)setFlags:(int)arg1;
- (void)setKeypoints:(id)arg1;
- (void)writeTo:(id)arg1;

@end
