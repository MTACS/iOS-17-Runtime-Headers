
@interface TPSCallingLineIdRestrictionSetRequest : TPSCallingLineIdRestrictionRequest {
    long long  _state;
}

@property (nonatomic, readonly) long long state;

+ (id)unarchivedObjectClasses;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithSubscriptionContext:(id)arg1;
- (id)initWithSubscriptionContext:(id)arg1 state:(long long)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToRequest:(id)arg1;
- (long long)state;

@end
