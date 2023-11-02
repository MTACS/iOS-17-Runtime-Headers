
@protocol PKPaymentSetupPresentationProtocol <NSObject>

@optional

- (unsigned long long)onPresentationRemoveViewControllersAfterMarker;
- (unsigned long long)paymentSetupMarker;
- (bool)paymentSetupMarkerRemovalIsInclusive;
- (void)presentWithNavigationController:(void *)arg1 animated:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 7: UINavigationController *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*

@end
