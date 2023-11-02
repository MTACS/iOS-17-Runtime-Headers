
@interface SNSoundPrint100kSmokeAlarmModelInput : NSObject <MLFeatureProvider> {
    MLMultiArray * _soundprint_Placeholder;
}

@property (nonatomic, readonly) NSSet *featureNames;
@property (nonatomic, retain) MLMultiArray *soundprint_Placeholder;

- (void).cxx_destruct;
- (id)featureNames;
- (id)featureValueForName:(id)arg1;
- (id)initWithSoundprint_Placeholder:(id)arg1;
- (void)setSoundprint_Placeholder:(id)arg1;
- (id)soundprint_Placeholder;

@end
