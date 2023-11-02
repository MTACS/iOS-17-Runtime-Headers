
@interface SRSpeechMetrics : NSObject <NSCopying, NSSecureCoding, SRSampling> {
    SRAudioLevel * _audioLevel;
    unsigned long long  _sessionFlags;
    NSString * _sessionIdentifier;
    SNClassificationResult * _soundClassification;
    SRSpeechExpression * _speechExpression;
    SFSpeechRecognitionResult * _speechRecognition;
    NSDate * _timestamp;
}

@property (nonatomic, readonly) SRAudioLevel *audioLevel;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long sessionFlags;
@property (nonatomic, readonly, copy) NSString *sessionIdentifier;
@property (nonatomic, readonly) SNClassificationResult *soundClassification;
@property (nonatomic, readonly) SRSpeechExpression *speechExpression;
@property (nonatomic, readonly) SFSpeechRecognitionResult *speechRecognition;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSDate *timestamp;

+ (void)initialize;
+ (id)new;
+ (bool)supportsSecureCoding;

- (id)audioLevel;
- (id)binarySampleRepresentation;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithBinarySampleRepresentation:(id)arg1 metadata:(id)arg2 timestamp:(double)arg3;
- (id)initWithCoder:(id)arg1;
- (id)initWithSessionIdentifier:(id)arg1 sessionFlags:(unsigned long long)arg2 timestamp:(double)arg3 audioLevel:(id)arg4 speechRecognition:(id)arg5 soundClassification:(id)arg6 speechExpression:(id)arg7;
- (bool)isEqual:(id)arg1;
- (unsigned long long)sessionFlags;
- (id)sessionIdentifier;
- (id)soundClassification;
- (id)speechExpression;
- (id)speechRecognition;
- (id)timestamp;

@end
