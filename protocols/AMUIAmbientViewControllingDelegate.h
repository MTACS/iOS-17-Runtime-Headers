
@protocol AMUIAmbientViewControllingDelegate <NSObject>

@required

- (AMAmbientDefaults *)ambientDefaultsForViewController:(id <AMUIAmbientViewControlling>)arg1;
- (<AMUnlockRequest> *)createUnlockRequestForViewController:(id <AMUIAmbientViewControlling>)arg1;
- (NSArray *)defaultWidgetDescriptorStacksForViewController:(id <AMUIAmbientViewControlling>)arg1;
- (void)requestUnlockForViewController:(void *)arg1 withRequest:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: <AMUIAmbientViewControlling> *, <AMUnlockRequest> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)viewController:(id <AMUIAmbientViewControlling>)arg1 didUpdateActiveConfigurationMetadata:(NSDictionary *)arg2;
- (void)viewControllerWillBeginConfiguration:(id <AMUIAmbientViewControlling>)arg1;
- (void)viewControllerWillBeginShowingTemporaryOverlay:(id <AMUIAmbientViewControlling>)arg1;
- (void)viewControllerWillEndConfiguration:(id <AMUIAmbientViewControlling>)arg1;
- (void)viewControllerWillEndShowingTemporaryOverlay:(id <AMUIAmbientViewControlling>)arg1;
- (AMUIWidgetHostManager *)widgetHostManagerForViewController:(id <AMUIAmbientViewControlling>)arg1;

@end
