
@interface NTFeedTransformationWebEmbedItem : NSObject <NTFeedTransformationItem> {
    NTPBTodaySectionConfigWebEmbed * _webEmbed;
}

@property (nonatomic, readonly, copy) NSDate *cacheCutoffTimeRelativeDate;
@property (nonatomic, readonly, copy) NSDate *cacheExpirationDate;
@property (nonatomic, readonly, copy) NSString *clusterID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NTPBFeedItem *feedItemForHeadlineFetch;
@property (nonatomic, readonly) <FCFeedTransformationItem> *feedTransformationItem;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly) bool needsFeedItemHeadlinesFetch;
@property (nonatomic, readonly) unsigned long long preferredDynamicSlotAllocation;
@property (nonatomic, readonly, copy) SFSearchResult *searchResult;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned long long todayItemType;
@property (nonatomic, readonly) bool usesDynamicSlotAllocation;
@property (nonatomic, readonly, copy) NTPBTodaySectionConfigWebEmbed *webEmbed;

- (void).cxx_destruct;
- (id)cacheCutoffTimeRelativeDate;
- (id)cacheExpirationDate;
- (id)clusterID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)feedItemForHeadlineFetch;
- (id)feedTransformationItem;
- (unsigned long long)hash;
- (id)identifier;
- (id)init;
- (id)initWithWebEmbed:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)needsFeedItemHeadlinesFetch;
- (unsigned long long)preferredDynamicSlotAllocation;
- (id)protoitemWithFetchedFeedItemHeadline:(id)arg1;
- (id)searchResult;
- (unsigned long long)todayItemType;
- (bool)usesDynamicSlotAllocation;
- (id)webEmbed;

@end
