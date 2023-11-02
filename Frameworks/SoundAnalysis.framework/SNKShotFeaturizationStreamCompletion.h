
@interface SNKShotFeaturizationStreamCompletion : NSObject {
    void impl;
}

@property (nonatomic, retain) MLMultiArray *exemplar;
@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } inferenceWindowSize;

- (void).cxx_destruct;
- (id)exemplar;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })inferenceWindowSize;
- (id)init;
- (void)setExemplar:(id)arg1;
- (void)setInferenceWindowSize:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;

@end
