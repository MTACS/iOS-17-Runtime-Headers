
@interface VKFrameProviderConfiguration : NSObject <NSCopying> {
    unsigned long long  _cameraPreset;
    unsigned long long  _frameRatePreset;
    bool  _preferBinning;
    unsigned long long  _resolutionPreset;
}

@property (nonatomic) unsigned long long cameraPreset;
@property (nonatomic) unsigned long long frameRatePreset;
@property (nonatomic) bool preferBinning;
@property (nonatomic) unsigned long long resolutionPreset;

- (unsigned long long)cameraPreset;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)frameRatePreset;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToFrameProviderConfiguration:(id)arg1;
- (bool)preferBinning;
- (unsigned long long)resolutionPreset;
- (void)setCameraPreset:(unsigned long long)arg1;
- (void)setFrameRatePreset:(unsigned long long)arg1;
- (void)setPreferBinning:(bool)arg1;
- (void)setResolutionPreset:(unsigned long long)arg1;

@end
