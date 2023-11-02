
@interface BWInferenceDataDependency : NSObject {
    BWInferenceDataRequirement * _dataRequirement;
    BWInferenceRequirement * _inferenceRequirement;
}

@property (nonatomic, readonly) BWInferenceDataRequirement *dataRequirement;
@property (nonatomic, readonly) BWInferenceRequirement *inferenceRequirement;

- (id)dataRequirement;
- (void)dealloc;
- (id)inferenceRequirement;
- (id)initWithInferenceRequirement:(id)arg1 dependentOnDataRequirement:(id)arg2;

@end
