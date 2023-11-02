
@interface HDQuantitySampleAttenuationEngine : NSObject {
    <HDQuantitySampleAttenuationEngineDelegate> * _attenuationEngineDelegate;
    long long  _currentSampleIndex;
    long long  _delegateLoadErrorCount;
    NSError * _delegateLoadFirstError;
    bool  _noMoreDelegateSamples;
    long long  _sampleCountFromDelegate;
    struct { 
        double startTime; 
        double endTime; 
        double sampleValue; 
        bool shouldContributeToCount; 
        long long sourceID; 
    }  _samplesLoadedFromDelegate;
}

@property (nonatomic) <HDQuantitySampleAttenuationEngineDelegate> *attenuationEngineDelegate;

- (void).cxx_destruct;
- (struct { double x1; double x2; double x3; bool x4; long long x5; })attenuateSample:(struct { double x1; double x2; double x3; bool x4; long long x5; })arg1;
- (id)attenuationEngineDelegate;
- (bool)delegateLoadingWasSuccessful:(id*)arg1;
- (id)initWithAttenuationEngineDelegate:(id)arg1;
- (void)setAttenuationEngineDelegate:(id)arg1;

@end
