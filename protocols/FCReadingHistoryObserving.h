
@protocol FCReadingHistoryObserving <NSObject>

@optional

- (void)readingHistory:(FCReadingHistory *)arg1 didAddArticlesWithIDs:(NSArray *)arg2;
- (void)readingHistory:(void *)arg1 didAddHeadline:(void *)arg2 fromGroupType:(void *)arg3 swipedToArticle:(void *)arg4 withOnScreenChecker:(void *)arg5; // needs 5 arg types, found 9: FCReadingHistory *, <FCHeadlineProviding> *, long long, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, bool, id /* block */, void*
- (void)readingHistory:(FCReadingHistory *)arg1 didChangeFeaturesForArticles:(NSDictionary *)arg2;
- (void)readingHistory:(FCReadingHistory *)arg1 didChangeOffensiveStateForArticlesWithIDs:(NSArray *)arg2;
- (void)readingHistory:(FCReadingHistory *)arg1 didRemoveArticlesWithIDs:(NSArray *)arg2;
- (void)readingHistoryDidClear:(FCReadingHistory *)arg1;
- (void)readingHistoryLikelyClearedRemotely:(FCReadingHistory *)arg1;

@end
