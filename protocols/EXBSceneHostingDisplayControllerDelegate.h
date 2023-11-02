
@protocol EXBSceneHostingDisplayControllerDelegate <NSObject>

@required

- (FBSDisplayConfigurationRequest *)controller:(EXBSceneHostingDisplayController *)arg1 initialDisplayConfigurationRequestForDisplay:(FBSDisplayConfiguration *)arg2;
- (void)controller:(EXBSceneHostingDisplayController *)arg1 modifyInitialSceneParameters:(FBSMutableSceneParameters *)arg2;
- (UIRootSceneWindow *)controller:(EXBSceneHostingDisplayController *)arg1 rootSceneWindowForDisplayConfiguration:(FBSDisplayConfiguration *)arg2;

@end
