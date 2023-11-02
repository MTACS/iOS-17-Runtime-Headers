
@protocol BWInferenceProvider <BWInferenceJobProvider>

@required

- (unsigned int)allowedPixelBufferCompressionDirection;
- (NSArray *)cloneVideoRequirements;
- (int)executionTarget;
- (NSArray *)inputMetadataRequirements;
- (NSArray *)inputVideoRequirements;
- (BWInferenceProviderStorage *)newStorage;
- (NSArray *)outputMetadataRequirements;
- (NSArray *)outputVideoRequirements;
- (NSSet *)preventionReasons;
- (int)prewarmUsingLimitedMemory:(bool)arg1;

@end
