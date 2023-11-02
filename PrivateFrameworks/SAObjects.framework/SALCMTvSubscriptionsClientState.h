
@interface SALCMTvSubscriptionsClientState : SAAceClientState

@property (nonatomic, copy) NSArray *subscriptions;

+ (id)deliveryDeadline;
+ (id)persistencePolicy;
+ (id)syncKey;
+ (id)tvSubscriptionsClientState;
+ (id)tvSubscriptionsClientStateWithDictionary:(id)arg1 context:(id)arg2;
+ (id)uniqueObjectIdentifier;

- (id)encodedClassName;
- (id)groupIdentifier;
- (void)setSubscriptions:(id)arg1;
- (id)subscriptions;

@end
