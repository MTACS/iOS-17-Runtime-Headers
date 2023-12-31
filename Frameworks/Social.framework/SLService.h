
@interface SLService : NSObject

+ (id)allServices;
+ (id)serviceForServiceType:(id)arg1;

- (id)accountType;
- (id)activityImage;
- (id)activityTitle;
- (void)addExtraParameters:(id)arg1 forRequest:(id)arg2;
- (id)composeViewController;
- (bool)hasAccounts;
- (bool)isFirstClassService;
- (long long)maximumImageCount;
- (long long)maximumImageDataSize;
- (long long)maximumURLCount;
- (long long)maximumVideoCount;
- (long long)maximumVideoDataSize;
- (long long)maximumVideoTimeLimit;
- (id)serviceType;
- (bool)supportsImageURL:(id)arg1;
- (bool)supportsVideoURL:(id)arg1;

@end
