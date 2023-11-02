
@interface CDPUICustodianAskHelpViewController : OBWelcomeController {
    CDPContext * _cdpContext;
    CDPUICustodianAskHelpViewModel * _viewModel;
}

- (void).cxx_destruct;
- (id)_buttonIdentifiersJoinedByComma;
- (id)_dontAskForHelpButtonTitle;
- (id)_getHelpNowButtonTitle;
- (void)_handleAskForHelpNowAction:(id)arg1;
- (void)_handleDontAskForHelpAction:(id)arg1;
- (id)_makeEventForAskForHelp;
- (id)_makeEventForDontAskForHelp;
- (id)_makeViewAppearedEvent;
- (id)_makeViewWillDisappearEvent;
- (id)initWithViewModel:(id)arg1 cdpContext:(id)arg2;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillDisappear:(bool)arg1;

@end
