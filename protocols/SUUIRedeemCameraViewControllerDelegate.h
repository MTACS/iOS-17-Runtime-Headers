
@protocol SUUIRedeemCameraViewControllerDelegate <NSObject>

@optional

- (void)overrideRedeemOperationWithCode:(void *)arg1 cameraRecognized:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: NSString *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SUUIRedeem *, NSError *, void*
- (void)redeemCameraViewController:(SUUIRedeemCameraViewController *)arg1 didFinishWithRedeem:(SUUIRedeem *)arg2;

@end
