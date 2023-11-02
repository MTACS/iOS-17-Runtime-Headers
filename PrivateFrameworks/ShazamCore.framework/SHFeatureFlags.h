
@interface SHFeatureFlags : NSObject {
    NSDictionary * _featureFlags;
}

@property (nonatomic, readonly) bool appClipAppendsSubscriptionStatus;
@property (nonatomic, readonly) NSDictionary *featureFlags;
@property (nonatomic, readonly) bool isAppClipEnabled;
@property (nonatomic, readonly) bool isTrackPageEnabled;
@property (nonatomic, readonly) bool trackPageDisplaysShazamUpsell;

- (void).cxx_destruct;
- (bool)appClipAppendsSubscriptionStatus;
- (id)featureFlags;
- (id)initWithConfiguration:(id)arg1;
- (bool)isAppClipEnabled;
- (bool)isTrackPageEnabled;
- (bool)trackPageDisplaysShazamUpsell;

@end
