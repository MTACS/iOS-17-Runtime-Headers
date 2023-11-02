
@interface SKAStatusSubscriptionManager : NSObject <SKAStatusSubscriptionManaging> {
    NSMapTable * _activePresenceSubscriptionsByClient;
    NSMapTable * _activeTransientSubscriptionsByClient;
    <SKAChannelManaging> * _channelManager;
    <SKADatabaseManaging> * _databaseManager;
    NSObject<OS_dispatch_queue> * _internalWorkQueue;
    <SKAPushManaging> * _pushManager;
}

@property (nonatomic, retain) NSMapTable *activePresenceSubscriptionsByClient;
@property (nonatomic, retain) NSMapTable *activeTransientSubscriptionsByClient;
@property (nonatomic, retain) <SKAChannelManaging> *channelManager;
@property (nonatomic, retain) <SKADatabaseManaging> *databaseManager;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *internalWorkQueue;
@property (nonatomic, retain) <SKAPushManaging> *pushManager;
@property (readonly) Class superclass;

+ (id)_tooManySubscriptionsError;
+ (id)logger;

- (void).cxx_destruct;
- (bool)_activePresenceAssertionsExist;
- (id)_activePresenceSubscriptionsForClient:(id)arg1;
- (bool)_activeTransientAssertionsExist;
- (id)_activeTransientSubscriptionsForClient:(id)arg1;
- (bool)_addPresenceSubscriptionAssertionForClient:(id)arg1 subscriptionIdentifier:(id)arg2;
- (bool)_addTransientSubscriptionAssertionForClient:(id)arg1 subscriptionIdentifier:(id)arg2;
- (id)_allPersonalChannelIdentifiersRequiringSelfSubscriptionWithDatabaseContext:(id)arg1;
- (id)_enforceSubscriptionsHardCapOnSubscriptionIdentifiers:(id)arg1;
- (id)_fetchAllActivePresenceSubscriptions;
- (id)_fetchAllActiveSubscriptionAssertionsWithCache;
- (id)_fetchAllClientActiveSubscriptionAssertions;
- (id)_filterSubscriptionIdentifierToPresence:(id)arg1;
- (id)_filterSubscriptionIdentifierToStatus:(id)arg1;
- (long long)_hardMaxSubscriptionCount;
- (void)_markCacheSubscriptionDateForChannelIdentifier:(id)arg1;
- (long long)_maxPresenceSubscriptionCacheCount;
- (long long)_maxSubscriptionCacheCount;
- (id)_recentlyReleasedTransientSubscriptionAssertionIdentifiersExcludingSubscriptionIdentifiers:(id)arg1 count:(long long)arg2 presenceCount:(long long)arg3 databaseContext:(id)arg4;
- (bool)_removePresenceSubscriptionAssertionForClient:(id)arg1 subscriptionIdentifier:(id)arg2;
- (bool)_removeTransientSubscriptionAssertionForClient:(id)arg1 subscriptionIdentifier:(id)arg2;
- (id)_sortAndDedupeSubscriptionIdentifiers:(id)arg1;
- (id)_statusTypeIdentifiersRequiringSelfSubscription;
- (double)_subscriptionTTL;
- (bool)activePresenceSubscriptionAssertionsExistForChannelIdentifier:(id)arg1;
- (id)activePresenceSubscriptionsByClient;
- (id)activeTransientSubscriptionsByClient;
- (void)allStatusSubscriptionIdentifiersWithActiveSubscriptionsWithCompletion:(id /* block */)arg1;
- (void)allSubscriptionIdentifiersWithActiveAssertionsForStatusTypeIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (id)channelManager;
- (id)databaseManager;
- (id)initWithDatabaseManager:(id)arg1 channelManager:(id)arg2 pushManager:(id)arg3;
- (id)internalWorkQueue;
- (id)pushManager;
- (void)releaseAllPresenceSubscriptionAssertionsAssociatedWithClient:(id)arg1 completion:(id /* block */)arg2;
- (void)releaseAllTransientSubscriptionAssertionsAssociatedWithClient:(id)arg1 completion:(id /* block */)arg2;
- (void)releasePersistentSubscriptionAssertionForSubscriptionIdentifier:(id)arg1 statusTypeIdentifier:(id)arg2 applicationIdentifier:(id)arg3 completion:(id /* block */)arg4;
- (void)releasePresenceSubscriptionAssertionForSubscriptionIdentifier:(id)arg1 client:(id)arg2 completion:(id /* block */)arg3;
- (void)releaseTransientSubscriptionAssertionForSubscriptionIdentifier:(id)arg1 statusTypeIdentifier:(id)arg2 client:(id)arg3 completion:(id /* block */)arg4;
- (void)retainPersistentSubscriptionAssertionForSubscriptionIdentifier:(id)arg1 statusTypeIdentifier:(id)arg2 applicationIdentifier:(id)arg3 completion:(id /* block */)arg4;
- (void)retainPresenceSubscriptionAssertionForSubscriptionIdentifier:(id)arg1 client:(id)arg2 completion:(id /* block */)arg3;
- (void)retainTransientSubscriptionAssertionForSubscriptionIdentifier:(id)arg1 statusTypeIdentifier:(id)arg2 client:(id)arg3 completion:(id /* block */)arg4;
- (void)setActivePresenceSubscriptionsByClient:(id)arg1;
- (void)setActiveTransientSubscriptionsByClient:(id)arg1;
- (void)setChannelManager:(id)arg1;
- (void)setDatabaseManager:(id)arg1;
- (void)setInternalWorkQueue:(id)arg1;
- (void)setPushManager:(id)arg1;
- (void)updateRegisteredSubscriptionsForActiveAssertionsWithCompletion:(id /* block */)arg1;

@end
