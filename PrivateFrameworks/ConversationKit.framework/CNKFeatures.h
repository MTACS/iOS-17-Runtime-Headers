
@interface CNKFeatures : NSObject

@property (nonatomic, readonly) bool isButtonLayoutEnabled;
@property (nonatomic, readonly) bool isDialPadEnabled;
@property (nonatomic, readonly) bool isDominoEnabled;
@property (nonatomic, readonly) bool isHeroImageEnabled;
@property (nonatomic, readonly) bool isHeroTitleEnabled;
@property (nonatomic, readonly) bool isIncomingCallBannerEnabled;
@property (nonatomic, readonly) bool isNameAndPhotoC3Enabled;
@property (nonatomic, readonly) bool isSystemApertureEnabled;
@property (nonatomic, readonly) bool shouldEmbedSwapBanner;
@property (nonatomic, readonly) bool shouldShowFullScreenCallWaiting;

+ (id)sharedInstance;

- (bool)isButtonLayoutEnabled;
- (bool)isDialPadEnabled;
- (bool)isDominoEnabled;
- (bool)isHeroImageEnabled;
- (bool)isHeroTitleEnabled;
- (bool)isIncomingCallBannerEnabled;
- (bool)isNameAndPhotoC3Enabled;
- (bool)isSystemApertureEnabled;
- (bool)shouldEmbedSwapBanner;
- (bool)shouldShowFullScreenCallWaiting;

@end
