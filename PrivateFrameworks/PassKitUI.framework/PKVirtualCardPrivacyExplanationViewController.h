
@interface PKVirtualCardPrivacyExplanationViewController : PKExplanationViewController <PKExplanationViewDelegate> {
    bool  _didBeginWalletProvisioningSubject;
    unsigned long long  _referralSource;
    id /* block */  _resultCallback;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) id /* block */ resultCallback;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_beginReportingIfNecessary;
- (void)_endReportingIfNecessary;
- (void)explanationViewDidSelectContinue:(id)arg1;
- (void)explanationViewDidSelectSetupLater:(id)arg1;
- (id)initWithContext:(long long)arg1 referralSource:(unsigned long long)arg2 resultCallback:(id /* block */)arg3;
- (void)loadView;
- (id /* block */)resultCallback;
- (void)setResultCallback:(id /* block */)arg1;
- (void)viewDidLoad;
- (void)viewWillDisappear:(bool)arg1;

@end
