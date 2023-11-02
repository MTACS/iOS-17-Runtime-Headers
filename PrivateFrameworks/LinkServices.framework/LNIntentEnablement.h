
@interface LNIntentEnablement : NSObject <NSCopying, NSSecureCoding> {
    LNStaticDeferredLocalizedString * _disabledReason;
    long long  _value;
}

@property (nonatomic, readonly) LNStaticDeferredLocalizedString *disabledReason;
@property (nonatomic, readonly) long long value;

+ (id)disabledWithReason:(id)arg1;
+ (id)enabled;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)disabledReason;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithValue:(long long)arg1 disabledReason:(id)arg2;
- (bool)isEqual:(id)arg1;
- (long long)value;

@end
