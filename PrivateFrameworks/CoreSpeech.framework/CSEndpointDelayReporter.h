
@interface CSEndpointDelayReporter : NSObject {
    NSString * _curTRPId;
    bool  _didReportEndpointDelay;
    unsigned long long  _endpointBufferHostTime;
    double  _endpointTimeInMs;
    bool  _isMedocEnabled;
    NSString * _requestMHUUID;
    unsigned long long  _stopRecordingHostTime;
    NSUUID * _turnIdentifier;
    unsigned long long  _userSpeakingEndedHostTime;
    double  _userSpeakingEndedTimeInMs;
    unsigned long long  _userSpeakingStartedHostTime;
    double  _userSpeakingStartedTimeInMs;
}

@property (nonatomic, retain) NSString *curTRPId;
@property (nonatomic) bool didReportEndpointDelay;
@property (nonatomic) unsigned long long endpointBufferHostTime;
@property (nonatomic) double endpointTimeInMs;
@property (nonatomic) bool isMedocEnabled;
@property (nonatomic, retain) NSString *requestMHUUID;
@property (nonatomic) unsigned long long stopRecordingHostTime;
@property (nonatomic, retain) NSUUID *turnIdentifier;
@property (nonatomic) unsigned long long userSpeakingEndedHostTime;
@property (nonatomic) double userSpeakingEndedTimeInMs;
@property (nonatomic) unsigned long long userSpeakingStartedHostTime;
@property (nonatomic) double userSpeakingStartedTimeInMs;

- (void).cxx_destruct;
- (void)_reportUEIUserSpeakingContext;
- (id)curTRPId;
- (bool)didReportEndpointDelay;
- (unsigned long long)endpointBufferHostTime;
- (double)endpointTimeInMs;
- (unsigned long long)estimatedUserSpeakingEndedHostTime;
- (unsigned long long)estimatedUserSpeakingStartedHostTime;
- (id)initWithRequestMHUUID:(id)arg1 turnIdentifier:(id)arg2;
- (id)initWithRequestMHUUID:(id)arg1 turnIdentifier:(id)arg2 withMedocEnabled:(bool)arg3;
- (void)instrumentEndpointSignpostsForServerEndpointWithEndTime:(double)arg1 leadingSilence:(double)arg2 trailingSilence:(double)arg3 stopRecordingMachContinuousTime:(unsigned long long)arg4 skippedSamplesTimeInSec:(double)arg5 firstAudioSampleSensorHostTime:(unsigned long long)arg6;
- (bool)isMedocEnabled;
- (void)reportEndpointDelayIfNeed;
- (id)requestMHUUID;
- (void)reset;
- (void)setCurTRPId:(id)arg1;
- (void)setDidReportEndpointDelay:(bool)arg1;
- (void)setEndpointBufferHostTime:(unsigned long long)arg1;
- (void)setEndpointTimeInMs:(double)arg1;
- (void)setIsMedocEnabled:(bool)arg1;
- (void)setRequestMHUUID:(id)arg1;
- (void)setSpeechRecognizedContext:(id)arg1 withEndpointerMetrics:(id)arg2;
- (void)setSpeechRecognizedContext:(id)arg1 withEndpointerMetrics:(id)arg2 withTrpId:(id)arg3;
- (void)setStopRecordingHostTime:(unsigned long long)arg1;
- (void)setTurnIdentifier:(id)arg1;
- (void)setUserSpeakingEndedHostTime:(unsigned long long)arg1;
- (void)setUserSpeakingEndedTimeInMs:(double)arg1;
- (void)setUserSpeakingStartedHostTime:(unsigned long long)arg1;
- (void)setUserSpeakingStartedTimeInMs:(double)arg1;
- (unsigned long long)stopRecordingHostTime;
- (id)turnIdentifier;
- (unsigned long long)userSpeakingEndedHostTime;
- (double)userSpeakingEndedTimeInMs;
- (unsigned long long)userSpeakingStartedHostTime;
- (double)userSpeakingStartedTimeInMs;

@end
