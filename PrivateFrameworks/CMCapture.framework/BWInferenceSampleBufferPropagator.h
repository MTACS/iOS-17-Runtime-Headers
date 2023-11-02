
@interface BWInferenceSampleBufferPropagator : NSObject <BWInferencePropagatable> {
    NSArray * _cloneVideoRequirements;
    NSArray * _metadataRequirements;
    NSArray * _videoRequirements;
}

@property (nonatomic, readonly) bool allowsAsyncPropagation;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (bool)allowsAsyncPropagation;
- (void)dealloc;
- (id)initWithVideoRequirements:(id)arg1 cloneRequirements:(id)arg2 metadataRequirements:(id)arg3;
- (void)propagateInferenceResultsToInferenceDictionary:(id)arg1 usingStorage:(id)arg2 inputSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg3 propagationSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg4;

@end
