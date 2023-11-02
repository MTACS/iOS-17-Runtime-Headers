
@interface VSSubscriptionValueTransformer : NSValueTransformer

+ (id)_legacySubscriptionInfoForUserAccount:(id)arg1;
+ (id)_subscriptionForUserAccount:(id)arg1;
+ (bool)_subscriptionIsCoreSpotlight:(id)arg1;
+ (void)_updateUserAccount:(id)arg1 fromJSONWithSubscription:(id)arg2;
+ (id)_userAccountWithLegacySubscriptionPrimitives:(id)arg1;
+ (bool)allowsReverseTransformation;
+ (Class)transformedValueClass;

- (id)reverseTransformedValue:(id)arg1;
- (id)transformedValue:(id)arg1;

@end
