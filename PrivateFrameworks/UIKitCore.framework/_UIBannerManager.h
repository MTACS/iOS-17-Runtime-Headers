
@interface _UIBannerManager : NSObject <_UISceneComponentProviding> {
    _UIBannerContainerView * _containerView;
    _UIBannerWindow * _window;
    UIWindowScene * _windowScene;
}

@property (getter=_scene, setter=_setScene:, nonatomic) UIScene *_scene;
@property (nonatomic, retain) _UIBannerContainerView *containerView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) _UIBannerWindow *window;
@property (nonatomic, retain) UIWindowScene *windowScene;

- (void).cxx_destruct;
- (void)_createWindowIfNeeded;
- (id)_scene;
- (void)_setScene:(id)arg1;
- (id)bannerWithContent:(id)arg1;
- (id)containerView;
- (id)initWithScene:(id)arg1;
- (void)setContainerView:(id)arg1;
- (void)setWindow:(id)arg1;
- (void)setWindowScene:(id)arg1;
- (id)window;
- (id)windowScene;

@end
