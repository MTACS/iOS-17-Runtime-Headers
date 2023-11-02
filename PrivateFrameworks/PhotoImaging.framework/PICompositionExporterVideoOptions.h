
@interface PICompositionExporterVideoOptions : PICompositionExporterOptions {
    bool  _applyVideoOrientationAsMetadata;
    bool  _bypassOutputSettingsIfNoComposition;
    bool  _computeDigest;
    bool  _includeCinematicVideoTracks;
    bool  _increaseBitRateIfNecessary;
    id /* block */  _metadataProcessor;
    bool  _preserveSourceColorSpace;
    bool  _requireHardwareEncoder;
    NSString * _videoCodecType;
}

@property (nonatomic) bool applyVideoOrientationAsMetadata;
@property (nonatomic) bool bypassOutputSettingsIfNoComposition;
@property (nonatomic) bool computeDigest;
@property (nonatomic) bool includeCinematicVideoTracks;
@property (nonatomic) bool increaseBitRateIfNecessary;
@property (copy) id /* block */ metadataProcessor;
@property (nonatomic) bool preserveSourceColorSpace;
@property (nonatomic) bool requireHardwareEncoder;
@property (nonatomic, copy) NSString *videoCodecType;

- (void).cxx_destruct;
- (bool)applyVideoOrientationAsMetadata;
- (bool)bypassOutputSettingsIfNoComposition;
- (bool)computeDigest;
- (id)description;
- (bool)includeCinematicVideoTracks;
- (bool)increaseBitRateIfNecessary;
- (id)init;
- (id /* block */)metadataProcessor;
- (bool)preserveSourceColorSpace;
- (bool)requireHardwareEncoder;
- (void)setApplyVideoOrientationAsMetadata:(bool)arg1;
- (void)setBypassOutputSettingsIfNoComposition:(bool)arg1;
- (void)setComputeDigest:(bool)arg1;
- (void)setIncludeCinematicVideoTracks:(bool)arg1;
- (void)setIncreaseBitRateIfNecessary:(bool)arg1;
- (void)setMetadataProcessor:(id /* block */)arg1;
- (void)setPreserveSourceColorSpace:(bool)arg1;
- (void)setRequireHardwareEncoder:(bool)arg1;
- (void)setVideoCodecType:(id)arg1;
- (id)videoCodecType;

@end
