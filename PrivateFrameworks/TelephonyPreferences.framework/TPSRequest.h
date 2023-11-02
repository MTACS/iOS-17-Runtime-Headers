
@interface TPSRequest : NSObject <TPSSecureObject> {
    CTXPCServiceSubscriptionContext * _subscriptionContext;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) CTXPCServiceSubscriptionContext *subscriptionContext;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;
+ (id)unarchivedObjectClasses;
+ (id)unarchivedObjectFromData:(id)arg1 error:(id*)arg2;

- (void).cxx_destruct;
- (id)archivedDataWithError:(id*)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithSubscriptionContext:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToRequest:(id)arg1;
- (void)setSubscriptionContext:(id)arg1;
- (id)subscriptionContext;

@end
