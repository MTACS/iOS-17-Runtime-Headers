
@interface SMTTCUPackage : NSObject <NSCopying, NSSecureCoding> {
    double  _endAudioTimeStampInMs;
    NSArray * _prevTCUIds;
    NSString * _requestId;
    SMTSiriIntendedInfo * _siriIntendedInfo;
    long long  _speechEvent;
    AFSpeechPackage * _speechPackage;
    double  _startAudioTimeStampInMs;
    NSString * _tcuId;
    long long  _tcuState;
    long long  _voiceTriggerPhraseType;
}

@property (nonatomic, readonly) double endAudioTimeStampInMs;
@property (nonatomic, readonly, copy) NSArray *prevTCUIds;
@property (nonatomic, readonly, copy) NSString *requestId;
@property (nonatomic, readonly, copy) SMTSiriIntendedInfo *siriIntendedInfo;
@property (nonatomic, readonly) long long speechEvent;
@property (nonatomic, readonly, copy) AFSpeechPackage *speechPackage;
@property (nonatomic, readonly) double startAudioTimeStampInMs;
@property (nonatomic, readonly, copy) NSString *tcuId;
@property (nonatomic, readonly) long long tcuState;
@property (nonatomic, readonly) long long voiceTriggerPhraseType;

+ (id)newWithBuilder:(id /* block */)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_descriptionWithIndent:(unsigned long long)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (double)endAudioTimeStampInMs;
- (unsigned long long)hash;
- (id)init;
- (id)initWithBuilder:(id /* block */)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTcuId:(id)arg1 requestId:(id)arg2 tcuState:(long long)arg3 speechEvent:(long long)arg4 voiceTriggerPhraseType:(long long)arg5 siriIntendedInfo:(id)arg6 prevTCUIds:(id)arg7 startAudioTimeStampInMs:(double)arg8 endAudioTimeStampInMs:(double)arg9 speechPackage:(id)arg10;
- (bool)isEqual:(id)arg1;
- (id)mutatedCopyWithMutator:(id /* block */)arg1;
- (id)prevTCUIds;
- (id)requestId;
- (id)siriIntendedInfo;
- (long long)speechEvent;
- (id)speechPackage;
- (double)startAudioTimeStampInMs;
- (id)tcuId;
- (long long)tcuState;
- (long long)voiceTriggerPhraseType;

@end
