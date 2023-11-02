
@interface VideosUI.UnifiedMessagingSignalProvider : NSObject {
    void downloadAndPurchaseAccessQueue;
    void engagement;
    void hasEventForTVPlusonATV;
    void hasEventForTVPlusonLargeTV;
    void hasFavoriteTeamsAdded;
    void hasFavoriteTeamsRemoved;
    void hasItunesDownloads;
    void hasItunesPurchases;
    void hasSubscriptionDownloads;
    void lastPlaybackEvent;
    void mediaLibrary;
    void notifAuthStatus;
    void playbackElapsedTime;
    void signalLock;
    void upsellOfferPresented;
}

- (void).cxx_destruct;
- (void)dealloc;
- (void)debounceActiveDownloadButtonDidChange;
- (void)handleActiveDownloadButtonsDidChange:(id)arg1;
- (void)handleAppDidFinishLoading;
- (void)handleDownloadDidStart;
- (void)handleGDPRDidAccept;
- (void)handleHasEventforTVPlus:(id)arg1;
- (void)handleHasFavoriteTeamsDidChange:(id)arg1;
- (void)handleIsPlaybackUIBeingShownDidChange:(id)arg1;
- (void)handleLibraryContentsDidChange:(id)arg1;
- (void)handleLocationStatusDidChange:(id)arg1;
- (void)handleNotifAuthStatusDidChange;
- (id)init;

@end
