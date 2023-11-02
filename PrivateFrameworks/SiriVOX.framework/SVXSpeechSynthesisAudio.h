
@interface SVXSpeechSynthesisAudio : NSObject <NSCopying, NSSecureCoding> {
    NSData * _data;
    SVXAudioStreamBasicDescription * _decoderASBD;
    SVXAudioStreamBasicDescription * _playerASBD;
}

@property (nonatomic, readonly, copy) NSData *data;
@property (nonatomic, readonly, copy) SVXAudioStreamBasicDescription *decoderASBD;
@property (nonatomic, readonly, copy) SVXAudioStreamBasicDescription *playerASBD;

+ (id)newWithBuilder:(id /* block */)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_descriptionWithIndent:(unsigned long long)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)data;
- (id)decoderASBD;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithData:(id)arg1 decoderASBD:(id)arg2 playerASBD:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)mutatedCopyWithMutator:(id /* block */)arg1;
- (id)playerASBD;

@end
