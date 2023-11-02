
@interface VNDetectFaceGazeRequestConfiguration : VNImageBasedRequestConfiguration {
    float  _commonGazeLocationRadius;
    float  _gazeHeatMapThreshold;
    float  _minimumFaceDimension;
    bool  _resolveSomewhereElseDirection;
}

@property (nonatomic) float commonGazeLocationRadius;
@property (nonatomic) float gazeHeatMapThreshold;
@property (nonatomic) float minimumFaceDimension;
@property (nonatomic) bool resolveSomewhereElseDirection;

- (float)commonGazeLocationRadius;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (float)gazeHeatMapThreshold;
- (id)initWithRequestClass:(Class)arg1;
- (float)minimumFaceDimension;
- (bool)resolveSomewhereElseDirection;
- (void)setCommonGazeLocationRadius:(float)arg1;
- (void)setGazeHeatMapThreshold:(float)arg1;
- (void)setMinimumFaceDimension:(float)arg1;
- (void)setResolveSomewhereElseDirection:(bool)arg1;

@end
