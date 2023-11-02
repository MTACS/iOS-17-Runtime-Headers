
@protocol EXBDisplayProfileDelegate <NSObject>

@required

- (bool)displayProfile:(EXBDisplayProfile *)arg1 shouldConnectToDisplay:(FBSDisplayConfiguration *)arg2;

@optional

- (FBSDisplayConfigurationRequest *)displayProfile:(EXBDisplayProfile *)arg1 initialDisplayConfigurationRequestForDisplay:(FBSDisplayConfiguration *)arg2;
- (void)displayProfile:(EXBDisplayProfile *)arg1 modifyInitialSceneParameters:(FBSMutableSceneParameters *)arg2;
- (UIRootSceneWindow *)displayProfile:(EXBDisplayProfile *)arg1 rootSceneWindowForDisplayConfiguration:(FBSDisplayConfiguration *)arg2;

@end
