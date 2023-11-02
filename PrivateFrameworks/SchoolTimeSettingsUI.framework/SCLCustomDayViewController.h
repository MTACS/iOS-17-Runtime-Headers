
@interface SCLCustomDayViewController : SCLListViewController {
    <SCLCustomDayViewControllerDelegate> * _delegate;
    SCLSettingsViewModel * _viewModel;
}

@property (nonatomic) <SCLCustomDayViewControllerDelegate> *delegate;
@property (nonatomic, readonly) SCLSettingsViewModel *viewModel;

- (void).cxx_destruct;
- (id)delegate;
- (id)initWithViewModel:(id)arg1 title:(id)arg2;
- (void)loadSpecifierSource;
- (void)setDelegate:(id)arg1;
- (id)viewModel;
- (void)willMoveToParentViewController:(id)arg1;

@end
