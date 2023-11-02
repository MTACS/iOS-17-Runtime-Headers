
@interface TPSCallForwardingRequest : TPSCallClassRequest {
    int  _reason;
}

@property (nonatomic, readonly) int reason;

+ (id)unarchivedObjectClasses;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithSubscriptionContext:(id)arg1 callClass:(int)arg2;
- (id)initWithSubscriptionContext:(id)arg1 reason:(int)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToRequest:(id)arg1;
- (int)reason;

@end
