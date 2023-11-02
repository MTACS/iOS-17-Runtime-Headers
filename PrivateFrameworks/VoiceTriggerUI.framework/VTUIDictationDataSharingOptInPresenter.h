
@interface VTUIDictationDataSharingOptInPresenter : NSObject {
    OBWelcomeController * _currentWelcomeController;
    <VTUIDictationDataSharingOptInPresentationDelegate> * _presentationDelegate;
}

@property (nonatomic, retain) OBWelcomeController *currentWelcomeController;
@property (nonatomic) <VTUIDictationDataSharingOptInPresentationDelegate> *presentationDelegate;

- (void).cxx_destruct;
- (void)_learnMoreButtonTapped;
- (void)_optInButtonTapped;
- (void)_optOutButtonTapped;
- (void)_userTappedDetailLinkText;
- (id)currentWelcomeController;
- (id)dataSharingOptInAlertController;
- (id)dataSharingOptInView;
- (id)dataSharingReminderAlertController;
- (id)dictationDataSharingOptInAlertViewModel;
- (id)dictationDataSharingOptInReminderViewModel;
- (id)presentationDelegate;
- (void)setCurrentWelcomeController:(id)arg1;
- (void)setPresentationDelegate:(id)arg1;

@end
