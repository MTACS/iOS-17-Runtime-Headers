
@interface AFMyriadGoodnessScoreOverrideState : NSObject <NSCopying, NSSecureCoding> {
    long long  _overrideOption;
    NSString * _reason;
}

@property (nonatomic, readonly) long long overrideOption;
@property (nonatomic, readonly, copy) NSString *reason;

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
- (id)initWithOverrideOption:(long long)arg1 reason:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)mutatedCopyWithMutator:(id /* block */)arg1;
- (long long)overrideOption;
- (id)reason;

@end
