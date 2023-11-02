
@interface PXSharedLibraryAssistantDatePickerViewController : OBTableWelcomeController <PXAssistantViewController, PXChangeObserver, UITableViewDataSource, UITableViewDelegate> {
    NSString * _cachedFooterText;
    UITableViewCell * _countsCell;
    UIDatePicker * _datePicker;
    UITableViewCell * _datePickerCell;
    bool  _hasCustomDate;
    bool  _isShowingFullPicker;
    NSDate * _pickedDate;
    UITableViewCell * _startDateCell;
    OBBoldTrayButton * _titleButton;
    PXSharedLibraryAssistantViewModel * _viewModel;
    <PXAssistantViewControllerDelegate> * assistantViewControllerDelegate;
}

@property (nonatomic) <PXAssistantViewControllerDelegate> *assistantViewControllerDelegate;
@property (nonatomic, readonly) UIDatePicker *datePicker;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool hasCustomDate;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSDate *pickedDate;
@property (readonly) Class superclass;
@property (nonatomic, readonly) OBBoldTrayButton *titleButton;
@property (nonatomic, readonly) PXSharedLibraryAssistantViewModel *viewModel;

- (void).cxx_destruct;
- (void)_continueAssistant;
- (id)_datePickerCellForTableView:(id)arg1;
- (void)_datePickerDidChange:(id)arg1;
- (void)_resetPickerWithDate:(id)arg1;
- (id)_startDateCellForTableView:(id)arg1;
- (void)_updateFooterText;
- (void)_updateHeaderText;
- (void)_updateStartDateCell;
- (void)_updateViewModelForStartDate:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)assistantViewControllerDelegate;
- (void)continueButtonTapped:(id)arg1;
- (id)datePicker;
- (void)footerTextWithCompletion:(id /* block */)arg1;
- (bool)hasCustomDate;
- (id)initWithViewModel:(id)arg1;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (id)pickedDate;
- (void)resetPickerDate;
- (void)restorePickerDate;
- (void)setAssistantViewControllerDelegate:(id)arg1;
- (void)setHasCustomDate:(bool)arg1;
- (void)setPickedDate:(id)arg1;
- (void)skipButtonTapped:(id)arg1;
- (void)skipPickedDateAndContinue;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (id)titleButton;
- (void)truncateAndSetPickedDate:(id)arg1;
- (void)usePickedDateAndContinueWithCompletionHandler:(id /* block */)arg1;
- (void)viewDidLoad;
- (id)viewModel;

@end
