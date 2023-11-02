
@interface SNVGGishFireAlarmModelInput : NSObject <MLFeatureProvider> {
    MLMultiArray * _detectedHistoryIn;
    MLMultiArray * _input1;
    MLMultiArray * _stateIn;
}

@property (nonatomic, retain) MLMultiArray *detectedHistoryIn;
@property (nonatomic, readonly) NSSet *featureNames;
@property (nonatomic, retain) MLMultiArray *input1;
@property (nonatomic, retain) MLMultiArray *stateIn;

- (void).cxx_destruct;
- (id)detectedHistoryIn;
- (id)featureNames;
- (id)featureValueForName:(id)arg1;
- (id)initWithInput1:(id)arg1;
- (id)initWithInput1:(id)arg1 stateIn:(id)arg2 detectedHistoryIn:(id)arg3;
- (id)input1;
- (void)setDetectedHistoryIn:(id)arg1;
- (void)setInput1:(id)arg1;
- (void)setStateIn:(id)arg1;
- (id)stateIn;

@end
