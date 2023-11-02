
@interface VCPProtoMovieStabilizationResult : PBCodable <NSCopying, VCPProtoResultLegacyConversionProtocol> {
    float  _analysisConfidence;
    bool  _gyroStabilization;
    NSData * _recipeBlob;
}

@property (nonatomic) float analysisConfidence;
@property (nonatomic) bool gyroStabilization;
@property (nonatomic, readonly) bool hasRecipeBlob;
@property (nonatomic, retain) NSData *recipeBlob;

+ (id)resultFromLegacyDictionary:(id)arg1;

- (void).cxx_destruct;
- (float)analysisConfidence;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)exportToLegacyDictionary;
- (bool)gyroStabilization;
- (bool)hasRecipeBlob;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)recipeBlob;
- (void)setAnalysisConfidence:(float)arg1;
- (void)setGyroStabilization:(bool)arg1;
- (void)setRecipeBlob:(id)arg1;
- (void)writeTo:(id)arg1;

@end
