
@protocol AppStoreKitInternal.LocalizerProtocol <JSExport>

@required

- (NSString *)arcadeWordmarkAssetName;
- (NSString *)decimal:(NSNumber *)arg1;
- (NSString *)decimal:(NSNumber *)arg1 :(long long)arg2;
- (NSString *)fileSize:(NSNumber *)arg1;
- (NSString *)formatDate:(NSString *)arg1 :(NSDate *)arg2;
- (NSString *)formatDateInSentence:(NSString *)arg1 :(NSString *)arg2 :(NSDate *)arg3;
- (NSString *)formatDateWithContext:(NSString *)arg1 :(NSDate *)arg2 :(NSString *)arg3;
- (NSString *)formatDuration:(long long)arg1 :(NSString *)arg2;
- (NSString *)formattedCount:(NSNumber *)arg1;
- (NSString *)formattedCountForPreferredLocale:(NSNumber *)arg1 :(NSString *)arg2;
- (NSString *)identifier;
- (NSString *)relativeDate:(NSDate *)arg1;
- (NSString *)string:(NSString *)arg1;
- (NSString *)stringForPreferredLocale:(NSString *)arg1 :(NSString *)arg2;
- (NSString *)stringWithCount:(NSString *)arg1 :(long long)arg2;
- (NSString *)stringWithCounts:(NSString *)arg1 :(NSArray *)arg2;
- (NSString *)timeAgo:(NSDate *)arg1;
- (NSString *)timeAgoWithContext:(NSDate *)arg1 :(NSString *)arg2;

@end
