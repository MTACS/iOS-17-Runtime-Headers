
@protocol AFUISiriRemoteSceneViewControllerDataSource <NSObject>

@required

- (unsigned long long)lockStateForSiriRemoteViewController:(AFUISiriRemoteSceneViewController *)arg1;
- (AFBulletin *)siriRemoteViewController:(AFUISiriRemoteSceneViewController *)arg1 bulletinWithIdentifier:(NSString *)arg2;

@end
