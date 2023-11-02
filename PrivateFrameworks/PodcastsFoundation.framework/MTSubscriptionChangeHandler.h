
@interface MTSubscriptionChangeHandler : NSObject {
    <MTLegacyDownloadManagerProtocol> * _downloadManager;
}

@property (nonatomic, retain) <MTLegacyDownloadManagerProtocol> *downloadManager;

- (void).cxx_destruct;
- (void)_unsafeRedownloadEpisodesOnSubscriptionChangeForEpisodeUuids:(id)arg1 channel:(id)arg2;
- (void)_unsafeSendNotificationsForNewlyEntitledEpisodes:(id)arg1 latestEpisodeUUID:(id)arg2 newlyEntitledEpisodeUUIDs:(id)arg3;
- (void)_unsafeUpdateEntitlementStateAndCheckForNewEntitlement:(id)arg1 newlyEntitledEpisodeUUIDs:(id)arg2 latestEpisodeDate:(double*)arg3 latestEpisodeUUID:(id)arg4;
- (void)_unsafeUpdatePriceTypeAndSendNotificationsIfNeededFor:(id)arg1 subscriptionActive:(bool)arg2 episodesToRedownload:(id)arg3;
- (bool)_updateEntitledAttributes:(id)arg1 subscriptionActive:(bool)arg2;
- (id)downloadManager;
- (void)setDownloadManager:(id)arg1;
- (void)unsafeHandleSubscriptionChangeForChannel:(id)arg1 subscriptionBecameActive:(bool)arg2 subscriptionEnabledDate:(double)arg3;

@end
