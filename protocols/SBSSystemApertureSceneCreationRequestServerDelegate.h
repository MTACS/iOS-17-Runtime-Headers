
@protocol SBSSystemApertureSceneCreationRequestServerDelegate <NSObject>

@required

- (void)sceneCreationRequestServer:(SBSSystemApertureSceneCreationRequestServer *)arg1 didReceiveRequestForSystemApertureSceneWithClientIdentity:(FBSSceneClientIdentity *)arg2 requestIdentifier:(NSString *)arg3;

@end
