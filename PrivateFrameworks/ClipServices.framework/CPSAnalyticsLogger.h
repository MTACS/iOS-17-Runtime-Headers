
@interface CPSAnalyticsLogger : NSObject {
    NSObject<OS_dispatch_queue> * _analyticsSynchronizationQueue;
}

+ (id)sharedLogger;

- (void).cxx_destruct;
- (void)_sendEventLazyWithName:(id)arg1 clipBundleIdentifier:(id)arg2 payload:(id)arg3;
- (void)didAgeOutClip:(id)arg1;
- (void)didCancelInterstitialForClip:(id)arg1 withEvent:(long long)arg2 didShowCardInline:(bool)arg3;
- (void)didDiscoverClip:(id)arg1 event:(id)arg2 alreadyInstalled:(bool)arg3;
- (void)didManuallyDeleteClip:(id)arg1 withEvent:(long long)arg2;
- (void)didPresentInvocationCardForClip:(id)arg1 adamID:(id)arg2 sourceBundleIdentifier:(id)arg3 referrerBundleIdentifier:(id)arg4 event:(id)arg5 url:(id)arg6 didShowCardInline:(bool)arg7;
- (void)didUpgradeToFullAppFromClip:(id)arg1;
- (void)didUseClip:(id)arg1 atLatitude:(double)arg2 longitude:(double)arg3;
- (id)initWithQueue:(id)arg1;
- (void)recordClientClipRequestWithBundleID:(id)arg1 launchReason:(id)arg2;
- (void)recordClientMetadataRequestWithBundleID:(id)arg1 launchReason:(id)arg2;
- (void)recordDidActivateCardWithBundleID:(id)arg1 launchReason:(id)arg2 deviceLocked:(bool)arg3 didShowCardInline:(bool)arg4 isOutOfBoxURL:(bool)arg5;
- (void)recordDidInstallWithBundleID:(id)arg1 succeeded:(bool)arg2;
- (void)recordDidOpenAppClipWithBundleID:(id)arg1 launchReason:(id)arg2 didShowCard:(bool)arg3 didOpenFullApp:(bool)arg4 didInstallAppClip:(bool)arg5 isOutOfBoxURL:(bool)arg6;
- (void)recordDidShowErrorWithBundleID:(id)arg1 place:(id)arg2 errorCode:(long long)arg3;
- (void)recordDidShowLocationConsentWithBundleID:(id)arg1 response:(unsigned long long)arg2;
- (void)recordDidTapAppStoreBannerWithBundleID:(id)arg1;
- (void)recordDidTapOpenButtonInCardWithBundleID:(id)arg1 metadata:(id)arg2 launchReason:(id)arg3 launchOptions:(id)arg4 didShowCardInline:(bool)arg5;
- (void)recordReportProblemStepCompletedWithBundleID:(id)arg1 problemLabel:(id)arg2 event:(long long)arg3;

@end
