
@protocol FCFeedTransformationItem <NSObject, FCFeedPersonalizingItem>

@required

- (NSString *)articleID;
- (bool)canBePurchased;
- (NSString *)clusterID;
- (unsigned long long)contentType;
- (unsigned long long)feedHalfLifeMilliseconds;
- (NSString *)feedID;
- (double)globalUserFeedback;
- (bool)hasVideoStillImage;
- (bool)isExplicitContent;
- (bool)isFromBlockedStorefront;
- (bool)isSponsored;
- (long long)minimumNewsVersion;
- (unsigned long long)order;
- (unsigned long long)publishDateMilliseconds;
- (long long)publisherArticleVersion;
- (NSString *)sourceChannelID;

@optional

- (unsigned long long)role;
- (<FCChannelProviding> *)sourceChannel;
- (unsigned long long)storyType;

@end
