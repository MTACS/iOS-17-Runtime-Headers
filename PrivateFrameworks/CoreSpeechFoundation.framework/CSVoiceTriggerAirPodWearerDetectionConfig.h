
@interface CSVoiceTriggerAirPodWearerDetectionConfig : NSObject {
    float  _minimumPhraseLength;
    float  _myriadThreshold;
    NSArray * _phrasesToSkipBoronDecisionMaking;
    float  _shadowMicScoreThreshold;
    float  _threshold;
}

@property (nonatomic, readonly) float minimumPhraseLength;
@property (nonatomic, readonly) float myriadThreshold;
@property (nonatomic, readonly) NSArray *phrasesToSkipBoronDecisionMaking;
@property (nonatomic, readonly) float shadowMicScoreThreshold;
@property (nonatomic, readonly) float threshold;

- (void).cxx_destruct;
- (id)initWithThreshold:(float)arg1 minimumPhraseLength:(float)arg2 shadowMicScoreThreshold:(float)arg3 myriadThreshold:(float)arg4 phrasesToSkipBoronDecisionMaking:(id)arg5;
- (float)minimumPhraseLength;
- (float)myriadThreshold;
- (id)phrasesToSkipBoronDecisionMaking;
- (float)shadowMicScoreThreshold;
- (float)threshold;

@end
