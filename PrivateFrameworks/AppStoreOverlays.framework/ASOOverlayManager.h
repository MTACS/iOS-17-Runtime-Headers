
@interface ASOOverlayManager : NSObject <_UISceneComponentProviding> {
    UIScene * _scene;
    ASOOverlayViewController * _viewController;
    ASOOverlayWindow * _window;
}

@property (getter=_scene, setter=_setScene:, nonatomic) UIScene *_scene;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) ASOOverlayViewController *viewController;
@property (nonatomic, readonly, retain) ASOOverlayWindow *window;

- (void).cxx_destruct;
- (id)_scene;
- (void)_setScene:(id)arg1;
- (void)didFinishDismissingOverlay;
- (void)dismissOverlay;
- (id)initWithScene:(id)arg1;
- (id)initWithWindowScene:(id)arg1;
- (id)makeViewControllerIfNeeded;
- (void)presentOverlay:(id)arg1;
- (void)setViewController:(id)arg1;
- (id)viewController;
- (void)willStartPresentingOverlay;
- (id)window;

@end
