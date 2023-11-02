
@interface HMTriggerDeleteAfterExecutionPolicy : HMTriggerDeletePolicy

+ (id)deleteAfterExecutionPolicy;
+ (bool)supportsSecureCoding;

- (id)_init;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithPayload:(id)arg1 payload:(id)arg2;

@end
