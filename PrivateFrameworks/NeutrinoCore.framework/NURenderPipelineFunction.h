
@interface NURenderPipelineFunction : NSObject

+ (id)functionWithEvaluationBlock:(id /* block */)arg1;
+ (id)grainInputSeedFromFrameTime;
+ (id)redEyeSpotsWithCorrectionInfo:(id)arg1;
+ (id)scaleMultiplyOfScalar:(double)arg1;
+ (id)scaledVector:(id)arg1;
+ (id)sharpnessWithIntensity:(double)arg1;

- (id)evaluate:(id)arg1 error:(out id*)arg2;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)nu_evaluateWithPipelineState:(id)arg1 error:(out id*)arg2;

@end
