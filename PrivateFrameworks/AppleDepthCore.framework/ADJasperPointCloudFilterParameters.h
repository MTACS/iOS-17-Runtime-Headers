
@interface ADJasperPointCloudFilterParameters : NSObject {
    unsigned long long  _bankIDMask;
    float  _confidenceThreshold;
    unsigned long long  _echoMode;
    float  _maxDistance;
    float  _minDistance;
    float  _shortRangeConfidenceThreshold;
    float  _shortRangeDepthThreshold;
}

@property (nonatomic) unsigned long long bankIDMask;
@property (nonatomic) float confidenceThreshold;
@property (nonatomic) unsigned long long echoMode;
@property (nonatomic) float maxDistance;
@property (nonatomic) float minDistance;
@property (nonatomic) float shortRangeConfidenceThreshold;
@property (nonatomic) float shortRangeDepthThreshold;

+ (id)emptyFilter;

- (unsigned long long)bankIDMask;
- (float)confidenceThreshold;
- (unsigned long long)echoMode;
- (id)init;
- (float)maxDistance;
- (float)minDistance;
- (void)setBankIDMask:(unsigned long long)arg1;
- (void)setConfidenceThreshold:(float)arg1;
- (void)setEchoMode:(unsigned long long)arg1;
- (void)setMaxDistance:(float)arg1;
- (void)setMinDistance:(float)arg1;
- (void)setShortRangeConfidenceThreshold:(float)arg1;
- (void)setShortRangeDepthThreshold:(float)arg1;
- (float)shortRangeConfidenceThreshold;
- (float)shortRangeDepthThreshold;

@end
