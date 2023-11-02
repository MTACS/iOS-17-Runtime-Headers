
@interface TFFeedbackFormViewController : UIViewController <TFFeedbackFormPresenterView> {
    UIActivityIndicatorView * _activityIndicatorView;
    UIBarButtonItem * _activityItem;
    TFFeedbackFormPresenter * _presenter;
    UIBarButtonItem * _submitButtonItem;
    UITableView * _tableView;
    TFFeedbackFormViewDataSource * _viewDataSource;
}

@property (nonatomic, readonly) UIActivityIndicatorView *activityIndicatorView;
@property (nonatomic, readonly) UIBarButtonItem *activityItem;
@property (nonatomic, readonly) TFFeedbackFormPresenter *presenter;
@property (nonatomic, readonly) UIBarButtonItem *submitButtonItem;
@property (nonatomic, retain) UITableView *tableView;
@property (nonatomic, readonly) TFFeedbackFormViewDataSource *viewDataSource;

- (void).cxx_destruct;
- (id)activityIndicatorView;
- (id)activityItem;
- (void)adjustContentOffsetForKeyboardNotification:(id)arg1;
- (id)initWithPresenter:(id)arg1;
- (void)loadView;
- (void)prepareForEntryType:(unsigned long long)arg1;
- (id)presenter;
- (void)registerNotifications;
- (void)reloadEntriesAtIndexPaths:(id)arg1;
- (void)reloadEntryGroupsAtIndices:(id)arg1;
- (void)setNavigationItemTitle:(id)arg1;
- (void)setTableView:(id)arg1;
- (void)showErrorAlertWithTitle:(id)arg1 message:(id)arg2;
- (void)showSubmitButtonForSubmissionPendingState:(bool)arg1;
- (id)submitButtonItem;
- (void)submitButtonPressed:(id)arg1;
- (id)tableView;
- (void)traitCollectionDidChange:(id)arg1;
- (void)unregisterNotifications;
- (id)viewDataSource;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end
