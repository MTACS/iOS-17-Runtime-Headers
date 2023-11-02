
@interface PXSurveyQuestionsMultipleAnswerSelectionTableViewController : UITableViewController {
    UIBarButtonItem * _cancelButton;
    id /* block */  _completionBlock;
    PXSurveyQuestionsMultipleAnswerSelectionTableViewDataSource * _dataSource;
    UIBarButtonItem * _doneButton;
}

@property (nonatomic, retain) UIBarButtonItem *cancelButton;
@property (nonatomic, copy) id /* block */ completionBlock;
@property (nonatomic, retain) PXSurveyQuestionsMultipleAnswerSelectionTableViewDataSource *dataSource;
@property (nonatomic, retain) UIBarButtonItem *doneButton;

- (void).cxx_destruct;
- (void)_handleCancel;
- (void)_handleDone;
- (void)_setupNavigationBar:(id)arg1 message:(id)arg2;
- (id)cancelButton;
- (id /* block */)completionBlock;
- (id)dataSource;
- (id)doneButton;
- (id)initWithTitle:(id)arg1 message:(id)arg2 reasons:(id)arg3 currentlySelectedReasons:(id)arg4 completion:(id /* block */)arg5;
- (void)setCancelButton:(id)arg1;
- (void)setCompletionBlock:(id /* block */)arg1;
- (void)setDataSource:(id)arg1;
- (void)setDoneButton:(id)arg1;
- (void)tableView:(id)arg1 didDeselectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)viewDidDisappear:(bool)arg1;

@end
