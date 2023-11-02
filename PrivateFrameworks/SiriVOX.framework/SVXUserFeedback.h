
@interface SVXUserFeedback : NSObject <NSCopying, NSSecureCoding> {
    SVXUserFeedbackAudioContent * _audioContent;
    long long  _contentType;
    NSString * _identifier;
    SVXUserFeedbackVoiceContent * _voiceContent;
}

@property (nonatomic, readonly, copy) SVXUserFeedbackAudioContent *audioContent;
@property (nonatomic, readonly) long long contentType;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly, copy) SVXUserFeedbackVoiceContent *voiceContent;

+ (id)newWithBuilder:(id /* block */)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_descriptionWithIndent:(unsigned long long)arg1;
- (id)audioContent;
- (long long)contentType;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 contentType:(long long)arg2 audioContent:(id)arg3 voiceContent:(id)arg4;
- (bool)isEqual:(id)arg1;
- (id)mutatedCopyWithMutator:(id /* block */)arg1;
- (id)voiceContent;

@end
