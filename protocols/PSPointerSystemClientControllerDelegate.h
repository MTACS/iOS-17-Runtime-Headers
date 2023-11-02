
@protocol PSPointerSystemClientControllerDelegate <FBSceneDelegate>

@required

- (void)pointerClientController:(PSPointerSystemClientController *)arg1 didAddScene:(FBScene *)arg2;
- (void)pointerClientController:(PSPointerSystemClientController *)arg1 sceneDidActivate:(FBScene *)arg2;
- (void)pointerClientController:(PSPointerSystemClientController *)arg1 sceneWillDeactivate:(FBScene *)arg2;
- (void)pointerClientController:(PSPointerSystemClientController *)arg1 willRemoveScene:(FBScene *)arg2;

@end
