
@interface PassKitUI.ProvisioningCameraCaptureFlowItem : NSObject <PKPaymentCameraCaptureViewControllerDelegate> {
    void context;
    void delegate;
    void identifier;
    void managingSection;
}

- (void).cxx_destruct;
- (void)cameraCaptureViewController:(id)arg1 didRecognizeObjects:(id)arg2;
- (void)cameraCaptureViewControllerDidFail:(id)arg1;
- (void)cameraCaptureViewControllerDidSelectManualEntry:(id)arg1;
- (void)cameraCaptureViewControllerDidSelectSetupLater:(id)arg1;
- (id)init;

@end
