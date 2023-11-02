
@interface CloudSharingUI.AddressingViewFactory : NSObject {
    void viewController;
    void viewModel;
}

@property (nonatomic, readonly) UIViewController *viewController;

- (void).cxx_destruct;
- (void)addAddressFrom:(id)arg1 contactProperty:(id)arg2;
- (id)init;
- (id)initWithHeaderImageData:(id)arg1 headerTitle:(id)arg2 loadingText:(id)arg3 supplementaryText:(id)arg4 userInfoText:(id)arg5 primaryButtonText:(id)arg6 secondaryButtonText:(id)arg7 userDidClickPrimaryButton:(id /* block */)arg8 userDidClickSecondaryButton:(id /* block */)arg9 userDidClickShowContactPicker:(id /* block */)arg10 userDidChangeAddresses:(id /* block */)arg11;
- (void)updateWithHeaderImageData:(id)arg1 headerTitle:(id)arg2 loadingText:(id)arg3 supplementaryText:(id)arg4 userInfoText:(id)arg5 primaryButtonText:(id)arg6 secondaryButtonText:(id)arg7;
- (id)viewController;

@end
