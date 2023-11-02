
@protocol WFNetworkViewProvider <NSObject>

@required

- (UIViewController<WFNetworkView> *)certificateViewControllerWithContext:(id <WFCertificateProviderContext>)arg1;
- (UIViewController<WFNetworkView><WFCredentialsProvider> *)credentialsViewControllerWithContext:(id <WFCredentialsProviderContext>)arg1;
- (UIViewController<WFNetworkView> *)networkDetailsViewControllerWithContext:(id <WFDetailsProviderContext>)arg1;
- (UIViewController<WFNetworkView> *)networkErrorViewControllerWithContext:(id <WFErrorProviderContext>)arg1;

@optional

- (void)didDismissNetworkViewController:(UIViewController<WFNetworkView> *)arg1 forContext:(id <WFProviderContext>)arg2;
- (void)dismissNetworkViewController:(UIViewController<WFNetworkView> *)arg1 forContext:(id <WFProviderContext>)arg2;
- (UIViewController<WFNetworkView> *)networkLockdownModeViewControllerWithContext:(id <WFLockdownModeProviderContext>)arg1;
- (UIViewController<WFOtherNetworkProvider> *)otherNetworkViewControllerWithContext:(id <WFOtherNetworkProviderContext>)arg1;
- (void)presentNetworkViewController:(UIViewController<WFNetworkView> *)arg1 forContext:(id <WFProviderContext>)arg2;

@end
