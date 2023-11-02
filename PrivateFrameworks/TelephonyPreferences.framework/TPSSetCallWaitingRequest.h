
@interface TPSSetCallWaitingRequest : TPSCallWaitingRequest {
    bool  _enabled;
}

@property (nonatomic, readonly) bool enabled;

+ (id)unarchivedObjectClasses;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (bool)enabled;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithSubscriptionContext:(id)arg1;
- (id)initWithSubscriptionContext:(id)arg1 enabled:(bool)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToRequest:(id)arg1;

@end
