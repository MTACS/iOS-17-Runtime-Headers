
@protocol FCTodayReadHistoryItem <NSObject, NSCopying>

@required

- (NSString *)articleID;
- (NSDate *)lastVisitedAt;
- (long long)maxVersionRead;

@end
