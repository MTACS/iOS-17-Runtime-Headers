
@protocol PKPaymentAuthorizationPresenter <NSObject>

@required

- (void)dismissSecondaryViewControllerAnimated:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 6: bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)dismissWithReason:(void *)arg1 error:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 7: unsigned long long, NSError *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)presentPaymentProvisioningDismissingAfterwards:(bool)arg1;
- (void)presentSecondaryViewController:(void *)arg1 animated:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 7: UIViewController *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (bool)supportsSecondaryViewController;

@end
