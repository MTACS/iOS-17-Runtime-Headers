
@interface NUVideoExportRequest : NUExportRequest {
    bool  _applyOrientationAsMetadata;
    double  _bitRateMultiplicationFactor;
    bool  _bypassOutputSettingsIfNoComposition;
    NUColorSpace * _colorSpace;
    bool  _computeDigest;
    bool  _includeCinematicVideoTracks;
    NSArray * _metadata;
    NSDictionary * _outputSettings;
    NSProgress * _progress;
    bool  _requireHardwareEncoder;
}

@property (nonatomic) bool applyOrientationAsMetadata;
@property (nonatomic) double bitRateMultiplicationFactor;
@property (nonatomic) bool bypassOutputSettingsIfNoComposition;
@property (nonatomic, retain) NUColorSpace *colorSpace;
@property (nonatomic) bool computeDigest;
@property (nonatomic) bool includeCinematicVideoTracks;
@property (copy) NSArray *metadata;
@property (copy) NSDictionary *outputSettings;
@property (retain) NSProgress *progress;
@property (nonatomic) bool requireHardwareEncoder;

- (void).cxx_destruct;
- (bool)applyOrientationAsMetadata;
- (double)bitRateMultiplicationFactor;
- (bool)bypassOutputSettingsIfNoComposition;
- (id)colorSpace;
- (bool)computeDigest;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)includeCinematicVideoTracks;
- (id)initWithComposition:(id)arg1;
- (long long)mediaComponentType;
- (id)metadata;
- (id)newRenderJob;
- (id)outputSettings;
- (id)progress;
- (bool)requireHardwareEncoder;
- (void)setApplyOrientationAsMetadata:(bool)arg1;
- (void)setBitRateMultiplicationFactor:(double)arg1;
- (void)setBypassOutputSettingsIfNoComposition:(bool)arg1;
- (void)setColorSpace:(id)arg1;
- (void)setComputeDigest:(bool)arg1;
- (void)setIncludeCinematicVideoTracks:(bool)arg1;
- (void)setMetadata:(id)arg1;
- (void)setOutputSettings:(id)arg1;
- (void)setProgress:(id)arg1;
- (void)setRequireHardwareEncoder:(bool)arg1;
- (void)submit:(id /* block */)arg1;
- (void)submitWithProgress:(id)arg1 completion:(id /* block */)arg2;

@end
