
@interface CSAttendingOptions : NSObject <NSCopying, NSSecureCoding> {
    unsigned long long  _attendingListeningType;
    long long  _attendingType;
    double  _audioStreamHoldingDurationInSec;
    NSString * _deviceId;
    double  _maxPauseDelay;
    double  _pauseDurationThreshold;
    double  _prependAudioDuration;
    long long  _recordType;
    unsigned long long  _startAttendingHostTime;
    double  _startOfSpeechNearMissThresholdInMs;
    double  _startOfSpeechThresholdInMs;
    double  _timeoutThresholdInSec;
    long long  _triggerType;
    bool  _useBoron;
    bool  _useOwnVoiceVAD;
    bool  _useVAD;
}

@property (nonatomic, readonly) unsigned long long attendingListeningType;
@property (nonatomic, readonly) long long attendingType;
@property (nonatomic, readonly) double audioStreamHoldingDurationInSec;
@property (nonatomic, readonly) NSString *deviceId;
@property (nonatomic, readonly) double maxPauseDelay;
@property (nonatomic, readonly) double pauseDurationThreshold;
@property (nonatomic, readonly) double prependAudioDuration;
@property (nonatomic, readonly) long long recordType;
@property (nonatomic, readonly) unsigned long long startAttendingHostTime;
@property (nonatomic, readonly) double startOfSpeechNearMissThresholdInMs;
@property (nonatomic, readonly) double startOfSpeechThresholdInMs;
@property (nonatomic, readonly) double timeoutThresholdInSec;
@property (nonatomic, readonly) long long triggerType;
@property (nonatomic, readonly) bool useBoron;
@property (nonatomic, readonly) bool useOwnVoiceVAD;
@property (nonatomic, readonly) bool useVAD;

+ (id)optionForFlexibleFollowupWithAudioRecordType:(long long)arg1 deviceId:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (unsigned long long)attendingListeningType;
- (long long)attendingType;
- (double)audioStreamHoldingDurationInSec;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)deviceId;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithAttendingType:(long long)arg1;
- (id)initWithAttendingType:(long long)arg1 startAttendingHostTime:(unsigned long long)arg2 useVAD:(bool)arg3 useOwnVoiceVAD:(bool)arg4 useBoron:(bool)arg5 startOfSpeechThresholdInMs:(double)arg6 prependAudioDuration:(double)arg7 timeoutThresholdInSec:(double)arg8 triggerType:(long long)arg9 audioStreamHoldingDurationInSec:(double)arg10 audioRecordType:(long long)arg11 deviceId:(id)arg12 attendingListeningType:(unsigned long long)arg13 pauseDurationThreshold:(double)arg14 maxPauseDelay:(double)arg15;
- (id)initWithCoder:(id)arg1;
- (double)maxPauseDelay;
- (double)pauseDurationThreshold;
- (double)prependAudioDuration;
- (long long)recordType;
- (unsigned long long)startAttendingHostTime;
- (double)startOfSpeechNearMissThresholdInMs;
- (double)startOfSpeechThresholdInMs;
- (double)timeoutThresholdInSec;
- (long long)triggerType;
- (bool)useBoron;
- (bool)useOwnVoiceVAD;
- (bool)useVAD;

@end
