
@interface BWFusionTrackerInferencePropagator : NSObject <BWInferencePropagatable> {
    BWInferenceVideoRequirement * _inputVideoRequirement;
    long long  _operation;
    NSMutableDictionary * _outputTensorRequirements;
}

@property (nonatomic, readonly) bool allowsAsyncPropagation;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (bool)allowsAsyncPropagation;
- (void)dealloc;
- (id)initWithInputVideoRequirement:(id)arg1 outputTensorRequirements:(id)arg2 operation:(long long)arg3;
- (void)propagateInferenceResultsToInferenceDictionary:(id)arg1 usingStorage:(id)arg2 inputSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg3 propagationSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg4;

@end
