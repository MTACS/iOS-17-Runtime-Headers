
@interface TPSSetCallForwardingRequest : TPSRequest {
    CTCallForwardingValue * _value;
}

@property (nonatomic, readonly) CTCallForwardingValue *value;

+ (id)unarchivedObjectClasses;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithSubscriptionContext:(id)arg1;
- (id)initWithSubscriptionContext:(id)arg1 value:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToRequest:(id)arg1;
- (id)value;

@end
