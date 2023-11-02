
@interface HDHRAFibBurdenDemoDataGenerator : NSObject <HDDemoDataObjectGenerator> {
    bool  _aFibHistoryFeatureOnboarded;
    HDDemoDataGeneratorState * _generatorState;
    double  _heartbeatSeriesSampleFrequency;
    double  _nextAFibBurdenSampleTime;
    double  _nextHeartbeatSeriesSampleTime;
    double  _percentAFibChance;
    HDProfile * _profile;
}

@property (nonatomic) bool aFibHistoryFeatureOnboarded;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) double heartbeatSeriesSampleFrequency;
@property (nonatomic) double nextAFibBurdenSampleTime;
@property (nonatomic) double nextHeartbeatSeriesSampleTime;
@property (nonatomic) double percentAFibChance;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_completeAFibHistoryOnboardingIfNecessaryForDemoPerson:(id)arg1 date:(id)arg2;
- (id)_currentDateFromCurrentTime:(double)arg1;
- (void)_generateAFibBurdenSamplesForDemoPerson:(id)arg1 lastTime:(double)arg2 atTime:(double)arg3 sampleDate:(id)arg4 objectCollection:(id)arg5;
- (void)_generateTachogramSamplesForDemoPerson:(id)arg1 lastTime:(double)arg2 atTime:(double)arg3 sampleDate:(id)arg4 objectCollection:(id)arg5;
- (id)_metadataForSampleWithPercentage:(double)arg1;
- (double)_randomlySelectedGaussianWithMean:(double)arg1 deviation:(double)arg2;
- (void)_setDataTypeAsFavorite;
- (bool)aFibHistoryFeatureOnboarded;
- (void)encodeWithCoder:(id)arg1;
- (void)generateFirstRunObjectsForDemoPerson:(id)arg1 firstDate:(id)arg2 objectCollection:(id)arg3;
- (void)generateObjectsForDemoPerson:(id)arg1 fromTime:(double)arg2 toTime:(double)arg3 currentDate:(id)arg4 objectCollection:(id)arg5;
- (double)heartbeatSeriesSampleFrequency;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (double)nextAFibBurdenSampleTime;
- (double)nextHeartbeatSeriesSampleTime;
- (double)percentAFibChance;
- (void)setAFibHistoryFeatureOnboarded:(bool)arg1;
- (void)setDemoDataGenerationContextWithProfile:(id)arg1 generatorState:(id)arg2;
- (void)setHeartbeatSeriesSampleFrequency:(double)arg1;
- (void)setNextAFibBurdenSampleTime:(double)arg1;
- (void)setNextHeartbeatSeriesSampleTime:(double)arg1;
- (void)setPercentAFibChance:(double)arg1;

@end
