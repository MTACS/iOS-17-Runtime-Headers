
@interface VCPProtoLivePhotoKeyFrameFaceResult : PBCodable <NSCopying, VCPProtoResultLegacyConversionProtocol> {
    VCPProtoBounds * _faceBounds;
    float  _faceQuality;
}

@property (nonatomic, retain) VCPProtoBounds *faceBounds;
@property (nonatomic) float faceQuality;

+ (id)resultFromLegacyDictionary:(id)arg1;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)exportToLegacyDictionary;
- (id)faceBounds;
- (float)faceQuality;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setFaceBounds:(id)arg1;
- (void)setFaceQuality:(float)arg1;
- (void)writeTo:(id)arg1;

@end
