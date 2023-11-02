
@interface TSCellularPlanConfirmationCodeViewController : SSUIViewController <TSSetupFlowItem, UITextFieldDelegate> {
    UIBarButtonItem * _cancelButton;
    NSString * _confirmationCode;
    TSCellularPlanTableViewCell * _confirmationCodeCell;
    UILabel * _confirmationCodeTitleLabel;
    <TSSIMSetupFlowDelegate> * _delegate;
    NSString * _fauxCardData;
    UITableView * _infoTableView;
    NSLayoutConstraint * _infoTableViewHeightConstraint;
    bool  _isMidOperation;
    UIBarButtonItem * _nextButton;
    long long  _userConsentResponse;
}

@property (nonatomic, readonly) NSString *confirmationCode;
@property (nonatomic) UILabel *confirmationCodeTitleLabel;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <TSSIMSetupFlowDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) UITableView *infoTableView;
@property (nonatomic) NSLayoutConstraint *infoTableViewHeightConstraint;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)canBeShownFromSuspendedState;
- (void)confirm:(id)arg1;
- (id)confirmationCode;
- (id)confirmationCodeTitleLabel;
- (id)delegate;
- (id)infoTableView;
- (id)infoTableViewHeightConstraint;
- (id)initAsMidOperation;
- (id)initWithCardData:(id)arg1;
- (void)setConfirmationCodeTitleLabel:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setInfoTableView:(id)arg1;
- (void)setInfoTableViewHeightConstraint:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 replacementString:(id)arg3;
- (bool)textFieldShouldReturn:(id)arg1;
- (void)userDidTapCancel;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillDisappear:(bool)arg1;

@end
