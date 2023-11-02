
@interface NewsUI2.FeedHeadlinePlaybackCommandHandler : NSObject <FCReadingHistoryObserving> {
    void audioPlaybackContext;
    void commandCenter;
    void playbackConductor;
    void readingHistory;
}

- (void).cxx_destruct;
- (id)init;
- (void)readingHistory:(id)arg1 didChangeFeaturesForArticles:(id)arg2;

@end
