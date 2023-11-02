
@protocol FCIssueReadingHistoryItem <NSObject, FCKeyValueStoreCoding, NSCopying, NSMutableCopying>

@required

- (CKRecord *)asCKRecord;
- (NSString *)identifier;
- (NSString *)issueID;
- (NSDate *)lastBadgedDate;
- (NSDate *)lastEngagedDate;
- (NSDate *)lastRemovedFromMyMagazinesDate;
- (NSDate *)lastSeenDate;
- (NSString *)lastVisitedArticleID;
- (NSDate *)lastVisitedDate;
- (NSString *)lastVisitedPageID;

@end
