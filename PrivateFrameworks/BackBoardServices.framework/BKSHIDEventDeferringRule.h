
@interface BKSHIDEventDeferringRule : NSObject <NSCopying, NSSecureCoding> {
    BKSHIDEventDeferringPredicate * _predicate;
    NSString * _reason;
    BKSHIDEventDeferringTarget * _target;
}

@property (nonatomic, readonly, copy) BKSHIDEventDeferringPredicate *predicate;
@property (nonatomic, readonly, copy) NSString *reason;
@property (nonatomic, readonly, copy) BKSHIDEventDeferringTarget *target;

+ (id)ruleForDeferringEventsMatchingPredicate:(id)arg1 toTarget:(id)arg2 withReason:(id)arg3;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_initWithPredicate:(id)arg1 target:(id)arg2 reason:(id)arg3;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)predicate;
- (id)reason;
- (id)target;

@end
