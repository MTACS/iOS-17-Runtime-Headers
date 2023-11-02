
@interface CTActivationPolicyState : NSObject <NSCopying, NSSecureCoding> {
    long long  _carrierLock;
}

@property (nonatomic) long long carrierLock;

+ (bool)supportsSecureCoding;

- (long long)carrierLock;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setCarrierLock:(long long)arg1;

@end
