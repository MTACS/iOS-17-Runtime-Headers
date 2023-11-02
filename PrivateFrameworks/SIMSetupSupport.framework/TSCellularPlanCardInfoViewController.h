
@interface TSCellularPlanCardInfoViewController : SSUIViewController <TSSetupFlowItem, UITableViewDataSource, UITableViewDelegate, UITextFieldDelegate> {
    UITextField * _activeTextField;
    <TSSIMSetupFlowDelegate> * _delegate;
    UILabel * _enterActivationLabel;
    NSString * _fauxCardData;
    UITableView * _infoTableView;
    NSLayoutConstraint * _infoTableViewHeightConstraint;
    struct CGSize { 
        double width; 
        double height; 
    }  _keyboardSize;
    UIBarButtonItem * _nextButton;
    UIScrollView * _scrollView;
    NSArray * _tableData;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <TSSIMSetupFlowDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) UILabel *enterActivationLabel;
@property (readonly) unsigned long long hash;
@property (nonatomic) UITableView *infoTableView;
@property (nonatomic) NSLayoutConstraint *infoTableViewHeightConstraint;
@property (nonatomic) UIScrollView *scrollView;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)addNewPlanWithUserInfo:(id)arg1;
- (bool)canBeShownFromSuspendedState;
- (void)configureCell:(id)arg1 atIndexPath:(id)arg2;
- (id)delegate;
- (id)enterActivationLabel;
- (id)infoTableView;
- (id)infoTableViewHeightConstraint;
- (id)init;
- (void)keyboardWasShown:(id)arg1;
- (void)keyboardWillBeHidden:(id)arg1;
- (void)onError;
- (void)resetFirstResponder;
- (id)scrollView;
- (void)scrollViewForKeyboardIfNecessary;
- (void)setDelegate:(id)arg1;
- (void)setEnterActivationLabel:(id)arg1;
- (void)setInfoTableView:(id)arg1;
- (void)setInfoTableViewHeightConstraint:(id)arg1;
- (void)setScrollView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 replacementString:(id)arg3;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (bool)textFieldShouldReturn:(id)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end
