
@interface VTUIVoiceSelectionViewController : UIViewController <SUICVoiceSelectionPresenterDelegate> {
    bool  _allowsRandomSelection;
    UIBarButtonItem * _continueBarButton;
    AFVoiceInfo * _currentVoiceSelection;
    <VTUIVoiceSelectionViewControllerDelegate> * _delegate;
    VTUIStyle * _style;
    VTUIVoiceSelectionOptionsView * _voiceOptionsView;
    NSLayoutConstraint * _voiceOptionsViewHeightConstraint;
    <VTUIVoiceSelectionContaining> * _voiceSelectionContainer;
    SUICVoiceSelectionPresenter * _voiceSelectionPresenter;
    bool  shouldReportSelectionOnRandomVoicePlayBackCompletion;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) <VTUIVoiceSelectionViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_chooseForMeButtonClicked;
- (void)_continueButtonClicked;
- (void)_dismissButtonClicked;
- (void)_informDelegateVoiceWasSelected:(id)arg1 randomlySelected:(bool)arg2;
- (id)_initWithTitle:(id)arg1 detailText:(id)arg2 recognitionLanguage:(id)arg3 compact:(bool)arg4 allowsRandomSelection:(bool)arg5 forSelectionStyle:(long long)arg6 barButtonItemForContinue:(id)arg7 dataManager:(id)arg8 customVoicePreviewer:(id)arg9 delegate:(id)arg10;
- (void)_setupButtons;
- (void)_setupContentForRecognitionLanguage:(id)arg1 dataManager:(id)arg2 customVoicePreviewer:(id)arg3;
- (void)_setupWithTitle:(id)arg1 detailText:(id)arg2 allowsRandomSelection:(bool)arg3 compact:(bool)arg4 forSelectionStyle:(long long)arg5;
- (id)chooseForMeButton;
- (id)continueButton;
- (id)delegate;
- (id)initCompactWithRecognitionLanguage:(id)arg1 allowsRandomSelection:(bool)arg2 customVoicePreviewer:(id)arg3 delegate:(id)arg4;
- (id)initCompactWithRecognitionLanguage:(id)arg1 allowsRandomSelection:(bool)arg2 dataManager:(id)arg3 customVoicePreviewer:(id)arg4 delegate:(id)arg5;
- (id)initCompactWithRecognitionLanguage:(id)arg1 allowsRandomSelection:(bool)arg2 dataManager:(id)arg3 customVoicePreviewer:(id)arg4 forSelectionStyle:(long long)arg5 delegate:(id)arg6;
- (id)initWithRecognitionLanguage:(id)arg1 allowsRandomSelection:(bool)arg2 barButtonItemForContinue:(id)arg3 customVoicePreviewer:(id)arg4 delegate:(id)arg5;
- (id)initWithRecognitionLanguage:(id)arg1 allowsRandomSelection:(bool)arg2 barButtonItemForContinue:(id)arg3 dataManager:(id)arg4 customVoicePreviewer:(id)arg5 delegate:(id)arg6;
- (void)presenter:(id)arg1 didChangeVoiceSelection:(id)arg2;
- (void)setShouldHideCompactBackgroundCardView:(bool)arg1;
- (void)updateContainerConstraintsForOrientationChangeToSize:(struct CGSize { double x1; double x2; })arg1;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillLayoutSubviews;

@end
