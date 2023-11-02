
@interface ASCredentialRequestCABLEConsentViewController : ASCredentialRequestPaneViewController <UITableViewDataSource> {
    ASCAuthorizationPresentationContext * _presentationContext;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) ASCAuthorizationPresentationContext *presentationContext;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_addHeaderSpacerViewWithCustomSpacingAfter:(double)arg1;
- (void)_continueButtonPressed;
- (void)_setUpContinueButton;
- (void)_setUpIconView;
- (void)_setUpTitleView;
- (id)_titleText;
- (id)initWithPresentationContext:(id)arg1;
- (long long)numberOfTableRows;
- (id)presentationContext;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)viewDidLoad;

@end
