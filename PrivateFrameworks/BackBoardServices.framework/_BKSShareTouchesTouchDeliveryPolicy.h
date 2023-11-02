
@interface _BKSShareTouchesTouchDeliveryPolicy : BKSTouchDeliveryPolicy {
    NSObject<OS_xpc_object> * _assertionEndpoint;
    unsigned int  _childContextId;
    unsigned int  _hostContextId;
}

@property (nonatomic, readonly) unsigned int childContextId;
@property (nonatomic, readonly) unsigned int hostContextId;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)appendDescriptionToFormatter:(id)arg1;
- (id)assertionEndpoint;
- (unsigned int)childContextId;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (unsigned int)hostContextId;
- (id)initWithChildContextId:(unsigned int)arg1 hostContextId:(unsigned int)arg2;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)matchSharingTouchesPolicy:(id /* block */)arg1 orCancelTouchesPolicy:(id /* block */)arg2 orCombinedPolicy:(id /* block */)arg3;
- (void)setAssertionEndpoint:(id)arg1;

@end
