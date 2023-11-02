
@interface BWEspressoInferenceStorage : BWInferenceProviderStorage {
    NSDictionary * _bindingNameByRequirement;
    NSMutableSet * _requirementsUsingPixelBuffers;
    NSMutableSet * _requirementsUsingTensors;
    NSMapTable * _tensorByRequirement;
}

+ (void)initialize;

- (void)addPixelBufferInUseRequirement:(id)arg1;
- (void)addTensorInUseRequirement:(id)arg1;
- (id)bindingNameForRequirement:(id)arg1;
- (void)clear;
- (void)dealloc;
- (id)initWithBindingNameByRequirement:(id)arg1 requirementsNeedingPixelBuffers:(id)arg2 requirementsNeedingPixelBufferPools:(id)arg3 requirementsNeedingTensors:(id)arg4;
- (id)newMetadataDictionarySatisfyingRequirement:(id)arg1;
- (struct opaqueCMSampleBuffer { }*)newSampleBufferSatisfyingRequirement:(id)arg1 withPropagationSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg2;
- (struct { void *x1; void *x2; unsigned long long x3[4]; unsigned long long x4[4]; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; unsigned long long x11; unsigned long long x12; unsigned long long x13; unsigned long long x14; int x15; }*)tensorForRequirement:(id)arg1;

@end
