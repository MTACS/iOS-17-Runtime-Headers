
@protocol HDQuantitySampleAttenuationEngineDelegate

@required

- (long long)loadAttenuationSamples:(struct { double x1; double x2; double x3; bool x4; long long x5; })arg1 anchorTime:(double)arg2 errorOut:(id*)arg3;

@end
