
@interface VSSubscriptionFetchOptionsValidator : NSObject {
    VSSubscriptionPredicateFactory * _predicateFactory;
}

@property (nonatomic, retain) VSSubscriptionPredicateFactory *predicateFactory;

- (void).cxx_destruct;
- (id)predicateFactory;
- (void)setPredicateFactory:(id)arg1;
- (id)standardizedFetchOptionsFromOptions:(id)arg1 withSecurityTask:(id)arg2;
- (id)subscriptionFetchOptionsAllowedForSecurityTask:(id)arg1;

@end
