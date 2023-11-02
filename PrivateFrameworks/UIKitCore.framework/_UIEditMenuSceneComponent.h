
@interface _UIEditMenuSceneComponent : NSObject <_UISceneComponentProviding> {
    _UIEditMenuPresentation * _activePresentation;
    UIScene * _scene;
}

@property (getter=_scene, setter=_setScene:, nonatomic) UIScene *_scene;
@property (nonatomic, readonly) _UIEditMenuPresentation *activePresentation;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sceneComponentForView:(id)arg1;

- (void).cxx_destruct;
- (id)_scene;
- (void)_setScene:(id)arg1;
- (id)activePresentation;
- (void)dismissCurrentMenu;
- (bool)hasVisibleMenu;
- (id)initWithScene:(id)arg1;
- (void)removeActivePresentation:(id)arg1;
- (void)setActivePresentation:(id)arg1;

@end
