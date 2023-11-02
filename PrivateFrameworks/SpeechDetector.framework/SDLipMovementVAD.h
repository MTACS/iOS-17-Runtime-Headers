
@interface SDLipMovementVAD : NSObject {
    NSMutableDictionary * _blendshapeLocationToIndexMap;
    NSString * _configFile;
    <LipMovementVADDelegate> * _delegate;
    int  _framesToNextPrediction;
    NSMutableArray * _lipMovementDataArray;
    MLModel * _lipMovementVADModel;
    MLPredictionOptions * _options;
    double  _visualSpeechProbability;
}

@property (nonatomic) <LipMovementVADDelegate> *delegate;
@property (nonatomic, readonly) double visualSpeechProbability;

- (void).cxx_destruct;
- (void)addFaceTrackingData:(id)arg1 atMachAbsTime:(unsigned long long)arg2;
- (id)delegate;
- (id)initWithModelFile:(id)arg1;
- (void)reset;
- (void)runModel;
- (void)setDelegate:(id)arg1;
- (void)setupBlendshapeIndexArray;
- (double)visualSpeechProbability;

@end
