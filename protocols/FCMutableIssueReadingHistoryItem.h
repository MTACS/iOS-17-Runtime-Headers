
@protocol FCMutableIssueReadingHistoryItem <FCIssueReadingHistoryItem>

@required

- (NSString *)identifier;
- (NSString *)issueID;
- (NSDate *)lastBadgedDate;
- (NSDate *)lastEngagedDate;
- (NSDate *)lastRemovedFromMyMagazinesDate;
- (NSDate *)lastSeenDate;
- (NSString *)lastVisitedArticleID;
- (NSDate *)lastVisitedDate;
- (NSString *)lastVisitedPageID;
- (void)setIdentifier:(NSString *)arg1;
- (void)setIssueID:(NSString *)arg1;
- (void)setLastBadgedDate:(NSDate *)arg1;
- (void)setLastEngagedDate:(NSDate *)arg1;
- (void)setLastRemovedFromMyMagazinesDate:(NSDate *)arg1;
- (void)setLastSeenDate:(NSDate *)arg1;
- (void)setLastVisitedArticleID:(NSString *)arg1;
- (void)setLastVisitedDate:(NSDate *)arg1;
- (void)setLastVisitedPageID:(NSString *)arg1;

@end
