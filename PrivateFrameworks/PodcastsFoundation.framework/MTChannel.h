
@interface MTChannel : NSManagedObject

@property (nonatomic, retain) NSString *artworkURL;
@property (nonatomic) long long availableShowCount;
@property (nonatomic, retain) NSString *backgroundColor;
@property (nonatomic, retain) NSString *displayType;
@property (nonatomic, readonly) long long followedShowCount;
@property (nonatomic, readonly) bool isMultiShow;
@property (nonatomic, readonly) bool isSingleShow;
@property (nonatomic) double lastPersonalizedRequestDate;
@property (nonatomic) float logoImageHeight;
@property (nonatomic, retain) NSString *logoImageURL;
@property (nonatomic) float logoImageWidth;
@property (nonatomic, retain) NSString *name;
@property (nonatomic, retain) NSSet *podcastUuids;
@property (nonatomic, retain) NSSet *podcasts;
@property (nonatomic, readonly) long long resolvedShowCount;
@property (nonatomic) long long showCount;
@property (nonatomic) long long storeId;
@property (nonatomic) bool subscriptionActive;
@property (nonatomic) double subscriptionEnabledDate;
@property (nonatomic, retain) NSString *subscriptionName;
@property (nonatomic, retain) NSString *subscriptionOfferAppType;
@property (nonatomic, retain) NSString *uberBackgroundImageURL;
@property (nonatomic, retain) NSString *uberBackgroundJoeColor;
@property (nonatomic, retain) NSString *url;

+ (id)createOrFindChannelFromFeedChannelItem:(id)arg1 personalizedRequest:(bool)arg2 context:(id)arg3;
+ (id)predicateForChannelStoreIds:(id)arg1;
+ (id)predicateForChannelWithStoreId:(long long)arg1;
+ (id)predicateForFollowedChannel;
+ (id)predicateForLibraryChannel;
+ (id)predicateForMultiShowChannel;
+ (id)predicateForSingleShowChannel;
+ (id)predicateForSubscribedChannel;
+ (id)sortDescriptorsForLibraryChannelsPage;

- (bool)isMultiShow;
- (bool)isSingleShow;
- (long long)resolvedShowCount;

@end
