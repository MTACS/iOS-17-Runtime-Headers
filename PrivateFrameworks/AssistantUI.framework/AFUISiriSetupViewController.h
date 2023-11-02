
@interface AFUISiriSetupViewController : UIViewController <UIAdaptivePresentationControllerDelegate, VTUISiriDataSharingOptInPresentationDelegate, VTUITurnOnSiriViewDelegate, VTUIVoiceSelectionViewControllerDelegate> {
    UIView * _contentView;
    VTUISiriDataSharingOptInPresenter * _dataSharingOptInPresenter;
    OBWelcomeController * _dataSharingOptInViewController;
    <AFUISiriSetupViewControllerDelegate> * _delegate;
    AFEnablementConfiguration * _enablementConfiguration;
    AFEnablementFlowConfigurationProvider * _enablementConfigurationProvider;
    bool  _isLoadingEnablementConfiguration;
    bool  _lastTimeShown;
    NSString * _selectedRecognitionLanguageCode;
    VTUITurnOnSiriView * _setupView;
    UIView * _siriSetupView;
    UIStatusBar * _statusBar;
    bool  _visible;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <AFUISiriSetupViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool lastTimeShown;
@property (nonatomic, retain) UIView *siriSetupView;
@property (getter=_statusBar, setter=_setStatusBar:, nonatomic, retain) UIStatusBar *statusBar;
@property (readonly) Class superclass;
@property (getter=isVisible, nonatomic) bool visible;

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (void)_continueTapped:(id)arg1;
- (void)_continueWithLanguageCode:(id)arg1 commitLanguageCodeToPreferences:(bool)arg2;
- (void)_fetchEnablementConfiguration;
- (void)_laterTapped:(id)arg1;
- (void)_presentDataSharingOptInViewController;
- (void)_setLoadingEnablementConfiguration:(bool)arg1;
- (void)_setStatusBar:(id)arg1;
- (id)_statusBar;
- (void)aboutSelectedInTurnOnSiriView:(id)arg1;
- (void)animatedAppearanceWithFactory:(id)arg1 completion:(id /* block */)arg2;
- (void)animatedDisappearanceWithFactory:(id)arg1 completion:(id /* block */)arg2;
- (id)delegate;
- (id)init;
- (bool)isVisible;
- (bool)lastTimeShown;
- (void)loadView;
- (void)presentationControllerDidDismiss:(id)arg1;
- (bool)presentationControllerShouldDismiss:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setLastTimeShown:(bool)arg1;
- (void)setSiriSetupView:(id)arg1;
- (void)setVisible:(bool)arg1;
- (void)siriDataSharingOptInRequestsDismissalFromPresenter:(id)arg1;
- (void)siriDataSharingOptInViewControllerDidDismissFromPresenter:(id)arg1;
- (id)siriSetupView;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;
- (void)voiceSelectionController:(id)arg1 didSelectVoice:(id)arg2;

@end
