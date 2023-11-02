
@interface HKTinkerSharingOptInController : BPSWelcomeOptinViewController {
    <HKTinkerSharingSetupDelegate> * _delegate;
    long long  _layoutStyle;
}

- (void).cxx_destruct;
- (void)_configureLayoutStyle;
- (void)_presentNetworkAccessConfirmationWithHelper:(id)arg1;
- (void)alternateButtonPressed:(id)arg1;
- (id)alternateButtonTitle;
- (void)applyConfirmedOptin:(bool)arg1;
- (id)detailString;
- (id)imageResource;
- (id)imageResourceBundleIdentifier;
- (id)initWithStyle:(long long)arg1 delegate:(id)arg2;
- (id)privacyBundles;
- (void)suggestedButtonPressed:(id)arg1;
- (id)suggestedButtonTitle;
- (id)tapToRadarMetadata;
- (id)titleString;
- (void)userDidRequestCancel;
- (void)viewDidLoad;
- (bool)wantsLightenBlendedScreen;

@end
