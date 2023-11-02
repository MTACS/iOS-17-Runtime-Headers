
@interface VCPBlurAnalyzer : VCPImageAnalyzer

- (float)computeRegionSharpness:(char *)arg1 width:(int)arg2 height:(int)arg3 stride:(long long)arg4;
- (int)computeSharpnessScore:(float*)arg1 forObjects:(id)arg2 inImage:(struct __CVBuffer { }*)arg3;

@end
