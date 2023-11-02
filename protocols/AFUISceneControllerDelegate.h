
@protocol AFUISceneControllerDelegate <NSObject>

@required

- (AFUISceneConfiguration *)sceneConfigurationForDelegate;

@optional

- (void)sceneController:(AFUISceneController *)arg1 sceneContentStateDidChange:(FBScene *)arg2;
- (void)sceneController:(AFUISceneController *)arg1 sceneDidUpdateClientSettings:(AFUISceneClientSettings *)arg2;
- (void)sceneController:(AFUISceneController *)arg1 sceneWasInvalidated:(FBScene *)arg2 forReason:(unsigned long long)arg3;
- (void)sceneController:(AFUISceneController *)arg1 willInvalidateScene:(FBScene *)arg2 forReason:(unsigned long long)arg3;

@end
