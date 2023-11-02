
@interface EREyeReliefEngine : NSObject {
    ERAttentionAwarenessClient * _attentionAwarenessClient;
    long long  _interventionType;
    float  _tooCloseCount;
    long long  _tooCloseDistanceThreshold;
    NSUserDefaults * _userDefaults;
}

@property (retain) ERAttentionAwarenessClient *attentionAwarenessClient;
@property long long interventionType;
@property float tooCloseCount;
@property (nonatomic) long long tooCloseDistanceThreshold;
@property (nonatomic, retain) NSUserDefaults *userDefaults;

+ (float)_countReductionForInactiveTime:(double)arg1 forSamplingInterval:(double)arg2;

- (void).cxx_destruct;
- (id)_initFromUserDefaults:(bool)arg1;
- (void)_processDistanceEvent:(id)arg1;
- (void)_sendDistanceEvent:(id)arg1;
- (id)attentionAwarenessClient;
- (bool)cancelWithError:(id*)arg1;
- (id)init;
- (long long)interventionType;
- (bool)invalidateWithError:(id*)arg1;
- (void)processInactivity:(double)arg1 forSamplingInterval:(double)arg2;
- (void)processInterventionOutcome:(long long)arg1;
- (void)setAttentionAwarenessClient:(id)arg1;
- (void)setInterventionType:(long long)arg1;
- (void)setTooCloseCount:(float)arg1;
- (void)setTooCloseDistanceThreshold:(long long)arg1;
- (void)setUserDefaults:(id)arg1;
- (void)takeDistanceSampleWithCompletion:(id /* block */)arg1;
- (float)tooCloseCount;
- (long long)tooCloseDistanceThreshold;
- (id)userDefaults;

@end
