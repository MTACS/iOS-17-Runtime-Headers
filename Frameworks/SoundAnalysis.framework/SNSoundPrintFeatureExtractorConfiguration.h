
@interface SNSoundPrintFeatureExtractorConfiguration : NSObject <SNFeatureExtractorConfiguration> {
    <SNMLModel> * _model;
    unsigned int  _stepSizeFrames;
    unsigned int  _windowLengthFrames;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) unsigned int outputFeatureSize;
@property (readonly) double sampleRate;
@property (readonly) unsigned int stepSizeFrames;
@property (readonly) Class superclass;
@property (readonly) unsigned int windowLengthFrames;

- (void).cxx_destruct;
- (id)createProcessorWithError:(id*)arg1;
- (unsigned int)outputFeatureSize;
- (double)sampleRate;
- (unsigned int)stepSizeFrames;
- (unsigned int)windowLengthFrames;

@end
