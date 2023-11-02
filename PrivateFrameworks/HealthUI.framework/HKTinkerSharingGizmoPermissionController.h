
@interface HKTinkerSharingGizmoPermissionController : BPSWelcomeOptinViewController {
    <HKTinkerSharingSetupDelegate> * _delegate;
    long long  _layoutStyle;
}

- (void).cxx_destruct;
- (id)_localizedFullNameForFirstName:(id)arg1 lastName:(id)arg2;
- (bool)controllerAllowsNavigatingBackFrom;
- (bool)controllerAllowsNavigatingBackTo;
- (id)detailString;
- (id)imageResource;
- (id)initWithStyle:(long long)arg1 delegate:(id)arg2;
- (void)optInDidFailWithError:(id)arg1;
- (void)optInDidSucceed;
- (void)sendOptInRequest;
- (id)suggestedButtonTitle;
- (id)tapToRadarMetadata;
- (id)titleString;
- (void)viewDidLoad;
- (bool)wantsLightenBlendedScreen;

@end
