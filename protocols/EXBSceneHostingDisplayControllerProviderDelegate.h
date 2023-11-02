
@protocol EXBSceneHostingDisplayControllerProviderDelegate <NSObject>

@required

- (FBSDisplayConfigurationRequest *)provider:(EXBSceneHostingDisplayControllerProvider *)arg1 initialDisplayConfigurationRequestForDisplay:(FBSDisplayConfiguration *)arg2;
- (void)provider:(EXBSceneHostingDisplayControllerProvider *)arg1 modifyInitialSceneParameters:(FBSMutableSceneParameters *)arg2;
- (UIRootSceneWindow *)provider:(EXBSceneHostingDisplayControllerProvider *)arg1 rootSceneWindowForDisplayConfiguration:(FBSDisplayConfiguration *)arg2;

@end
