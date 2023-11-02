
@interface VISRotationCorrectionEstimator : NSObject {
    void _accumulatedCorrection;
    void _estimatedCorrection;
    bool  _isInitialized;
    struct { 
        /* Warning: Unrecognized filer type: '}' using 'void*' */ void*vector; 
    }  _prevRotation;
    double  _prevTime;
    float  _timeScale;
    HighPassIIR2FilterFloat3 * highPassFilter1;
    HighPassIIR2FilterFloat3 * highPassFilter2;
}

@property (nonatomic, readonly) void estimatedCorrection;

- (void).cxx_destruct;
- (void)estimatedCorrection;
- (id)initWithTimeScale:(float)arg1;
- (void)reset;
- (void)updateWithRotation:(struct { })arg1 atTime:(double)arg2;

@end
