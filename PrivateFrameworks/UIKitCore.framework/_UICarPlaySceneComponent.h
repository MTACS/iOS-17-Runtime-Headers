
@interface _UICarPlaySceneComponent : NSObject <_UISceneComponentProviding> {
    UICarPlayApplicationSceneSettings * _carPlaySceneSettings;
    UIScene * _scene;
}

@property (getter=_scene, setter=_setScene:, nonatomic) UIScene *_scene;
@property (nonatomic, retain) UICarPlayApplicationSceneSettings *carPlaySceneSettings;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool disableFiveRowKeyboards;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_scene;
- (void)_setScene:(id)arg1;
- (id)carPlaySceneSettings;
- (bool)disableFiveRowKeyboards;
- (id)initWithScene:(id)arg1;
- (void)setCarPlaySceneSettings:(id)arg1;

@end
