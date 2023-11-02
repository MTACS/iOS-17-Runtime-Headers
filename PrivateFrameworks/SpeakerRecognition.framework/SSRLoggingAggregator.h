
@interface SSRLoggingAggregator : NSObject {
    NSMutableDictionary * _eventContext;
    NSString * _eventString;
    double  _retrainingWaitTime;
    unsigned long long  _speakerRecognitionPSRProcessingStatus;
    unsigned long long  _speakerRecognitionProcessingStatus;
    unsigned long long  _speakerRecognitionSATProcessingStatus;
    double  _speakerRecognitionWaitTime;
    unsigned long long  _voiceProfileDiscardedUtteranceCount;
    unsigned long long  _voiceProfilePrunedUtteranceCount;
    unsigned long long  _voiceProfilePruningFailureReasonCode;
    unsigned long long  _voiceProfileRetainedUtteranceCount;
    unsigned long long  _voiceProfileRetrainingFailureReasonCode;
    float  _voiceProfileUpdateScoreMSE;
    unsigned long long  explicitFailedUtteranceIndex;
    unsigned long long  explicitUtteranceIndex;
    unsigned long long  implicitDiscardedUtteranceIndex;
    unsigned long long  implicitUtteranceIndex;
}

@property (nonatomic) double retrainingWaitTime;
@property (nonatomic) unsigned long long speakerRecognitionPSRProcessingStatus;
@property (nonatomic) unsigned long long speakerRecognitionProcessingStatus;
@property (nonatomic) unsigned long long speakerRecognitionSATProcessingStatus;
@property (nonatomic) double speakerRecognitionWaitTime;
@property (nonatomic) unsigned long long voiceProfileDiscardedUtteranceCount;
@property (nonatomic) unsigned long long voiceProfilePrunedUtteranceCount;
@property (nonatomic) unsigned long long voiceProfilePruningFailureReasonCode;
@property (nonatomic) unsigned long long voiceProfileRetainedUtteranceCount;
@property (nonatomic) unsigned long long voiceProfileRetrainingFailureReasonCode;
@property (nonatomic) float voiceProfileUpdateScoreMSE;

- (void).cxx_destruct;
- (void)appendVoiceProfileDiscardedImplicitUtteranceScoreWith:(float)arg1;
- (void)appendVoiceProfileExplicitUtteranceScoreWith:(float)arg1;
- (void)appendVoiceProfileFailedExplicitUtteranceScoreWith:(float)arg1;
- (void)appendVoiceProfileImplicitUtteranceScoreWith:(float)arg1;
- (id)initWithEvent:(id)arg1 locale:(id)arg2 configVersion:(id)arg3;
- (void)pushAnalytics;
- (void)pushAnalyticsWithLazyBlock:(id /* block */)arg1;
- (double)retrainingWaitTime;
- (void)setRetrainingWaitTime:(double)arg1;
- (void)setSpeakerRecognitionPSRProcessingStatus:(unsigned long long)arg1;
- (void)setSpeakerRecognitionProcessingStatus:(unsigned long long)arg1;
- (void)setSpeakerRecognitionSATProcessingStatus:(unsigned long long)arg1;
- (void)setSpeakerRecognitionWaitTime:(double)arg1;
- (void)setVoiceProfileDiscardedUtteranceCount:(unsigned long long)arg1;
- (void)setVoiceProfilePrunedUtteranceCount:(unsigned long long)arg1;
- (void)setVoiceProfilePruningFailureReasonCode:(unsigned long long)arg1;
- (void)setVoiceProfileRetainedUtteranceCount:(unsigned long long)arg1;
- (void)setVoiceProfileRetrainingFailureReasonCode:(unsigned long long)arg1;
- (void)setVoiceProfileUpdateScoreMSE:(float)arg1;
- (void)setvoiceProfilePrunedUtteranceCount:(unsigned long long)arg1;
- (unsigned long long)speakerRecognitionPSRProcessingStatus;
- (unsigned long long)speakerRecognitionProcessingStatus;
- (unsigned long long)speakerRecognitionSATProcessingStatus;
- (double)speakerRecognitionWaitTime;
- (unsigned long long)voiceProfileDiscardedUtteranceCount;
- (unsigned long long)voiceProfilePrunedUtteranceCount;
- (unsigned long long)voiceProfilePruningFailureReasonCode;
- (unsigned long long)voiceProfileRetainedUtteranceCount;
- (unsigned long long)voiceProfileRetrainingFailureReasonCode;
- (float)voiceProfileUpdateScoreMSE;

@end
