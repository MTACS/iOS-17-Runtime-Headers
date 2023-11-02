
@interface AXPhoenixClassifier : NSObject {
    AccelerometerBuffer * _accelBuffer;
    double * _arrayDataPointer;
    MLModel * _classifier;
    AXPhoenixClassifierConfiguration * _configuration;
    <AXPhoenixClassifierDelegate> * _delegate;
    bool  _falsePositiveLoggingEnabled;
    unsigned long long  _frameLength;
    AXPhoenixDataLogger * _logger;
    unsigned long long  _loopCounter;
    unsigned long long  _minSamplesBetweenTriggers;
    NSString * _modelDescription;
    NSString * _modelInputName;
    NSString * _modelOutputName;
    NSString * _modelVersion;
    MLMultiArray * _multiArray;
    int  _policyOption;
    PredictionsBuffer * _predictionsBuffer;
    NSObject<OS_dispatch_queue> * _queue;
    unsigned long long  _runFrequency;
    unsigned long long  _sampleCountSinceLastTrigger;
    NSArray * _shape;
    bool  _shouldResetBuffer;
    float  _tapSpeed;
}

@property (nonatomic) bool falsePositiveLoggingEnabled;

- (void).cxx_destruct;
- (bool)_clippedDataShowsPrediction:(unsigned long long)arg1;
- (id)_clippedMultiArrayInputWithError:(id*)arg1 beforeTime:(double)arg2;
- (unsigned long long)_computeFrameLength;
- (unsigned long long)_countThresholdForGesturePrediction:(struct { unsigned long long x1; unsigned long long x2; })arg1;
- (id)_createMultiArrayWithError:(id*)arg1;
- (void)_handleAccelerometerData:(struct { double x1; double x2; double x3; })arg1 withTimestamp:(double)arg2;
- (id)_initializeModelFromURL:(id)arg1 outError:(id*)arg2;
- (void)_logWindowData:(id)arg1 doubleTap:(bool)arg2 tapData:(struct { double x1; double x2; double x3; double x4; })arg3;
- (id)_multiArrayInputForClassifierWithError:(id*)arg1;
- (id)_windowData:(bool)arg1;
- (id)configuration;
- (void)dealloc;
- (bool)falsePositiveLoggingEnabled;
- (void)handleAccelerometerData:(struct { double x1; double x2; double x3; })arg1 withTimestamp:(double)arg2;
- (id)initWithDelegate:(id)arg1 modelURL:(id)arg2 configuration:(id)arg3;
- (void)reset;
- (void)setFalsePositiveLoggingEnabled:(bool)arg1;
- (void)setPolicyOption:(int)arg1;
- (void)setShouldResetBuffer;
- (void)setTapSpeed:(float)arg1;
- (id)version;

@end
