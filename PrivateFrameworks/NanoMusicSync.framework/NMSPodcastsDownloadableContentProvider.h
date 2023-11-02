
@interface NMSPodcastsDownloadableContentProvider : NSObject <ICEnvironmentMonitorObserver, MTDBExtensionAccessObserver, NMSDownloadableContentProvider> {
    <NMSDownloadableContentProviderDelegate> * _delegate;
    bool  _delegateNotificationPending;
    NSPersistentHistoryToken * _lastMergedToken;
    NSObject<OS_dispatch_queue> * _mergeQueue;
    NSObject<OS_dispatch_queue> * _notificationQueue;
    NSObject<OS_dispatch_source> * _persistentHistorySource;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <NMSDownloadableContentProviderDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSPersistentHistoryToken *lastMergedToken;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_changeContainsRelevantChannelChanges:(id)arg1;
- (bool)_changeContainsRelevantEpisodeChanges:(id)arg1;
- (bool)_changeContainsRelevantShowChanges:(id)arg1;
- (bool)_changeContainsRelevantStationChanges:(id)arg1;
- (id)_ctx;
- (void)_handlePersistentStoreRemoteChangeNotification:(id)arg1;
- (void)_handlePodcastsPinningSelectionsDidChangeNotification:(id)arg1;
- (void)_notifyDelegateContentDidChange;
- (void)_notifyDelegateContentDidChangeImmediately;
- (void)_processLatestPersistenHistoryChanges;
- (id)_relevantChannelProperties;
- (void)_resetPersistentHistoryTokenAndNotifyObservers;
- (bool)_shouldMergeHistoryTransaction:(id)arg1;
- (id)createItemEnumerator;
- (id)delegate;
- (void)environmentMonitorDidChangePower:(id)arg1;
- (void)extensionAccessDidChange;
- (id)init;
- (id)lastMergedToken;
- (void)setDelegate:(id)arg1;
- (void)setLastMergedToken:(id)arg1;

@end
