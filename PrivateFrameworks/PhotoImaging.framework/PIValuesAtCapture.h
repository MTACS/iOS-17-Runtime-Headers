
@interface PIValuesAtCapture : NSObject {
    unsigned long long  _SDOFRenderingVersion;
    float  _aperture;
    struct { 
        int major; 
        int minor; 
    }  _depthVersionInfo;
    NSDictionary * _focusRect;
    NSNumber * _maximumAperture;
    NSNumber * _minimumAperture;
    unsigned long long  _portraitMajorVersion;
    unsigned long long  _portraitMinorVersion;
    float  _portraitStrength;
}

@property (nonatomic) unsigned long long SDOFRenderingVersion;
@property (nonatomic) float aperture;
@property (nonatomic) struct { int x1; int x2; } depthVersionInfo;
@property (nonatomic, retain) NSDictionary *focusRect;
@property (nonatomic, retain) NSNumber *maximumAperture;
@property (nonatomic, retain) NSNumber *minimumAperture;
@property (nonatomic) unsigned long long portraitMajorVersion;
@property (nonatomic) unsigned long long portraitMinorVersion;
@property (nonatomic) float portraitStrength;

+ (id)valuesAtCaptureFromImageProperties:(id)arg1 error:(out id*)arg2;

- (void).cxx_destruct;
- (unsigned long long)SDOFRenderingVersion;
- (float)aperture;
- (struct { int x1; int x2; })depthVersionInfo;
- (id)description;
- (id)focusRect;
- (id)initFromMinAperture:(float)arg1 maxAperture:(float)arg2 aperture:(float)arg3 focusRect:(id)arg4 portraitStrength:(float)arg5 SDOFRenderingVersion:(unsigned long long)arg6 depthVersionInfo:(struct { int x1; int x2; })arg7;
- (id)maximumAperture;
- (id)minimumAperture;
- (unsigned long long)portraitMajorVersion;
- (unsigned long long)portraitMinorVersion;
- (float)portraitStrength;
- (void)setAperture:(float)arg1;
- (void)setDepthVersionInfo:(struct { int x1; int x2; })arg1;
- (void)setFocusRect:(id)arg1;
- (void)setMaximumAperture:(id)arg1;
- (void)setMinimumAperture:(id)arg1;
- (void)setPortraitMajorVersion:(unsigned long long)arg1;
- (void)setPortraitMinorVersion:(unsigned long long)arg1;
- (void)setPortraitStrength:(float)arg1;
- (void)setSDOFRenderingVersion:(unsigned long long)arg1;

@end
