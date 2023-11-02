
@protocol FCTodaySeenHistoryItem <NSObject, NSCopying>

@required

- (NSString *)articleID;
- (NSDate *)firstSeenAt;
- (NSDate *)firstSeenAtOfMaxVersionSeen;
- (long long)maxVersionSeen;

@end
