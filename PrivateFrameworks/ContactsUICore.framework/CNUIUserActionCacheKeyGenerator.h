
@interface CNUIUserActionCacheKeyGenerator : NSObject

+ (id)descriptionOfActionType:(id)arg1;
+ (id)fingerprintOfEmailAddresses:(id)arg1;
+ (id)fingerprintOfInstantMessageAddresses:(id)arg1;
+ (id)fingerprintOfPhoneNumbers:(id)arg1;
+ (id)fingerprintOfPostalAddresses:(id)arg1;
+ (id)fingerprintOfSocialProfiles:(id)arg1;
+ (id)handlesForActionType:(id)arg1 contact:(id)arg2;
+ (id)keyForContact:(id)arg1 actionType:(id)arg2;
+ (id)os_log;
+ (unsigned long long)propertiesForActionType:(id)arg1;

@end
