
@interface AFSiriAnnouncementRequestCapabilityManager : NSObject <AFAnnouncementRequestCapabilityProvidingDelegate> {
    <AFAnnouncementRequestCapabilityProviding> * _capabilityProvider;
    NSHashTable * _observers;
    long long  _platform;
    NSObject<OS_dispatch_queue> * _queue;
}

+ (id)_candidateAnnounceNotificationTypesFromApp:(id)arg1 withIntentIDs:(id)arg2 notificationContentType:(id)arg3 onPlatform:(long long)arg4;
+ (Class)_classForPlatform:(long long)arg1;
+ (id)_requiredBundleIDsForNotificationAnnouncementType:(long long)arg1;
+ (id)_requiredPlatformsForNotificationAnnouncementType:(long long)arg1;
+ (bool)_supportsAnnouncementType:(long long)arg1 forSupportedIntents:(id)arg2 forBundleId:(id)arg3 onPlatform:(long long)arg4;
+ (long long)notificationAnnouncementTypeForNotificationFromApp:(id)arg1 withIntentIDs:(id)arg2 notificationContent:(id)arg3 onPlatform:(long long)arg4;
+ (id)supportedAnnouncementTypesForBundleId:(id)arg1 onPlatform:(long long)arg2;

- (void).cxx_destruct;
- (void)addObserver:(id)arg1;
- (void)fetchAvailableAnnouncementRequestTypesWithCompletion:(id /* block */)arg1;
- (void)fetchEligibleAnnouncementRequestTypesWithCompletion:(id /* block */)arg1;
- (id)initWithPlatform:(long long)arg1;
- (void)provider:(id)arg1 availableAnnouncementRequestTypesChanged:(unsigned long long)arg2;
- (void)provider:(id)arg1 eligibleAnnouncementRequestTypesChanged:(unsigned long long)arg2;
- (void)removeObserver:(id)arg1;

@end
