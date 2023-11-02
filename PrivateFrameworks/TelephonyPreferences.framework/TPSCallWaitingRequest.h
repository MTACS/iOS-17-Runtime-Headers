
@interface TPSCallWaitingRequest : TPSCallClassRequest <TPSSecureObject>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)unarchivedObjectClasses;

- (id)initWithCoder:(id)arg1;
- (id)initWithSubscriptionContext:(id)arg1;
- (id)initWithSubscriptionContext:(id)arg1 callClass:(int)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToRequest:(id)arg1;

@end
