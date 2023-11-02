
@interface SNSoundPrintASmokeAlarmModelOutput : NSObject <MLFeatureProvider> {
    MLMultiArray * _Confidence;
    MLMultiArray * _Detected;
    MLMultiArray * _detectedHistoryOut;
    MLMultiArray * _input_1;
    MLMultiArray * _thresholdedHistoryOut;
}

@property (nonatomic, retain) MLMultiArray *Confidence;
@property (nonatomic, retain) MLMultiArray *Detected;
@property (nonatomic, retain) MLMultiArray *detectedHistoryOut;
@property (nonatomic, readonly) NSSet *featureNames;
@property (nonatomic, retain) MLMultiArray *input_1;
@property (nonatomic, retain) MLMultiArray *thresholdedHistoryOut;

- (void).cxx_destruct;
- (id)Confidence;
- (id)Detected;
- (id)detectedHistoryOut;
- (id)featureNames;
- (id)featureValueForName:(id)arg1;
- (id)initWithInput_1:(id)arg1 Confidence:(id)arg2 Detected:(id)arg3 thresholdedHistoryOut:(id)arg4 detectedHistoryOut:(id)arg5;
- (id)input_1;
- (void)setConfidence:(id)arg1;
- (void)setDetected:(id)arg1;
- (void)setDetectedHistoryOut:(id)arg1;
- (void)setInput_1:(id)arg1;
- (void)setThresholdedHistoryOut:(id)arg1;
- (id)thresholdedHistoryOut;

@end
