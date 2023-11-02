
@interface HKTinkerSharingSyncSetupController : BPSWelcomeOptinViewController {
    <HKTinkerSharingSetupDelegate> * _delegate;
    long long  _layoutStyle;
}

+ (bool)controllerNeedsToRun;

- (void).cxx_destruct;
- (id)_tinkerUserDateOfBirthComponents;
- (bool)controllerAllowsNavigatingBackFrom;
- (bool)controllerAllowsNavigatingBackTo;
- (id)detailString;
- (id)imageResource;
- (id)initWithStyle:(long long)arg1 delegate:(id)arg2;
- (void)setupDidFailWithError:(id)arg1;
- (void)setupDidSucceed;
- (void)setupSharing;
- (id)suggestedButtonTitle;
- (id)tapToRadarMetadata;
- (id)titleString;
- (void)viewDidLoad;

@end
