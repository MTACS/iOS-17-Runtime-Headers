
@interface HKClinicalAuthorizationIntroViewController : HKViewController <HKHealthPrivacyServicePromptController, UITableViewDataSource, UITableViewDelegate> {
    NSString * _buttonTitle;
    HKClinicalAuthorizationSequenceContext * _context;
    <HKHealthPrivacyServicePromptControllerDelegate> * _delegate;
    NSString * _headerTitle;
    HKClinicalAuthorizationHeaderView * _headerView;
    UIBarButtonItem * _navigationRightButton;
    UIViewController * _nextViewController;
    UITableView * _tableView;
}

@property (nonatomic, copy) NSString *buttonText;
@property (nonatomic, copy) NSString *buttonTitle;
@property (nonatomic, readonly) HKClinicalAuthorizationSequenceContext *context;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <HKHealthPrivacyServicePromptControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *headerText;
@property (nonatomic, copy) NSString *headerTitle;
@property (nonatomic, readonly) HKClinicalAuthorizationHeaderView *headerView;
@property (nonatomic, retain) UIBarButtonItem *navigationButton;
@property (nonatomic, copy) UIBarButtonItem *navigationRightButton;
@property (nonatomic, retain) UIViewController *nextViewController;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UITableView *tableView;

- (void).cxx_destruct;
- (void)_cancelButtonPressed:(id)arg1;
- (id)_cellForDetailsAtIndexPath:(id)arg1;
- (id)_cellForViewHealthRecordsAtIndexPath:(id)arg1;
- (void)_configureHeaderViewWithSource:(id)arg1;
- (void)_configureNavigationItem;
- (void)_configureTableView;
- (id)_createFooterView;
- (void)_finishWithError:(id)arg1;
- (bool)_indexPathIsValidRow:(id)arg1;
- (void)_nextButtonPressed:(id)arg1;
- (long long)_rowFromIndexPath:(id)arg1;
- (void)_updateForCurrentContentSizeCategory;
- (void)_viewHealthRecordsCellTapped:(id)arg1;
- (id)buttonText;
- (id)buttonTitle;
- (id)context;
- (id)delegate;
- (id)headerText;
- (id)headerTitle;
- (id)headerView;
- (id)init;
- (id)initWithContext:(id)arg1 viewController:(id)arg2;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)loadView;
- (id)navigationButton;
- (id)navigationRightButton;
- (id)nextViewController;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)setButtonText:(id)arg1;
- (void)setButtonTitle:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setHeaderText:(id)arg1;
- (void)setHeaderTitle:(id)arg1;
- (void)setNavigationButton:(id)arg1;
- (void)setNavigationRightButton:(id)arg1;
- (void)setNextViewController:(id)arg1;
- (id)tableView;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLoad;

@end
