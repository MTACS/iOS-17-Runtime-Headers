
@protocol SKUIRedeemCameraViewControllerDelegate <NSObject>

@optional

- (void)overrideRedeemOperationWithCode:(void *)arg1 cameraRecognized:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: NSString *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SKUIRedeem *, NSError *, void*
- (void)redeemCameraViewController:(SKUIRedeemCameraViewController *)arg1 didFinishWithRedeem:(SKUIRedeem *)arg2;

@end
