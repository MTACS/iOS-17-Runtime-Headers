
@interface SCLInterruptEventBehavior : NSObject <NSCopying, NSSecureCoding> {
    unsigned long long  _eligibility;
    SCLInterruptEvent * _event;
}

@property (nonatomic, readonly) unsigned long long eligibility;
@property (nonatomic, readonly) SCLInterruptEvent *event;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)eligibility;
- (void)encodeWithCoder:(id)arg1;
- (id)event;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithEvent:(id)arg1 interruptEligibility:(unsigned long long)arg2;
- (bool)isEqual:(id)arg1;

@end
