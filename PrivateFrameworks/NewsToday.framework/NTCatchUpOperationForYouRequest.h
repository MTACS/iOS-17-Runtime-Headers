
@interface NTCatchUpOperationForYouRequest : NSObject <NSCopying> {
    bool  _allowPaidBundleFeed;
    <FCBundleSubscriptionProviderType> * _bundleSubscriptionProvider;
    long long  _cutoffTime;
    long long  _fetchingBin;
    unsigned long long  _headlinesPerFeedFetchCount;
    NSSet * _hiddenFeedIDs;
    double  _minimumUpdateInterval;
    NSSet * _mutedTagIDs;
    NSSet * _purchasedTagIDs;
    NSSet * _subscribedTagIDs;
    NSString * _throttlingIdentifier;
    NSString * _topStoriesChannelID;
}

@property (nonatomic, readonly) bool allowPaidBundleFeed;
@property (nonatomic, readonly, copy) <FCBundleSubscriptionProviderType> *bundleSubscriptionProvider;
@property (nonatomic, readonly) long long cutoffTime;
@property (nonatomic, readonly) long long fetchingBin;
@property (nonatomic, readonly) unsigned long long headlinesPerFeedFetchCount;
@property (nonatomic, readonly, copy) NSSet *hiddenFeedIDs;
@property (nonatomic, readonly) double minimumUpdateInterval;
@property (nonatomic, readonly, copy) NSSet *mutedTagIDs;
@property (nonatomic, readonly, copy) NSSet *purchasedTagIDs;
@property (nonatomic, readonly, copy) NSSet *subscribedTagIDs;
@property (nonatomic, readonly, copy) NSString *throttlingIdentifier;
@property (nonatomic, readonly, copy) NSString *topStoriesChannelID;

- (void).cxx_destruct;
- (bool)allowPaidBundleFeed;
- (id)bundleSubscriptionProvider;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (long long)cutoffTime;
- (long long)fetchingBin;
- (unsigned long long)headlinesPerFeedFetchCount;
- (id)hiddenFeedIDs;
- (id)init;
- (id)initWithForYouTodaySectionSpecificConfig:(id)arg1 appConfiguration:(id)arg2 topStoriesChannelID:(id)arg3 hiddenFeedIDs:(id)arg4 allowPaidBundleFeed:(bool)arg5 mutedTagIDs:(id)arg6 purchasedTagIDs:(id)arg7 subscribedTagIDs:(id)arg8 bundleSubscriptionProvider:(id)arg9 throttlingIdentifier:(id)arg10;
- (double)minimumUpdateInterval;
- (id)mutedTagIDs;
- (id)purchasedTagIDs;
- (id)subscribedTagIDs;
- (id)throttlingIdentifier;
- (id)topStoriesChannelID;

@end
