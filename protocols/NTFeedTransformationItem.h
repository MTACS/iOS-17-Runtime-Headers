
@protocol NTFeedTransformationItem <NSObject, NSCopying>

@required

- (NSDate *)cacheCutoffTimeRelativeDate;
- (NSDate *)cacheExpirationDate;
- (NSString *)clusterID;
- (NTPBFeedItem *)feedItemForHeadlineFetch;
- (<FCFeedTransformationItem> *)feedTransformationItem;
- (NSString *)identifier;
- (bool)needsFeedItemHeadlinesFetch;
- (<NTTodayProtoitem> *)protoitemWithFetchedFeedItemHeadline:(id <FCHeadlineProviding>)arg1;
- (SFSearchResult *)searchResult;
- (unsigned long long)todayItemType;
- (bool)usesDynamicSlotAllocation;

@optional

- (unsigned long long)preferredDynamicSlotAllocation;

@end
