
@interface VCActionDonationFetcher : NSObject

+ (id)atxClient;
+ (id)donationFromEvent:(id)arg1;
+ (id)donationFromEvent:(id)arg1 filteringForTopLevel:(bool)arg2;
+ (id)donationWithUUID:(id)arg1;
+ (void)fetchDonationsForApplicationBundleIdentifier:(id)arg1 limit:(unsigned long long)arg2 filteringForTopLevel:(bool)arg3 filteringForIsEligibleForPrediction:(bool)arg4 filteringForRecent:(bool)arg5 completion:(id /* block */)arg6;
+ (void)fetchDonationsForApplicationBundleIdentifier:(id)arg1 limit:(unsigned long long)arg2 shortcutAvailability:(unsigned long long)arg3 completion:(id /* block */)arg4;
+ (void)fetchDonationsWithLimit:(unsigned long long)arg1 filteringForIsEligibleForPrediction:(bool)arg2 completion:(id /* block */)arg3;
+ (id)fetchDonationsWithPredicate:(id)arg1 limit:(unsigned long long)arg2 filteringForTopLevel:(bool)arg3;
+ (id)fetchDonationsWithPredicate:(id)arg1 limit:(unsigned long long)arg2 filteringForTopLevel:(bool)arg3 directAccess:(bool)arg4;
+ (id)fetchEventsWithPredicate:(id)arg1 limit:(unsigned long long)arg2;
+ (id)fetchEventsWithPredicate:(id)arg1 limit:(unsigned long long)arg2 directAccess:(bool)arg3;
+ (id)filterDonations:(id)arg1 forApplicationBundleIdentifier:(id)arg2;
+ (void)getPredicateForIntentsWithApplicationBundleIdentifier:(id)arg1 completionHandler:(id /* block */)arg2;
+ (void)getPredicateForUserActivitiesWithApplicationBundleIdentifier:(id)arg1 filteringForIsEligibleForPrediction:(bool)arg2 completionHandler:(id /* block */)arg3;
+ (id)isEligibleForPredictionPredicate;
+ (id)keyPathForStream:(id)arg1;
+ (id)predicateForShortcutAvailabilityOptions:(unsigned long long)arg1;
+ (bool)shouldFilterDonationsForAppWithApplicationBundleIdentifier:(id)arg1;
+ (bool)shouldKeepAction:(id)arg1 forAppWithBundleIdentifier:(id)arg2 filteringForTopLevel:(bool)arg3;
+ (bool)shouldKeepActionWithAppBundleIdentifierForDisplay:(id)arg1;
+ (void)sourceAppIdentifierArrayForApplicationBundleIdentifier:(id)arg1 completionHandler:(id /* block */)arg2;
+ (id)streams;
+ (id)whitelistedDonationsWithOptions:(unsigned long long)arg1;

@end
