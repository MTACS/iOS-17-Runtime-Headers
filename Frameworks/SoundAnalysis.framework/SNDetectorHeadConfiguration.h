
@interface SNDetectorHeadConfiguration : NSObject {
    NSString * _detectorIdentifier;
    <SNProcessorCreating> * _featureExtractorConfiguration;
    <SNMLModel> * _model;
    NSString * _outputLabel;
    NSPredicate * _resultsPredicate;
    long long  _resultsPredicateLeakCount;
    double  _sampleRate;
    unsigned int  _stepSizeFrames;
    unsigned int  _windowLengthFrames;
}

- (void).cxx_destruct;

@end
