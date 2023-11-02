
@interface PKAccountInvitationOnboardingViewController : PKExplanationViewController {
    PKAccountInvitationController * _controller;
    bool  _didBeginOnboardingSubject;
}

- (void).cxx_destruct;
- (void)_beginReportingIfNecessary;
- (void)_endReportingIfNecessary;
- (id)_listItemConfigWithTitle:(id)arg1 body:(id)arg2 image:(id)arg3;
- (void)_reportContinueTapped;
- (void)explanationViewDidSelectContinue:(id)arg1;
- (id)initWithController:(id)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;

@end
