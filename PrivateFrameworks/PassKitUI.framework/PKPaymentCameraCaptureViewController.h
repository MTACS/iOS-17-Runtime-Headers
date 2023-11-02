
@interface PKPaymentCameraCaptureViewController : UIViewController {
    UIColor * _capturedTextColor;
    <PKPaymentCameraCaptureViewControllerDelegate> * _flowItemDelegate;
    bool  _hideSetupLaterButton;
    UIColor * _maskColor;
    UIColor * _maskOutlineColor;
    UIColor * _placementTextColor;
}

@property (nonatomic, copy) UIColor *capturedTextColor;
@property (nonatomic) <PKPaymentCameraCaptureViewControllerDelegate> *flowItemDelegate;
@property (nonatomic) bool hideSetupLaterButton;
@property (nonatomic, copy) UIColor *maskColor;
@property (nonatomic, copy) UIColor *maskOutlineColor;
@property (nonatomic, copy) UIColor *placementTextColor;

- (void).cxx_destruct;
- (id)capturedTextColor;
- (id)flowItemDelegate;
- (bool)hideSetupLaterButton;
- (id)initWithProvisioningController:(id)arg1 context:(long long)arg2;
- (id)maskColor;
- (id)maskOutlineColor;
- (void)pk_applyAppearance:(id)arg1;
- (id)placementTextColor;
- (void)setCapturedTextColor:(id)arg1;
- (void)setFlowItemDelegate:(id)arg1;
- (void)setHideSetupLaterButton:(bool)arg1;
- (void)setMaskColor:(id)arg1;
- (void)setMaskOutlineColor:(id)arg1;
- (void)setPlacementTextColor:(id)arg1;

@end
