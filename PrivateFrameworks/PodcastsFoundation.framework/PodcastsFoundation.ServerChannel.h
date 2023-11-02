
@interface PodcastsFoundation.ServerChannel : NSObject <MTFeedChannel, PodcastsFoundation.MediaObject> {
    void attributes;
    void href;
    void id;
    void relationships;
    void type;
}

@property (nonatomic, readonly) NSString *artworkURL;
@property (nonatomic, readonly) long long availableShowCount;
@property (nonatomic, readonly) NSString *backgroundColor;
@property (nonatomic, readonly) NSString *displayType;
@property (nonatomic, readonly) NSString *fallbackSubscriptionName;
@property (nonatomic, readonly) NSString *id;
@property (nonatomic, readonly) float logoImageHeight;
@property (nonatomic, readonly) NSString *logoImageURL;
@property (nonatomic, readonly) float logoImageWidth;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) long long showCount;
@property (nonatomic, readonly) NSString *storeId;
@property (nonatomic, readonly) NSString *subscriptionName;
@property (nonatomic, readonly) NSString *type;
@property (nonatomic, readonly) NSString *uberBackgroundImageURL;
@property (nonatomic, readonly) NSString *uberBackgroundJoeColor;
@property (nonatomic, readonly) NSString *url;

- (void).cxx_destruct;
- (id)artworkURL;
- (long long)availableShowCount;
- (id)backgroundColor;
- (id)displayType;
- (id)fallbackSubscriptionName;
- (id)id;
- (float)logoImageHeight;
- (id)logoImageURL;
- (float)logoImageWidth;
- (id)name;
- (long long)showCount;
- (id)storeId;
- (id)subscriptionName;
- (id)type;
- (id)uberBackgroundImageURL;
- (id)uberBackgroundJoeColor;
- (id)url;

@end
