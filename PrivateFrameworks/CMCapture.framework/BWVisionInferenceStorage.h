
@interface BWVisionInferenceStorage : BWInferenceProviderStorage {
    NSMutableDictionary * _requestsByRequirement;
}

+ (void)initialize;

- (void)dealloc;
- (id)initWithRequirementsNeedingPixelBuffers:(id)arg1 requirementsNeedingPixelBufferPools:(id)arg2;
- (id)newMetadataDictionarySatisfyingRequirement:(id)arg1;
- (struct opaqueCMSampleBuffer { }*)newSampleBufferSatisfyingRequirement:(id)arg1 withPropagationSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg2;
- (void)removeRequest:(id)arg1;
- (id)requestForRequirement:(id)arg1;
- (void)setRequest:(id)arg1 forRequirement:(id)arg2;

@end
