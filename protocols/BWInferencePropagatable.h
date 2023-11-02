
@protocol BWInferencePropagatable <NSObject>

@required

- (bool)allowsAsyncPropagation;
- (void)propagateInferenceResultsToInferenceDictionary:(NSMutableDictionary *)arg1 usingStorage:(BWInferenceProviderStorage *)arg2 inputSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg3 propagationSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg4;

@end
