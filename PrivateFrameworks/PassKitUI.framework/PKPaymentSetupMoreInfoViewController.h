
@interface PKPaymentSetupMoreInfoViewController : PKExplanationViewController <PKLoadingUIProviding> {
    bool  _didBeginReportingSubject;
    id /* block */  _dismissalHandler;
    bool  _isFinalViewController;
    NSArray * _moreInfoItems;
    PKSecureElementPass * _pass;
    long long  _reportingSource;
    <PKPaymentWebServiceTargetDeviceProtocol> * _targetDevice;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) id /* block */ dismissalHandler;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isFinalViewController;
@property (nonatomic, readonly, retain) NSArray *moreInfoItems;
@property (nonatomic, readonly, retain) PKSecureElementPass *pass;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <PKPaymentWebServiceTargetDeviceProtocol> *targetDevice;

- (void).cxx_destruct;
- (void)_alternateActionWithCompletion:(id /* block */)arg1;
- (void)_beginReportingIfNecessary;
- (id)_currentItem;
- (void)_endReportingIfNecessary;
- (void)_handleDismissal;
- (void)_handlePush;
- (bool)_isExpressEducation;
- (void)_linkTapped;
- (void)_next;
- (id)_nextItems;
- (void)_reportDoneButtonTapped;
- (void)_reportExpressModeDisable;
- (void)_reportExpressModeEnable;
- (void)_reportTurnOffExpressButtonTapped;
- (void)_reportViewDidAppear;
- (void)_reportevent:(id)arg1;
- (id)_reportingSubject;
- (struct CGSize { double x1; double x2; })_snapshotSize;
- (id /* block */)dismissalHandler;
- (unsigned long long)edgesForExtendedLayout;
- (void)explanationViewDidSelectBodyButton:(id)arg1;
- (void)explanationViewDidSelectContinue:(id)arg1;
- (void)explanationViewDidSelectSetupLater:(id)arg1;
- (id)initWithMoreInfoItems:(id)arg1 paymentPass:(id)arg2 targetDevice:(id)arg3 context:(long long)arg4 dismissalHandler:(id /* block */)arg5;
- (id)initWithMoreInfoItems:(id)arg1 paymentPass:(id)arg2 targetDevice:(id)arg3 context:(long long)arg4 dismissalHandler:(id /* block */)arg5 reportingSource:(long long)arg6;
- (bool)isFinalViewController;
- (void)loadView;
- (id)moreInfoItems;
- (id)pass;
- (long long)preferredStatusBarStyle;
- (void)setDismissalHandler:(id /* block */)arg1;
- (void)setIsFinalViewController:(bool)arg1;
- (void)showLoadingUI:(bool)arg1 animated:(bool)arg2;
- (id)targetDevice;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;

@end
