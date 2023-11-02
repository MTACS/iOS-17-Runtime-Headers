
@protocol BNBannerSourceListenerPresentableDelegate <NSObject>

@required

- (bool)bannerSourceListenerPresentable:(id <BNBannerSourceListenerPresentable>)arg1 isConnectingProcessAuthorized:(BSProcessHandle *)arg2 error:(out id*)arg3;
- (bool)bannerSourceListenerPresentableShouldEnablePresentableContextInterface:(id <BNBannerSourceListenerPresentable>)arg1;

@end
