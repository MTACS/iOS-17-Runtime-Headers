
@interface VCPImageExposureAnalyzer : VCPImageAnalyzer {
    float  _exposureScore;
}

@property (nonatomic, readonly) float exposureScore;

- (int)analyzePixelBuffer:(struct __CVBuffer { }*)arg1 flags:(unsigned long long*)arg2 results:(id*)arg3 cancel:(id /* block */)arg4;
- (float)computeNoiseLevel:(char *)arg1 width:(int)arg2 height:(int)arg3 stride:(long long)arg4 textureness:(char *)arg5;
- (float)computeRegionNoise:(char *)arg1 blockTextureness:(char *)arg2 average:(char *)arg3 width:(int)arg4 height:(int)arg5 stride:(long long)arg6;
- (float)exposureScore;

@end
