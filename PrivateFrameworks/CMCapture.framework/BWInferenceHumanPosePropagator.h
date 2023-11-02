
@interface BWInferenceHumanPosePropagator : NSObject <BWEspressoInferenceTensorMemoryProvider, BWInferencePropagatable> {
    NSMutableData * _heatmapData;
    BWInferenceMetadataRequirement * _outputRequirement;
    struct __IOSurface { } * _tensorBackingSurface;
}

@property (nonatomic, readonly) bool allowsAsyncPropagation;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (bool)allowsAsyncPropagation;
- (struct __IOSurface { }*)backingMemoryForMetadataRequirement:(id)arg1 bindingName:(id)arg2 surfaceProperties:(id)arg3;
- (void)dealloc;
- (id)initWithOutputRequirement:(id)arg1;
- (void)propagateInferenceResultsToInferenceDictionary:(id)arg1 usingStorage:(id)arg2 inputSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg3 propagationSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg4;

@end
