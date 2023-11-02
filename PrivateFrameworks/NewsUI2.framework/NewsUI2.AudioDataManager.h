
@interface NewsUI2.AudioDataManager : NSObject <FCBundleSubscriptionChangeObserver> {
    void audioPlaylist;
    void bundleSubscriptionManager;
    void completedListeningProcessor;
    void dailyBriefingTrack;
    void feedConfigManager;
    void feedContextFactory;
    void headlineConverter;
    void heroStore;
    void playlistStore;
    void readingHistory;
    void recentlyPlayedStore;
    void recentlyPlayedTracks;
    void state;
    void suggestedTracks;
    void suggestionsStore;
    void topOfFeedTrack;
    void upNextTracks;
    void updateDeduper;
    void updateQueue;
}

- (void).cxx_destruct;
- (void)bundleSubscriptionDidExpire:(id)arg1;
- (void)bundleSubscriptionDidSubscribe:(id)arg1;
- (id)init;

@end
