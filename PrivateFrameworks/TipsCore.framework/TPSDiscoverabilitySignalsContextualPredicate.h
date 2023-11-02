
@interface TPSDiscoverabilitySignalsContextualPredicate : NSObject <TPSDuetContextualPredicateProtocol>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)contextualPredicateForDeliveryDuetEvent:(id)arg1;
+ (id)predicatesForUserInfoKeyPath:(id)arg1 key:(id)arg2 value:(id)arg3;

@end
