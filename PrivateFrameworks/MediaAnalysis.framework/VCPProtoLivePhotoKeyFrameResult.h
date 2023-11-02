
@interface VCPProtoLivePhotoKeyFrameResult : PBCodable <NSCopying, VCPProtoResultLegacyConversionProtocol> {
    float  _contentScore;
    float  _exposureScore;
    float  _expressionChangeScore;
    NSMutableArray * _faceResults;
    float  _globalQualityScore;
    struct { 
        unsigned int contentScore : 1; 
        unsigned int globalQualityScore : 1; 
    }  _has;
    float  _overallFaceQualityScore;
    float  _penaltyScore;
    float  _qualityScoreForLivePhoto;
    float  _sharpness;
    float  _textureScore;
    double  _timestamp;
    float  _visualPleasingScore;
}

@property (nonatomic) float contentScore;
@property (nonatomic) float exposureScore;
@property (nonatomic) float expressionChangeScore;
@property (nonatomic, retain) NSMutableArray *faceResults;
@property (nonatomic) float globalQualityScore;
@property (nonatomic) bool hasContentScore;
@property (nonatomic) bool hasGlobalQualityScore;
@property (nonatomic) float overallFaceQualityScore;
@property (nonatomic) float penaltyScore;
@property (nonatomic) float qualityScoreForLivePhoto;
@property (nonatomic) float sharpness;
@property (nonatomic) float textureScore;
@property (nonatomic) double timestamp;
@property (nonatomic) float visualPleasingScore;

+ (Class)faceResultsType;
+ (id)resultFromLegacyDictionary:(id)arg1;

- (void).cxx_destruct;
- (void)addFaceResults:(id)arg1;
- (void)clearFaceResults;
- (float)contentScore;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)exportToLegacyDictionary;
- (float)exposureScore;
- (float)expressionChangeScore;
- (id)faceResults;
- (id)faceResultsAtIndex:(unsigned long long)arg1;
- (unsigned long long)faceResultsCount;
- (float)globalQualityScore;
- (bool)hasContentScore;
- (bool)hasGlobalQualityScore;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (float)overallFaceQualityScore;
- (float)penaltyScore;
- (float)qualityScoreForLivePhoto;
- (bool)readFrom:(id)arg1;
- (void)setContentScore:(float)arg1;
- (void)setExposureScore:(float)arg1;
- (void)setExpressionChangeScore:(float)arg1;
- (void)setFaceResults:(id)arg1;
- (void)setGlobalQualityScore:(float)arg1;
- (void)setHasContentScore:(bool)arg1;
- (void)setHasGlobalQualityScore:(bool)arg1;
- (void)setOverallFaceQualityScore:(float)arg1;
- (void)setPenaltyScore:(float)arg1;
- (void)setQualityScoreForLivePhoto:(float)arg1;
- (void)setSharpness:(float)arg1;
- (void)setTextureScore:(float)arg1;
- (void)setTimestamp:(double)arg1;
- (void)setVisualPleasingScore:(float)arg1;
- (float)sharpness;
- (float)textureScore;
- (double)timestamp;
- (float)visualPleasingScore;
- (void)writeTo:(id)arg1;

@end
