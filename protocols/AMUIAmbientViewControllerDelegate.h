
@protocol AMUIAmbientViewControllerDelegate <NSObject>

@required

- (bool)ambientViewControllerIsAuthenticated:(AMUIAmbientViewController *)arg1;

@optional

- (AMAmbientDefaults *)ambientDefaultsForAmbientViewController:(AMUIAmbientViewController *)arg1;
- (void)ambientViewController:(AMUIAmbientViewController *)arg1 didSetInlineAuthenticationViewVisible:(bool)arg2;
- (void)ambientViewController:(AMUIAmbientViewController *)arg1 didUpdateActiveConfiguration:(PRSPosterConfiguration *)arg2 withMetadata:(NSDictionary *)arg3;
- (void)ambientViewController:(AMUIAmbientViewController *)arg1 isTransitioningSettled:(bool)arg2;
- (void)ambientViewController:(void *)arg1 requestsUnlock:(void *)arg2 withCompletion:(void *)arg3; // needs 3 arg types, found 8: AMUIAmbientViewController *, <AMUnlockRequest> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (<AMAuthenticationHandling> *)ambientViewControllerAuthenticationHandler:(AMUIAmbientViewController *)arg1;
- (NSString *)ambientViewControllerRequestsConnectedChargerId:(AMUIAmbientViewController *)arg1;
- (void)ambientViewControllerWillBeginConfiguration:(AMUIAmbientViewController *)arg1;
- (void)ambientViewControllerWillEndConfiguration:(AMUIAmbientViewController *)arg1;
- (NSArray *)defaultWidgetDescriptorStacksForAmbientViewController:(AMUIAmbientViewController *)arg1;
- (AMUIWidgetHostManager *)widgetHostManagerForAmbientViewController:(AMUIAmbientViewController *)arg1;

@end
