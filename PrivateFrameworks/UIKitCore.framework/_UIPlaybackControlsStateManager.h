
@interface _UIPlaybackControlsStateManager : NSObject <_UISceneComponentProviding> {
    NSHashTable * _controlsPresentedAssertions;
    NSHashTable * _fullscreenPlaybackAssertions;
    UIScene * _scene;
}

@property (getter=_scene, setter=_setScene:, nonatomic) UIScene *_scene;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_beginFullscreenPlaybackSession;
- (id)_beginPresentingPlaybackControls;
- (id)_scene;
- (void)_setScene:(id)arg1;
- (id)initWithScene:(id)arg1;

@end
