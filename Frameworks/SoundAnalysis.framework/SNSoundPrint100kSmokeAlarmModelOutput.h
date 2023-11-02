
@interface SNSoundPrint100kSmokeAlarmModelOutput : NSObject <MLFeatureProvider> {
    MLMultiArray * _Sigmoid;
}

@property (nonatomic, retain) MLMultiArray *Sigmoid;
@property (nonatomic, readonly) NSSet *featureNames;

- (void).cxx_destruct;
- (id)Sigmoid;
- (id)featureNames;
- (id)featureValueForName:(id)arg1;
- (id)initWithSigmoid:(id)arg1;
- (void)setSigmoid:(id)arg1;

@end
