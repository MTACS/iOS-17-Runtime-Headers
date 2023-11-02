
@protocol CNPresenterDelegate <NSObject>

@required

- (bool)isPresentingModalViewController;
- (void)sender:(id)arg1 dismissViewController:(UIViewController *)arg2;
- (void)sender:(void *)arg1 dismissViewController:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 7: id, UIViewController *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)sender:(id)arg1 presentViewController:(UIViewController *)arg2;

@optional

- (void)sender:(id)arg1 presentViewController:(UIViewController *)arg2 modalPresentationStyle:(long long)arg3;
- (void)viewController:(UIViewController *)arg1 presentationControllerWillDismiss:(UIPresentationController *)arg2;

@end
