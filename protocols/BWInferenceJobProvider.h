
@protocol BWInferenceJobProvider <NSObject>

@required

- (<BWInferenceExecutable> *)executable;
- (<BWInferenceExtractable> *)extractable;
- (<BWInferenceStorage> *)newStorage;
- (<BWInferencePropagatable> *)propagatable;
- (<BWInferenceSubmittable> *)submittable;
- (int)type;

@end
