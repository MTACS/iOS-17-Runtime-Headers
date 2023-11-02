
@interface AMSBag_iTunesStoreUI : NSObject <AMSDeviceOfferBagContract>

@property (nonatomic, readonly) AMSBagValue *appleMusicDeviceOfferDeepLink;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) AMSBagValue *iCloudDeviceOfferDeepLink;
@property (readonly) Class superclass;

- (id)appleMusicDeviceOfferDeepLink;
- (id)iCloudDeviceOfferDeepLink;

@end
