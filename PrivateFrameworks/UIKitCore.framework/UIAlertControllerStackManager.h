
@interface UIAlertControllerStackManager : NSObject <_UISceneComponentProviding> {
    NSMutableArray * _alertControllerStack;
    NSMutableArray * _hiddenAlertControllers;
    UIScene * _scene;
}

@property (getter=_scene, setter=_setScene:, nonatomic) UIScene *_scene;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_addAlertControllerToStack:(id)arg1;
- (void)_alertControllerDidAppear:(id)arg1;
- (void)_alertControllerDidDisappear:(id)arg1;
- (bool)_alertControllerShouldBeTrackedInStack:(id)arg1;
- (long long)_alertControllerStackCount;
- (void)_alertControllerWillAppear:(id)arg1;
- (void)_alertControllerWillDisappear:(id)arg1;
- (void)_didHideAlertController:(id)arg1;
- (void)_hideStackedAlertControllers;
- (void)_removeAlertControllerFromStack:(id)arg1;
- (id)_scene;
- (void)_setScene:(id)arg1;
- (void)_showHiddenStackedAlertControllers;
- (id)_topAlertControllerInStack;
- (void)_willHideAlertController:(id)arg1;
- (void)_willShowAlertController:(id)arg1;
- (id)initWithScene:(id)arg1;

@end
