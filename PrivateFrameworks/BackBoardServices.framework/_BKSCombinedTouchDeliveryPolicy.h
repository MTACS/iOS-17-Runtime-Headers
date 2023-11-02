
@interface _BKSCombinedTouchDeliveryPolicy : BKSTouchDeliveryPolicy {
    NSArray * _policies;
}

@property (nonatomic, readonly) NSArray *policies;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)appendDescriptionToFormatter:(id)arg1;
- (id)assertionEndpoint;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithPolicies:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)matchSharingTouchesPolicy:(id /* block */)arg1 orCancelTouchesPolicy:(id /* block */)arg2 orCombinedPolicy:(id /* block */)arg3;
- (id)policies;
- (void)setAssertionEndpoint:(id)arg1;

@end
