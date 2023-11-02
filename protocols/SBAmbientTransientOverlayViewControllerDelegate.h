
@protocol SBAmbientTransientOverlayViewControllerDelegate <NSObject>

@required

- (AMAmbientDefaults *)ambientDefaultsForAmbientTransientOverlayViewController:(SBAmbientTransientOverlayViewController *)arg1;
- (void)ambientTransientOverlayViewController:(SBAmbientTransientOverlayViewController *)arg1 didSetInlineAuthenticationViewVisible:(bool)arg2;
- (void)ambientTransientOverlayViewController:(SBAmbientTransientOverlayViewController *)arg1 didUpdateActiveConfiguration:(PRSPosterConfiguration *)arg2 withMetadata:(NSDictionary *)arg3;
- (void)ambientTransientOverlayViewController:(SBAmbientTransientOverlayViewController *)arg1 viewDidAppear:(bool)arg2;
- (void)ambientTransientOverlayViewController:(SBAmbientTransientOverlayViewController *)arg1 viewDidDisappear:(bool)arg2;
- (void)ambientTransientOverlayViewController:(SBAmbientTransientOverlayViewController *)arg1 viewWillAppear:(bool)arg2;
- (void)ambientTransientOverlayViewController:(SBAmbientTransientOverlayViewController *)arg1 viewWillDisappear:(bool)arg2;
- (NSString *)ambientTransientOverlayViewControllerRequestsConnectedChargerId:(SBAmbientTransientOverlayViewController *)arg1;
- (void)ambientTransientOverlayViewControllerRequestsDismissal:(SBAmbientTransientOverlayViewController *)arg1;
- (void)ambientTransientOverlayViewControllerWillBeginConfiguration:(SBAmbientTransientOverlayViewController *)arg1;
- (void)ambientTransientOverlayViewControllerWillEndConfiguration:(SBAmbientTransientOverlayViewController *)arg1;
- (NSArray *)defaultWidgetDescriptorStacksForAmbientTransientOverlayViewController:(SBAmbientTransientOverlayViewController *)arg1;
- (AMUIWidgetHostManager *)widgetHostManagerForAmbientTransientOverlayViewController:(SBAmbientTransientOverlayViewController *)arg1;

@end
