
@interface AFMyriadContext : NSObject <NSCopying, NSSecureCoding> {
    unsigned long long  _activationExpirationTime;
    long long  _activationSource;
    AFMyriadGoodnessScoreOverrideState * _overrideState;
    AFMyriadPerceptualAudioHash * _perceptualAudioHash;
    unsigned long long  _timestamp;
}

@property (nonatomic, readonly) unsigned long long activationExpirationTime;
@property (nonatomic, readonly) long long activationSource;
@property (nonatomic, readonly, copy) AFMyriadGoodnessScoreOverrideState *overrideState;
@property (nonatomic, readonly, copy) AFMyriadPerceptualAudioHash *perceptualAudioHash;
@property (nonatomic, readonly) unsigned long long timestamp;

+ (id)newWithBuilder:(id /* block */)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_descriptionWithIndent:(unsigned long long)arg1;
- (unsigned long long)activationExpirationTime;
- (long long)activationSource;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithBuilder:(id /* block */)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTimestamp:(unsigned long long)arg1 perceptualAudioHash:(id)arg2 overrideState:(id)arg3 activationSource:(long long)arg4 activationExpirationTime:(unsigned long long)arg5;
- (bool)isEqual:(id)arg1;
- (id)mutatedCopyWithMutator:(id /* block */)arg1;
- (id)overrideState;
- (id)perceptualAudioHash;
- (unsigned long long)timestamp;

@end
