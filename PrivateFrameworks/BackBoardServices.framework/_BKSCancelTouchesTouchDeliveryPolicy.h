
@interface _BKSCancelTouchesTouchDeliveryPolicy : BKSTouchDeliveryPolicy {
    NSObject<OS_xpc_object> * _assertionEndpoint;
    unsigned int  _contextId;
    double  _initialTouchTimestamp;
}

@property (nonatomic, readonly) unsigned int contextId;
@property (nonatomic, readonly) double initialTouchTimestamp;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)appendDescriptionToFormatter:(id)arg1;
- (id)assertionEndpoint;
- (unsigned int)contextId;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithContextId:(unsigned int)arg1 initialTouchTimestamp:(double)arg2;
- (double)initialTouchTimestamp;
- (bool)isEqual:(id)arg1;
- (id)matchSharingTouchesPolicy:(id /* block */)arg1 orCancelTouchesPolicy:(id /* block */)arg2 orCombinedPolicy:(id /* block */)arg3;
- (void)setAssertionEndpoint:(id)arg1;

@end
