
@interface HDQuantitySampleAttenuationProvider : NSObject <HDQuantitySampleAttenuationEngineDelegate> {
    HDQuantitySampleOverlapProcessor * _overlapProcessor;
    HDProfile * _profile;
    HKQuantityType * _quantityType;
}

- (void).cxx_destruct;
- (id)initWithQuantityType:(id)arg1 profile:(id)arg2;
- (long long)loadAttenuationSamples:(struct { double x1; double x2; double x3; bool x4; long long x5; }*)arg1 anchorTime:(double)arg2 errorOut:(id*)arg3;

@end
