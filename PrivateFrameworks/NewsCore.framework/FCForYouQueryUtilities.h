
@interface FCForYouQueryUtilities : NSObject

+ (id)_filterTagsForQuerying:(id)arg1 withMutedTagIDs:(id)arg2;
+ (id)feedRequestsForTags:(id)arg1 tagBinProvider:(id /* block */)arg2 hiddenFeedIDs:(id)arg3 allowPaidBundleFeed:(bool)arg4 purchasedTagIDs:(id)arg5 bundleSubscriptionProvider:(id)arg6 configuration:(id)arg7 maxCount:(unsigned long long)arg8 feedRange:(id)arg9 sidecar:(id)arg10 isRunningPPT:(bool)arg11;
+ (id)feedRequestsForTags:(id)arg1 tagBinProvider:(id /* block */)arg2 hiddenFeedIDs:(id)arg3 purchasedTagIDs:(id)arg4 bundleSubscriptionProvider:(id)arg5 configuration:(id)arg6 maxCount:(unsigned long long)arg7 feedRange:(id)arg8 sidecar:(id)arg9 options:(unsigned long long)arg10;
+ (void)fetchTagsForQueryingWithSubscribedTagIDs:(id)arg1 mutedTagIDs:(id)arg2 purchasedTagIDs:(id)arg3 bundleSubscriptionProvider:(id)arg4 configuration:(id)arg5 contentContext:(id)arg6 fallbackToPresubscribedTagIDs:(bool)arg7 qualityOfService:(long long)arg8 completionHandler:(id /* block */)arg9;
+ (void)fetchTagsForQueryingWithSubscribedTags:(id)arg1 mutedTagIDs:(id)arg2 purchasedTagIDs:(id)arg3 bundleSubscriptionProvider:(id)arg4 configuration:(id)arg5 contentContext:(id)arg6 fallbackToPresubscribedTagIDs:(bool)arg7 qualityOfService:(long long)arg8 completionHandler:(id /* block */)arg9;

@end
