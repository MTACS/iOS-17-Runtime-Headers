
@protocol PKPaymentAuthorizationScenePresenter <NSObject>

@required

- (void)dismissSceneAnimated:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 6: bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)dismissSecondaryViewControllerAnimated:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 6: bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)presentPrimaryViewController:(void *)arg1 animated:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 7: UIViewController *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)presentSecondaryViewController:(void *)arg1 animated:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 7: UIViewController *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (bool)supportsSecondaryViewController;

@end
