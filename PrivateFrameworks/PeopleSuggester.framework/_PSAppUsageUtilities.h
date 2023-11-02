
@interface _PSAppUsageUtilities : NSObject

+ (id)addBiomeDataToCache:(id)arg1 event:(id)arg2;
+ (id)appUsageDurations;
+ (void)cacheAppUsageDurations:(id)arg1;
+ (void)cacheSharesForEachApp;
+ (id)mostUsedAppBundleIdsUsingPredicate:(id)arg1 knowledgeStore:(id)arg2;
+ (id)mostUsedAppShareExtensionsWithAppBundleIdsToShareExtensionBundleIdsMapping:(id)arg1 sourceBundleId:(id)arg2 sharesFromSourceToTargetBundle:(id)arg3 appUsageDurations:(id)arg4;
+ (id)relativeAppUsageProbabilitiesForCandidateBundleIds:(id)arg1 daysAgo:(long long)arg2 knowledgeStore:(id)arg3;
+ (id)shareExtensionsUsedAndInstalledDaysAgo:(long long)arg1 appBundleIdsToShareExtensionBundleIdsMapping:(id)arg2 knowledgeStore:(id)arg3;
+ (id)sharesFromSourceToTargetBundleValues;
+ (id)suggestionArrayWithArray:(id)arg1 appendingUniqueElementsByBundleIdFromArray:(id)arg2;
+ (id)suggestionsFromAppBundleIds:(id)arg1 appBundleIdsToShareExtensionBundleIdsMapping:(id)arg2;
+ (id)suggestionsFromShareBundleIds:(id)arg1 appBundleIdsToShareExtensionBundleIdsMapping:(id)arg2;

@end
