
@interface HMAccessoryNetworkAccessViolation : NSObject <NSSecureCoding> {
    NSDate * _lastResetDate;
    NSDate * _lastViolationDate;
}

@property (getter=hasCurrentViolation, readonly) bool currentViolation;
@property (readonly) NSDate *lastResetDate;
@property (readonly) NSDate *lastViolationDate;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasCurrentViolation;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithLastViolationDate:(id)arg1 lastViolationResetDate:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)lastResetDate;
- (id)lastViolationDate;

@end
