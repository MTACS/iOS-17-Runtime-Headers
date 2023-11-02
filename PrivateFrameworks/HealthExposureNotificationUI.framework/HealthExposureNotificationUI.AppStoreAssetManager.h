
@interface HealthExposureNotificationUI.AppStoreAssetManager : NSObject

+ (void)accessAppFor:(id)arg1 presentingViewController:(id)arg2 completion:(id /* block */)arg3;
+ (void)fetchAssetForAppBundleId:(id)arg1 completion:(id /* block */)arg2;
+ (void)fetchAssetNameForAppBundleId:(id)arg1 completion:(id /* block */)arg2;
+ (void)openAppStoreFromViewController:(id)arg1;
+ (void)presentAppStoreProductPage:(id)arg1 from:(id)arg2;

- (id)init;

@end
