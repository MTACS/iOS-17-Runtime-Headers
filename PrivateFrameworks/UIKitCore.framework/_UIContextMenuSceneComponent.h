
@interface _UIContextMenuSceneComponent : NSObject <_UISceneComponentProviding> {
    NSMutableSet * _activePresentations;
    UIScene * _scene;
}

@property (getter=_scene, setter=_setScene:, nonatomic) UIScene *_scene;
@property (nonatomic, retain) NSMutableSet *activePresentations;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sceneComponentForView:(id)arg1;

- (void).cxx_destruct;
- (id)_scene;
- (void)_setScene:(id)arg1;
- (id)activePresentations;
- (void)dismissActiveMenus;
- (id)initWithScene:(id)arg1;
- (void)registerPresentation:(id)arg1;
- (void)removePresentation:(id)arg1;
- (void)setActivePresentations:(id)arg1;

@end
