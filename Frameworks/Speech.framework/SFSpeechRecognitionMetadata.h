
@interface SFSpeechRecognitionMetadata : NSObject <NSCopying, NSSecureCoding, SRSampling> {
    double  _averagePauseDuration;
    double  _speakingRate;
    double  _speechDuration;
    double  _speechStartTimestamp;
    SFVoiceAnalytics * _voiceAnalytics;
}

@property (nonatomic, readonly) double averagePauseDuration;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) double speakingRate;
@property (nonatomic, readonly) double speechDuration;
@property (nonatomic, readonly) double speechStartTimestamp;
@property (readonly) Class superclass;
@property (nonatomic, readonly) SFVoiceAnalytics *voiceAnalytics;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_initWithSpeechStartTimestamp:(double)arg1 speechDuration:(double)arg2 voiceAnalytics:(id)arg3 speakingRate:(double)arg4 averagePauseDuration:(double)arg5;
- (double)averagePauseDuration;
- (id)binarySampleRepresentation;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithBinarySampleRepresentation:(id)arg1 metadata:(id)arg2 timestamp:(double)arg3;
- (id)initWithCoder:(id)arg1;
- (double)speakingRate;
- (double)speechDuration;
- (double)speechStartTimestamp;
- (id)voiceAnalytics;

@end
