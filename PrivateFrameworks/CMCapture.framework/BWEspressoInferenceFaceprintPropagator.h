
@interface BWEspressoInferenceFaceprintPropagator : NSObject <BWInferencePropagatable> {
    BWInferenceMetadataRequirement * _confidenceRequirement;
    unsigned long long  _faceIndex;
    BWInferenceMetadataRequirement * _faceprintRequirement;
    unsigned long long  _faceprintSizeBytes;
    unsigned long long  _maxFaces;
}

@property (nonatomic, readonly) bool allowsAsyncPropagation;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (bool)allowsAsyncPropagation;
- (void)dealloc;
- (id)initWithFaceprintRequirement:(id)arg1 faceprintSizeBytes:(unsigned long long)arg2 confidenceRequirement:(id)arg3 maxFaces:(unsigned long long)arg4 faceIndex:(unsigned long long)arg5;
- (void)propagateInferenceResultsToInferenceDictionary:(id)arg1 usingStorage:(id)arg2 inputSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg3 propagationSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg4;

@end
