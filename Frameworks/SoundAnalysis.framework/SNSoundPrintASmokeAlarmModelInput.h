
@interface SNSoundPrintASmokeAlarmModelInput : NSObject <MLFeatureProvider> {
    MLMultiArray * _detectedHistoryIn;
    MLMultiArray * _input1;
    MLMultiArray * _stateIn;
    MLMultiArray * _thresholdedHistoryIn;
}

@property (nonatomic, retain) MLMultiArray *detectedHistoryIn;
@property (nonatomic, readonly) NSSet *featureNames;
@property (nonatomic, retain) MLMultiArray *input1;
@property (nonatomic, retain) MLMultiArray *stateIn;
@property (nonatomic, retain) MLMultiArray *thresholdedHistoryIn;

- (void).cxx_destruct;
- (id)detectedHistoryIn;
- (id)featureNames;
- (id)featureValueForName:(id)arg1;
- (id)initWithInput1:(id)arg1;
- (id)initWithInput1:(id)arg1 stateIn:(id)arg2 thresholdedHistoryIn:(id)arg3 detectedHistoryIn:(id)arg4;
- (id)input1;
- (void)setDetectedHistoryIn:(id)arg1;
- (void)setInput1:(id)arg1;
- (void)setStateIn:(id)arg1;
- (void)setThresholdedHistoryIn:(id)arg1;
- (id)stateIn;
- (id)thresholdedHistoryIn;

@end
