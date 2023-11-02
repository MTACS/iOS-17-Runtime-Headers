
@interface FCCommand : NSObject <NSSecureCoding>

+ (bool)supportsSecureCoding;

- (bool)canCoalesceWithCommand:(id)arg1;
- (void)coalesceWithCommand:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)executeWithContext:(id)arg1 delegate:(id)arg2 qualityOfService:(long long)arg3;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)statusForCloudKitError:(id)arg1;

@end
