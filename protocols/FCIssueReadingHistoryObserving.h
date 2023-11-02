
@protocol FCIssueReadingHistoryObserving <NSObject>

@optional

- (void)issueReadingHistoryDidChange:(FCIssueReadingHistory *)arg1 forIssueIDs:(NSArray *)arg2;

@end
