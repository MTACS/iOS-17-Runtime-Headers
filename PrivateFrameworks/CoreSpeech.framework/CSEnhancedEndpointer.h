
@interface CSEnhancedEndpointer : NSObject {
    float  _defaultThresholdPartial;
    float  _defaultThresholdRC;
    bool  _delayedTrigger;
    MLModel * _endpointerModel;
    int  _extraDelayMs;
    bool  _hasHadDelayedDefaultResult;
    NSDictionary * _inputSpecs;
    NSArray * _outputNodes;
    float  _relaxedThresholdPartial;
    float  _relaxedThresholdRC;
    double  _targetTimeDefault;
    double  _targetTimeRelaxed;
}

@property (nonatomic, readonly) float defaultThresholdPartial;
@property (nonatomic, readonly) float defaultThresholdRC;
@property (nonatomic, readonly) bool delayedTrigger;
@property (nonatomic, retain) MLModel *endpointerModel;
@property (nonatomic, readonly) int extraDelayMs;
@property (nonatomic, readonly) bool hasHadDelayedDefaultResult;
@property (nonatomic, retain) NSDictionary *inputSpecs;
@property (nonatomic, retain) NSArray *outputNodes;
@property (nonatomic, readonly) float relaxedThresholdPartial;
@property (nonatomic, readonly) float relaxedThresholdRC;
@property (nonatomic, readonly) double targetTimeDefault;
@property (nonatomic, readonly) double targetTimeRelaxed;

- (void).cxx_destruct;
- (id)_constructFeatureDictionary:(id)arg1;
- (bool)_didDefaultEndpointerFireWithPartialScore:(float)arg1 rcScore:(float)arg2;
- (bool)_didRelaxedEndpointerFireWithPartialScore:(float)arg1 rcScore:(float)arg2;
- (void)_extractModelSpecs;
- (bool)_shouldForceEndpoint:(id)arg1;
- (float)defaultThresholdPartial;
- (float)defaultThresholdRC;
- (bool)delayedTrigger;
- (void)didEndpointWithFeatures:(id)arg1 audioTimestampMs:(double)arg2 completion:(id /* block */)arg3;
- (id)endpointerModel;
- (int)extraDelayMs;
- (bool)hasHadDelayedDefaultResult;
- (id)initWithModelFile:(id)arg1 defaultThresholdPartial:(float)arg2 defaultThresholdRC:(float)arg3 relaxedThresholdPartial:(float)arg4 relaxedThresholdRC:(float)arg5 extraDelayMs:(int)arg6;
- (id)inputSpecs;
- (id)outputNodes;
- (float)relaxedThresholdPartial;
- (float)relaxedThresholdRC;
- (void)setEndpointerModel:(id)arg1;
- (void)setInputSpecs:(id)arg1;
- (void)setOutputNodes:(id)arg1;
- (double)targetTimeDefault;
- (double)targetTimeRelaxed;
- (void)updateDefaultThresholdPartial:(float)arg1 defaultThresholdRC:(float)arg2 relaxedThresholdPartial:(float)arg3 relaxedThresholdRC:(float)arg4;
- (void)updateDelayedTriggerSwitch:(bool)arg1;

@end
