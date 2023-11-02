
@interface VCPProtoLivePhotoHumanActionClassificationResult : PBCodable <NSCopying, VCPProtoResultLegacyConversionProtocol> {
    VCPProtoBounds * _bounds;
    NSMutableArray * _classifications;
    NSString * _faceId;
    VCPProtoTimeRange * _timeRange;
}

@property (nonatomic, retain) VCPProtoBounds *bounds;
@property (nonatomic, retain) NSMutableArray *classifications;
@property (nonatomic, retain) NSString *faceId;
@property (nonatomic, readonly) bool hasFaceId;
@property (nonatomic, retain) VCPProtoTimeRange *timeRange;

+ (Class)classificationType;
+ (id)resultFromLegacyDictionary:(id)arg1;

- (void).cxx_destruct;
- (void)addClassification:(id)arg1;
- (id)bounds;
- (id)classificationAtIndex:(unsigned long long)arg1;
- (id)classifications;
- (unsigned long long)classificationsCount;
- (void)clearClassifications;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)exportToLegacyDictionary;
- (id)faceId;
- (bool)hasFaceId;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setBounds:(id)arg1;
- (void)setClassifications:(id)arg1;
- (void)setFaceId:(id)arg1;
- (void)setTimeRange:(id)arg1;
- (id)timeRange;
- (void)writeTo:(id)arg1;

@end
