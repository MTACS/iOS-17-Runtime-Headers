
@interface VTUISiriDataSharingOptInPresenter : NSObject <VTUISiriDataSharingOptInViewControllerDelegate> {
    VTUIProximityDataSharingOptInView * _currentProxView;
    VTUISiriDataSharingOptInViewController * _currentWelcomeController;
    long long  _dataSharingOptInStatus;
    <VTUISiriDataSharingOptInPresentationDelegate> * _presentationDelegate;
    NSString * _reasonForChange;
    AFSettingsConnection * _settings;
    NSObject<OS_dispatch_queue> * _settingsQueue;
    long long  _sourceOfChange;
}

@property (nonatomic) <VTUISiriDataSharingOptInPresentationDelegate> *presentationDelegate;
@property (copy) NSString *reasonForChange;
@property long long sourceOfChange;

+ (bool)siriDataSharingOptInViewFeatureFlagEnabled;

- (void).cxx_destruct;
- (void)_fetchSiriDataSharingEnabled;
- (id)_modalViewControllerForViewStyle:(long long)arg1;
- (id)_proximityViewForFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_requestDismissal;
- (void)_setSiriDataSharingStatus:(long long)arg1 forceDismissal:(bool)arg2;
- (void)_userTappedDetailLinkText;
- (void)_userTappedDismissButtonFromProxCard;
- (void)_userTappedOptInToDataSharing;
- (void)_userTappedOptOutOfDataSharing;
- (id)dataSharingOptInTextWelcomeControllerForViewStyle:(long long)arg1;
- (id)dataSharingOptInViewForFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 viewStyle:(long long)arg2;
- (void)didDismissFromViewController:(id)arg1;
- (id)init;
- (id)presentationDelegate;
- (id)reasonForChange;
- (void)setPresentationDelegate:(id)arg1;
- (void)setReasonForChange:(id)arg1;
- (void)setSourceOfChange:(long long)arg1;
- (bool)shouldShowSiriDataSharingOptInView;
- (long long)sourceOfChange;
- (void)tearDownPresentedViews;

@end
