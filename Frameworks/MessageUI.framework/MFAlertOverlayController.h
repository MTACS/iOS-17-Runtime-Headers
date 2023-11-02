
@interface MFAlertOverlayController : NSObject {
    UIWindow * _overlayWindow;
    UIWindowScene * _scene;
}

@property (nonatomic, readonly) bool isPresentingAlert;
@property (nonatomic, retain) UIWindow *overlayWindow;
@property (nonatomic, readonly) UIWindowScene *scene;
@property (nonatomic, readonly) UIAlertController *topmostPresentedAlert;

+ (id)log;

- (void).cxx_destruct;
- (id)_bottomPresentedAlert;
- (void)_handlePresentationDismissalNotification:(id)arg1;
- (void)_setupOverlayWindowWithScene:(id)arg1;
- (void)_teardownOverlayWindow;
- (id)_topmostViewController;
- (void)dealloc;
- (id)initWithWindowScene:(id)arg1;
- (bool)isPresentingAlert;
- (id)overlayWindow;
- (void)presentAlertController:(id)arg1 animated:(bool)arg2 completion:(id /* block */)arg3;
- (id)scene;
- (void)setOverlayWindow:(id)arg1;
- (id)topmostPresentedAlert;

@end
