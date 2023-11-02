
@interface _UISceneHostingControllerRegistry : NSObject <_UISceneComponentProviding> {
    _UISceneHostingDiffAction * _hostingSceneDiffAction;
    UIScene * _scene;
    NSPointerArray * _weakAssociatedSceneHostingControllers;
}

@property (getter=_scene, setter=_setScene:, nonatomic) UIScene *_scene;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)componentForScene:(id)arg1;

- (void).cxx_destruct;
- (long long)_indexOfSceneHostingController:(id)arg1;
- (id)_scene;
- (void)_sceneWillInvalidate:(id)arg1;
- (void)_setScene:(id)arg1;
- (id)_settingsDiffActionsForScene:(id)arg1;
- (void)associateSceneHostingController:(id)arg1;
- (id)associatedSceneHostingControllers;
- (id)initWithScene:(id)arg1;
- (void)performOnAllHostingControllers:(id /* block */)arg1;
- (void)unassociateSceneHostingController:(id)arg1;

@end
