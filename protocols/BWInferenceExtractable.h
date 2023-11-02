
@protocol BWInferenceExtractable <BWInferenceJobProvider>

@required

- (int)extractFromSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 usingVideoRequirements:(NSArray *)arg2 metadataRequirements:(NSArray *)arg3 toStorage:(id <BWInferenceStorage>)arg4;
- (int)extractFromStorage:(id <BWInferenceStorage>)arg1 usingVideoRequirements:(NSArray *)arg2 metadataRequirements:(NSArray *)arg3 toSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg4;

@end
