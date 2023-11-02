
@interface AFAccessibilityState : NSObject <NSCopying, NSSecureCoding> {
    long long  _isVibrationDisabled;
    long long  _isVoiceOverTouchEnabled;
}

@property (nonatomic, readonly) long long isVibrationDisabled;
@property (nonatomic, readonly) long long isVoiceOverTouchEnabled;

+ (id)newWithBuilder:(id /* block */)arg1;
+ (bool)supportsSecureCoding;

- (id)_descriptionWithIndent:(unsigned long long)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithBuilder:(id /* block */)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithIsVoiceOverTouchEnabled:(long long)arg1 isVibrationDisabled:(long long)arg2;
- (bool)isEqual:(id)arg1;
- (long long)isVibrationDisabled;
- (long long)isVoiceOverTouchEnabled;
- (id)mutatedCopyWithMutator:(id /* block */)arg1;

@end
