
@interface CSAttendingTriggerInfo : NSObject <NSCopying, NSSecureCoding> {
    float  _amountOfSpeechDetectedInMs;
    long long  _attendingType;
    long long  _audioRecordType;
    NSString * _detectedToken;
    NSString * _deviceId;
    unsigned long long  _triggerAbsStartSampleId;
    unsigned long long  _triggerMachTime;
    float  _triggerThresholdInMs;
}

@property (nonatomic, readonly) float amountOfSpeechDetectedInMs;
@property (nonatomic, readonly) long long attendingType;
@property (nonatomic, readonly) long long audioRecordType;
@property (nonatomic, readonly) NSString *detectedToken;
@property (nonatomic, readonly) NSString *deviceId;
@property (nonatomic, readonly) unsigned long long triggerAbsStartSampleId;
@property (nonatomic, readonly) unsigned long long triggerMachTime;
@property (nonatomic, readonly) float triggerThresholdInMs;

+ (bool)supportsSecureCoding;
+ (id)triggerInfoForServerInvoke;

- (void).cxx_destruct;
- (float)amountOfSpeechDetectedInMs;
- (long long)attendingType;
- (long long)audioRecordType;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)detectedToken;
- (id)deviceId;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithAttendingType:(long long)arg1 detectedToken:(id)arg2 triggerMachTime:(unsigned long long)arg3 triggerAbsStartSampleId:(unsigned long long)arg4 audioRecordType:(long long)arg5 audioRecordDeviceId:(id)arg6 amountOfSpeechDetectedInMs:(float)arg7 triggerThresholdInMs:(float)arg8;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)triggerAbsStartSampleId;
- (unsigned long long)triggerMachTime;
- (float)triggerThresholdInMs;

@end
