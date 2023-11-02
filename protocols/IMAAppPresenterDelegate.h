
@protocol IMAAppPresenterDelegate <IMAStickerTarget>

@required

- (UIViewController *)dockPresentationViewController;

@optional

- (void)appPresenterCardDidDismiss:(IMAAppPresenter *)arg1;
- (void)appPresenterDidDismissFullscreenModal:(IMAAppPresenter *)arg1;
- (void)didSelectAppWithBundleIdentifier:(NSString *)arg1;
- (void)didSelectAppWithBundleIdentifier:(NSString *)arg1 type:(NSString *)arg2;
- (void)dismissExpandedAppViewController:(void *)arg1 animated:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 7: UIViewController *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (bool)expandedAppShouldDismissOnDragSuccess;
- (struct CGSize { double x1; double x2; })expandedAppViewControllerSize;
- (void)presentExpandedAppViewController:(void *)arg1 animated:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 7: UIViewController *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*

@end
