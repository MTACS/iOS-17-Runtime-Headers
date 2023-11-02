
@interface HMDAccessoryNetworkAccessViolation : HMFObject <NSSecureCoding> {
    NSDate * _lastResetDate;
    NSDate * _lastViolationDate;
}

@property (getter=hasCurrentViolation, readonly) bool currentViolation;
@property (readonly) NSDate *lastResetDate;
@property (readonly) NSDate *lastViolationDate;

+ (id)noViolation;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)attributeDescriptions;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasCurrentViolation;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithLastViolationDate:(id)arg1 lastViolationResetDate:(id)arg2;
- (id)initWithLastViolationTimeInterval:(id)arg1 lastViolationResetTimeInterval:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)lastResetDate;
- (id)lastViolationDate;

@end
