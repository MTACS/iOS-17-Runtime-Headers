
@interface SVXDeactivationOptions : NSObject <NSCopying, NSSecureCoding> {
    double  _audioSessionDeactivationDelay;
}

@property (nonatomic, readonly) double audioSessionDeactivationDelay;

+ (id)newWithBuilder:(id /* block */)arg1;
+ (bool)supportsSecureCoding;

- (id)_descriptionWithIndent:(unsigned long long)arg1;
- (double)audioSessionDeactivationDelay;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithAudioSessionDeactivationDelay:(double)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)mutatedCopyWithMutator:(id /* block */)arg1;

@end
