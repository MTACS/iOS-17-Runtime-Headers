
@protocol FCChannelProviding <FCTagProviding>

@required

- (NSString *)backIssuesListID;
- (unsigned long long)channelType;
- (NSArray *)currentIssueIDs;
- (NSString *)defaultSectionID;
- (NSString *)freeFeedIDForSection:(NSString *)arg1 bin:(long long)arg2;
- (bool)isWhitelisted;
- (NSString *)paidFeedIDForSection:(NSString *)arg1 bin:(long long)arg2;
- (NSArray *)recentIssueIDs;
- (NSArray *)sectionIDs;
- (bool)supportsNotifications;

@end
