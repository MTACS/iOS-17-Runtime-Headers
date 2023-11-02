
@interface CKContextContentProviderManager : NSObject <NSUserActivityObserver> {
    NSObject<OS_dispatch_queue> * _activityReportingQueue;
    NSHashTable * _providers;
    NSMutableArray * _userActivitiesQueuedForReporting;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)_observeApplicationStateNotifications;
+ (unsigned char)controlCodeForNonce:(unsigned long long)arg1;
+ (bool)isSafariContentProvider;
+ (bool)isSpringBoard;
+ (unsigned long long)optionsForControlCode:(unsigned char)arg1;
+ (id)sharedManager;

- (void).cxx_destruct;
- (void)_dequeueActivityForReporting:(id)arg1;
- (id)_formContextUserActivityFromUserActivity:(id)arg1;
- (void)_hasForegroundActiveContentWithReply:(id /* block */)arg1;
- (bool)_hasQueuedForReportingActivity:(id)arg1;
- (bool)_isActivityReportingAllowedForCurrentBundleIdentifier:(id)arg1;
- (bool)_isDonationAllowedWithControlCode:(unsigned char)arg1;
- (void)_loadContextKitIfNecessaryWithExecutor:(id)arg1;
- (void)_prepareAndDonateUserActivity:(id)arg1;
- (void)_prepareAndExtractContentForUserActivity:(id)arg1 bundleIdentifier:(id)arg2;
- (void)_prepareDonationWithNonce:(unsigned long long)arg1 options:(unsigned long long)arg2 isRecentsCapture:(bool)arg3 andReply:(id /* block */)arg4;
- (void)_prepareDonationWithNonce:(unsigned long long)arg1 options:(unsigned long long)arg2 isRecentsCapture:(bool)arg3 requiringMainQueue:(bool)arg4 andReply:(id /* block */)arg5;
- (void)_queueActivityForReporting:(id)arg1;
- (void)addProvider:(id)arg1;
- (id)init;
- (unsigned long long)providerCount;
- (void)removeProvider:(id)arg1;
- (void)scheduleUserActivityRecordingWithUserActivity:(id)arg1;
- (void)userActivityDidBecomeCurrent:(id)arg1 current:(bool)arg2;
- (void)userActivityWasCreated:(id)arg1;
- (void)userActivityWasInvalidated:(id)arg1;

@end
