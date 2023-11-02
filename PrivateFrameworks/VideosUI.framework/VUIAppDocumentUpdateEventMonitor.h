
@interface VUIAppDocumentUpdateEventMonitor : NSObject {
    NSDate * _lastAppDidBecomeActive;
    NSDate * _lastProcesssedPlayActivity;
    NSMapTable * _observerMapTable;
    WLKPlaybackSummary * _pendingPlayActivity;
    bool  _playbackIsActive;
    int  _playbackReportToken;
}

@property (nonatomic, retain) NSDate *lastAppDidBecomeActive;
@property (nonatomic, retain) NSDate *lastProcesssedPlayActivity;
@property (nonatomic, retain) NSMapTable *observerMapTable;
@property (nonatomic) int playbackReportToken;

+ (bool)_isAppRefreshEventType:(id)arg1;
+ (id)sharedMonitor;

- (void).cxx_destruct;
- (void)_handleAccountDidChangeNotification:(id)arg1;
- (void)_handleAppDidBecomeActive:(id)arg1;
- (void)_handleAppDidEnterBackgroundNotification:(id)arg1;
- (void)_handleAppLibraryDidChangeNotification:(id)arg1;
- (void)_handleAppWillEnterForegroundNotification:(id)arg1;
- (void)_handleClearFromPlayHistoryRequestDidFinishNotification:(id)arg1;
- (void)_handleClearPlayHistoryNotification:(id)arg1;
- (void)_handleDeviceDiscoveryDataAvailableNotification:(id)arg1;
- (void)_handleEntitlementsDidChangeNotification:(id)arg1;
- (void)_handleFamilyUpdate:(id)arg1;
- (void)_handleFavoritesRequestDidFinishNotification:(id)arg1;
- (void)_handleFavoritesSyncCompleted:(id)arg1;
- (void)_handleLocationAuthorizationDidChangeNotification:(id)arg1;
- (void)_handleLocationDidChangeNotification:(id)arg1;
- (void)_handleMediaLibraryContentsDidChangeNotification:(id)arg1;
- (void)_handleNowPlayingDidEndNotification:(id)arg1;
- (void)_handleNowPlayingWillStartNotification:(id)arg1;
- (void)_handlePlayHistoryUpdatedNotification:(id)arg1;
- (void)_handlePlaybackReportNotification:(id)arg1;
- (void)_handlePreferredVideoFormatDidChangeNotification:(id)arg1;
- (void)_handlePurchaseFlowDidFinishNotification:(id)arg1;
- (void)_handleRemoveFromPlayHistoryRequestDidFinishNotification:(id)arg1;
- (void)_handleRestrictionsDidChangeNotification:(id)arg1;
- (void)_handleSettingsDidChangeNotification:(id)arg1;
- (void)_handleSubscriptionDidChangeNotification:(id)arg1;
- (void)_handleSyndicationInfoUpdatedNotification:(id)arg1;
- (void)_handleTVSubscriptionEntitlementsChanged:(id)arg1;
- (void)_handleUTSKDidChangeNotification:(id)arg1;
- (void)_handleUpNextLockupArtSettingDidChange:(id)arg1;
- (void)_handleUpNextRequestDidFinishNotification:(id)arg1;
- (void)_handleVPPADidChangeNotification:(id)arg1;
- (void)_handleXPUpNextRequestDidFinishNotification:(id)arg1;
- (id)_init;
- (void)_isPlaybackUIBeingShownDidChange:(id)arg1;
- (void)_notifyObserver:(id)arg1 ofRefreshEvent:(id)arg2;
- (void)_notifyObserversOfEvent:(id)arg1;
- (void)_postPurchaseNotification:(id)arg1 error:(id)arg2;
- (void)_postSubscriptionNotification:(id)arg1 interruptedOfferDetails:(id)arg2 error:(id)arg3;
- (void)addObserver:(id)arg1 forEventDescriptors:(id)arg2;
- (void)addObserver:(id)arg1 forEventDescriptors:(id)arg2 viewController:(id)arg3;
- (void)dealloc;
- (id)init;
- (id)lastAppDidBecomeActive;
- (id)lastProcesssedPlayActivity;
- (id)observerMapTable;
- (int)playbackReportToken;
- (void)removeObserver:(id)arg1;
- (void)setLastAppDidBecomeActive:(id)arg1;
- (void)setLastProcesssedPlayActivity:(id)arg1;
- (void)setObserverMapTable:(id)arg1;
- (void)setPlaybackReportToken:(int)arg1;
- (void)updateDescriptorsForObserver:(id)arg1 eventDescriptors:(id)arg2;

@end
