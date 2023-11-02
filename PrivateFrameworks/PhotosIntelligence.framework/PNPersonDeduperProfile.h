
@interface PNPersonDeduperProfile : NSObject <NSCopying> {
    unsigned long long  _faceProcessingVersion;
    double  _fuzzyMaximumDistance;
    double  _normalMaximumDistance;
    bool  _shouldRelaxThreshold;
    double  _strictMaximumDistance;
}

@property (nonatomic) unsigned long long faceProcessingVersion;
@property (nonatomic) double fuzzyMaximumDistance;
@property (nonatomic) double normalMaximumDistance;
@property (nonatomic, readonly) bool shouldAdjustThresholdOnAgeType;
@property (nonatomic) bool shouldRelaxThreshold;
@property (nonatomic) double strictMaximumDistance;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)faceProcessingVersion;
- (double)fuzzyMaximumDistance;
- (id)init;
- (id)initForDetectionType:(short)arg1;
- (double)normalMaximumDistance;
- (void)setFaceProcessingVersion:(unsigned long long)arg1;
- (void)setFuzzyMaximumDistance:(double)arg1;
- (void)setNormalMaximumDistance:(double)arg1;
- (void)setShouldRelaxThreshold:(bool)arg1;
- (void)setStrictMaximumDistance:(double)arg1;
- (bool)shouldAdjustThresholdOnAgeType;
- (bool)shouldRelaxThreshold;
- (double)strictMaximumDistance;

@end
