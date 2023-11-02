
@interface AFSetAudioSessionActiveContext : NSObject <NSCopying, NSSecureCoding> {
    unsigned long long  _options;
    long long  _reason;
    AFSpeechRequestOptions * _speechRequestOptions;
}

@property (nonatomic, readonly) unsigned long long options;
@property (nonatomic, readonly) long long reason;
@property (nonatomic, readonly, copy) AFSpeechRequestOptions *speechRequestOptions;

+ (id)newWithBuilder:(id /* block */)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_descriptionWithIndent:(unsigned long long)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithBuilder:(id /* block */)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithOptions:(unsigned long long)arg1 reason:(long long)arg2 speechRequestOptions:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)mutatedCopyWithMutator:(id /* block */)arg1;
- (unsigned long long)options;
- (long long)reason;
- (id)speechRequestOptions;

@end
