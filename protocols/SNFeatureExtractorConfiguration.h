
@protocol SNFeatureExtractorConfiguration <SNProcessorCreating>

@required

- (unsigned int)outputFeatureSize;
- (double)sampleRate;
- (unsigned int)stepSizeFrames;
- (unsigned int)windowLengthFrames;

@end
