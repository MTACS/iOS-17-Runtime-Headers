
@interface PMLDiffPrivacyNoiseStrategy : NSObject <PMLNoiseStrategy> {
    bool  _inplaceNorm;
    int  _maxIterations;
    float  _minimumMagnitude;
    long long  _noiseMechanism;
    struct { 
        float gaussianScaleFactor; 
        float laplaceScaleFactor; 
    }  _noiseScaleFactors;
    unsigned long long  _seed;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) float minimumMagnitude;
@property (nonatomic) long long noiseMechanism;
@property (nonatomic) struct { float x1; float x2; } noiseScaleFactors;
@property (readonly) Class superclass;

+ (id)gaussianNoiseWithScaleFactor:(float)arg1 minimumMagnitude:(float)arg2 seed:(int)arg3;

- (void)addNoiseToSparseMatrix:(id)arg1;
- (void)addNoiseToSparseVector:(id)arg1;
- (id)createDefaultSampler;
- (id)createSamplerByName:(id)arg1;
- (id)description;
- (id)initWithMaxIterationCount:(int)arg1 noiseScaleFactors:(struct { float x1; float x2; })arg2 minimumMagnitude:(float)arg3 noiseMechanism:(long long)arg4 inplaceNorm:(bool)arg5;
- (id)initWithMaxIterationCount:(int)arg1 noiseScaleFactors:(struct { float x1; float x2; })arg2 minimumMagnitude:(float)arg3 seed:(int)arg4 noiseMechanism:(long long)arg5 inplaceNorm:(bool)arg6;
- (id)initWithPlist:(id)arg1 chunks:(id)arg2 context:(id)arg3;
- (float)minimumMagnitude;
- (long long)noiseMechanism;
- (struct { float x1; float x2; })noiseScaleFactors;
- (struct _PMLPreNoiseScaleFactorAndNoiseSampler { id x1; float x2; })samplerWithScaleFactorFor:(id)arg1 usingNorm:(bool)arg2;
- (bool)scaleAndAddNoiseToDenseVector:(id)arg1 usingNorm:(bool)arg2 scaleFactor:(float*)arg3;
- (void)setMinimumMagnitude:(float)arg1;
- (void)setNoiseMechanism:(long long)arg1;
- (void)setNoiseScaleFactors:(struct { float x1; float x2; })arg1;
- (id)toPlistWithChunks:(id)arg1;

@end
