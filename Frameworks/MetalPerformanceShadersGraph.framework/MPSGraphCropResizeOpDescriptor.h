
@interface MPSGraphCropResizeOpDescriptor : MPSGraphObject <NSCopying> {
    unsigned long long  _coordinateMode;
    bool  _normalizeCoordinates;
    unsigned long long  _resizeHeight;
    unsigned long long  _resizeMode;
    unsigned long long  _resizeWidth;
    unsigned long long  _samplingMode;
    float  _spatialScale;
}

@property (nonatomic) unsigned long long coordinateMode;
@property (nonatomic) bool normalizeCoordinates;
@property (nonatomic) unsigned long long resizeHeight;
@property (nonatomic) unsigned long long resizeMode;
@property (nonatomic) unsigned long long resizeWidth;
@property (nonatomic) unsigned long long samplingMode;
@property (nonatomic) float spatialScale;

+ (id)descriptorWithResizeWidth:(unsigned long long)arg1 resizeHeight:(unsigned long long)arg2;
+ (id)descriptorWithResizeWidth:(unsigned long long)arg1 resizeHeight:(unsigned long long)arg2 normalizeCoordinates:(bool)arg3 spatialScale:(float)arg4 resizeMode:(unsigned long long)arg5 samplingMode:(unsigned long long)arg6 coordinateMode:(unsigned long long)arg7;

- (unsigned long long)coordinateMode;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)normalizeCoordinates;
- (unsigned long long)resizeHeight;
- (unsigned long long)resizeMode;
- (unsigned long long)resizeWidth;
- (unsigned long long)samplingMode;
- (void)setCoordinateMode:(unsigned long long)arg1;
- (void)setNormalizeCoordinates:(bool)arg1;
- (void)setResizeHeight:(unsigned long long)arg1;
- (void)setResizeMode:(unsigned long long)arg1;
- (void)setResizeWidth:(unsigned long long)arg1;
- (void)setSamplingMode:(unsigned long long)arg1;
- (void)setSpatialScale:(float)arg1;
- (float)spatialScale;

@end
