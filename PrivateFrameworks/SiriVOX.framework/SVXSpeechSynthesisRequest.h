
@interface SVXSpeechSynthesisRequest : NSObject <NSCopying, NSSecureCoding> {
    NSString * _localizationKey;
    unsigned long long  _options;
    SVXSpeechSynthesisAudio * _presynthesizedAudio;
    long long  _priority;
    NSDictionary * _speakableContext;
    NSString * _speakableText;
    NSString * _streamID;
}

@property (nonatomic, readonly, copy) NSString *localizationKey;
@property (nonatomic, readonly) unsigned long long options;
@property (nonatomic, readonly, copy) SVXSpeechSynthesisAudio *presynthesizedAudio;
@property (nonatomic, readonly) long long priority;
@property (nonatomic, readonly, copy) NSDictionary *speakableContext;
@property (nonatomic, readonly, copy) NSString *speakableText;
@property (nonatomic, readonly, copy) NSString *streamID;

+ (id)newWithBuilder:(id /* block */)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_descriptionWithIndent:(unsigned long long)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithPriority:(long long)arg1 options:(unsigned long long)arg2 speakableText:(id)arg3 speakableContext:(id)arg4 localizationKey:(id)arg5 presynthesizedAudio:(id)arg6 streamID:(id)arg7;
- (bool)isEqual:(id)arg1;
- (id)localizationKey;
- (id)mutatedCopyWithMutator:(id /* block */)arg1;
- (unsigned long long)options;
- (id)presynthesizedAudio;
- (long long)priority;
- (id)speakableContext;
- (id)speakableText;
- (id)streamID;

@end
