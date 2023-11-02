
@interface SNKShotFeaturizationResult : NSObject {
    void impl;
}

@property (nonatomic, retain) MLMultiArray *exemplar;
@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } inferenceWindowSize;
@property (nonatomic, copy) NSArray *trainingDataEmbeddings;
@property (nonatomic, copy) NSArray *trainingDataLabels;
@property (nonatomic, copy) NSArray *validationDataEmbeddings;
@property (nonatomic, copy) NSArray *validationDataLabels;

- (void).cxx_destruct;
- (id)exemplar;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })inferenceWindowSize;
- (id)init;
- (void)setExemplar:(id)arg1;
- (void)setInferenceWindowSize:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setTrainingDataEmbeddings:(id)arg1;
- (void)setTrainingDataLabels:(id)arg1;
- (void)setValidationDataEmbeddings:(id)arg1;
- (void)setValidationDataLabels:(id)arg1;
- (id)trainingDataEmbeddings;
- (id)trainingDataLabels;
- (id)validationDataEmbeddings;
- (id)validationDataLabels;

@end
