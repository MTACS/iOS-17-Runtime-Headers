
@protocol PPLPeopleAppSceneRequester <NSObject>

@required

- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })initialSceneFrame;
- (NSURL *)personURL;
- (void)sceneManager:(PPLPeopleAppSceneManager *)arg1 didGrantOwnershipOfScene:(FBScene *)arg2;
- (void)sceneManager:(PPLPeopleAppSceneManager *)arg1 didRevokeOwnershipOfScene:(FBScene *)arg2;
- (void)sceneManager:(PPLPeopleAppSceneManager *)arg1 sceneDidRequestDismissal:(FBScene *)arg2;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })sceneSafeAreaInsetPortrait;

@end
