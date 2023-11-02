
@interface PKUserNotificationAuthorizationExplanationViewController : PKExplanationViewController {
    unsigned long long  _contentTypeToDisplay;
    PKUserNotificationAuthorizationController * _controller;
    <PKPassLibraryDataProvider> * _dataProvider;
    bool  _didBeginWalletSettingsSubject;
    bool  _isPresentingNotificationAuthorizationPrompt;
    id /* block */  _nextStepHandler;
    NSString * _productType;
    NSString * _referralSource;
}

@property (nonatomic, readonly) bool isPresentingNotificationAuthorizationPrompt;
@property (nonatomic, copy) id /* block */ nextStepHandler;

- (void).cxx_destruct;
- (id)_analyticsPartialEventDictionaryWithButtonTag:(id)arg1 pageTag:(id)arg2;
- (void)_beginReportingIfNecessary;
- (void)_endReportingIfNecessary;
- (void)_reportContinueButtonTapped;
- (void)_reportNotNowButtonTapped;
- (void)_reportNotificationAuthorizationButtonTapped:(bool)arg1;
- (void)_reportNotificationPromptDidAppear;
- (void)_reportViewDidAppear;
- (void)dealloc;
- (void)explanationViewDidSelectContinue:(id)arg1;
- (void)explanationViewDidSelectSetupLater:(id)arg1;
- (id)initWithController:(id)arg1 contentType:(unsigned long long)arg2 context:(long long)arg3 dataProvider:(id)arg4;
- (id)initWithController:(id)arg1 context:(long long)arg2 dataProvider:(id)arg3;
- (bool)isPresentingNotificationAuthorizationPrompt;
- (void)loadView;
- (id /* block */)nextStepHandler;
- (void)setNextStepHandler:(id /* block */)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;

@end
