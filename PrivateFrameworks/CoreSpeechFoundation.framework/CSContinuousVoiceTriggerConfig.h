
@interface CSContinuousVoiceTriggerConfig : NSObject {
    NSString * _configPathNDAPI;
    NSArray * _silencePhIds;
    float  _threshold;
    float  _twoShotDecisionWaitTime;
    float  _twoShotThreshold;
    NSArray * _voiceTriggerPhIds;
}

@property (nonatomic, readonly) NSString *configPathNDAPI;
@property (nonatomic, readonly) NSArray *silencePhIds;
@property (nonatomic, readonly) float threshold;
@property (nonatomic, readonly) float twoShotDecisionWaitTime;
@property (nonatomic, readonly) float twoShotThreshold;
@property (nonatomic, readonly) NSArray *voiceTriggerPhIds;

- (void).cxx_destruct;
- (id)configPathNDAPI;
- (id)initWithConfigPathNDAPI:(id)arg1 threshold:(float)arg2 twoShotThreshold:(float)arg3 twoShotDecisionWaitTime:(float)arg4 voiceTriggerPhIds:(id)arg5 silencePhIds:(id)arg6;
- (id)silencePhIds;
- (float)threshold;
- (float)twoShotDecisionWaitTime;
- (float)twoShotThreshold;
- (id)voiceTriggerPhIds;

@end
