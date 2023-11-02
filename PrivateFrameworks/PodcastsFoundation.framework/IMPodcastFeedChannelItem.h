
@interface IMPodcastFeedChannelItem : NSObject <MTFeedChannel> {
    NSString * _artworkURL;
    long long  _availableShowCount;
    NSString * _backgroundColor;
    NSString * _displayType;
    NSString * _fallbackSubscriptionName;
    float  _logoImageHeight;
    NSString * _logoImageURL;
    float  _logoImageWidth;
    NSString * _name;
    long long  _showCount;
    NSString * _storeId;
    NSString * _subscriptionName;
    NSString * _uberBackgroundImageURL;
    NSString * _uberBackgroundJoeColor;
    NSString * _url;
}

@property (nonatomic, retain) NSString *artworkURL;
@property (nonatomic) long long availableShowCount;
@property (nonatomic, retain) NSString *backgroundColor;
@property (nonatomic, retain) NSString *displayType;
@property (nonatomic, retain) NSString *fallbackSubscriptionName;
@property (nonatomic) float logoImageHeight;
@property (nonatomic, retain) NSString *logoImageURL;
@property (nonatomic) float logoImageWidth;
@property (nonatomic, retain) NSString *name;
@property (nonatomic) long long showCount;
@property (nonatomic, retain) NSString *storeId;
@property (nonatomic, retain) NSString *subscriptionName;
@property (nonatomic, retain) NSString *uberBackgroundImageURL;
@property (nonatomic, retain) NSString *uberBackgroundJoeColor;
@property (nonatomic, retain) NSString *url;

- (void).cxx_destruct;
- (id)artworkURL;
- (long long)availableShowCount;
- (id)backgroundColor;
- (id)description;
- (id)displayType;
- (id)fallbackSubscriptionName;
- (bool)isEqual:(id)arg1;
- (float)logoImageHeight;
- (id)logoImageURL;
- (float)logoImageWidth;
- (id)name;
- (void)setArtworkURL:(id)arg1;
- (void)setAvailableShowCount:(long long)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)setDisplayType:(id)arg1;
- (void)setFallbackSubscriptionName:(id)arg1;
- (void)setLogoImageHeight:(float)arg1;
- (void)setLogoImageURL:(id)arg1;
- (void)setLogoImageWidth:(float)arg1;
- (void)setName:(id)arg1;
- (void)setShowCount:(long long)arg1;
- (void)setStoreId:(id)arg1;
- (void)setSubscriptionName:(id)arg1;
- (void)setUberBackgroundImageURL:(id)arg1;
- (void)setUberBackgroundJoeColor:(id)arg1;
- (void)setUrl:(id)arg1;
- (long long)showCount;
- (id)storeId;
- (id)subscriptionName;
- (id)uberBackgroundImageURL;
- (id)uberBackgroundJoeColor;
- (id)url;

@end
