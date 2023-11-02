
@interface UIPrintAccountInfoOption : UIPrintOption <UITextFieldDelegate> {
    UITextField * _jobAccountIDTextField;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UITextField *jobAccountIDTextField;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)canDismiss;
- (void)changeJobAccountID:(id)arg1;
- (void)dealloc;
- (id)initWithPrintInfo:(id)arg1 printPanelViewController:(id)arg2;
- (bool)isJobAccountIDRequired;
- (id)jobAccountIDTextField;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)printOptionTableViewCell;
- (void)promptForJobAccountID;
- (void)selectJobAccountID;
- (void)setJobAccountIDTextField:(id)arg1;
- (bool)shouldShow;
- (id)summary;
- (void)updateFromPrintInfo;

@end
