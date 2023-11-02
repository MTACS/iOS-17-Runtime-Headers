
@interface NewsFeed.LikingCommandHandler : NSObject <FCReadingHistoryObserving> {
    void allDislikedArticleIDs;
    void allLikedArticleIDs;
    void bundleSubscriptionManager;
    void paidAccessChecker;
    void readingHistory;
}

- (void).cxx_destruct;
- (id)init;
- (void)readingHistory:(id)arg1 didChangeFeaturesForArticles:(id)arg2;

@end
