
@interface DMCInstallProfileQuestionViewController : DMCProfileTableViewController {
    DMCFieldCollection * _fieldCollection;
    NSString * _previousResponseValue;
    <DMCProfileQuestionsControllerDelegate> * _questionsDelegate;
    UITextField * _textField;
    bool  _waitingForPasscodePreflight;
}

@property (nonatomic) <DMCProfileQuestionsControllerDelegate> *questionsDelegate;
@property (nonatomic, retain) UITextField *textField;

- (void).cxx_destruct;
- (void)_addActionForError:(unsigned long long)arg1 title:(id)arg2 toAlert:(id)arg3;
- (void)_cancelInput;
- (void)_configureQuestionField:(id)arg1;
- (void)_continueOrFinish;
- (void)_continueWithCurrentField;
- (void)_didFinishPasscodePreflightWithError:(id)arg1;
- (void)_didFinishPreflightWithError:(id)arg1;
- (void)_finishInput;
- (void)_handleError:(unsigned long long)arg1;
- (void)_hideProgressIndicator;
- (void)_preflightCurrentPayload;
- (void)_processResponseAndContinue;
- (void)_retryCurrentPasswordFieldWithError:(id)arg1;
- (void)_retryWithCurrentField;
- (void)_setRightButtonEnabled:(bool)arg1;
- (void)_setup;
- (void)_showAlertForError:(id)arg1;
- (void)_showNavButtonsAnimated:(bool)arg1;
- (void)_showProgressIndicator;
- (void)_tellDelegateDidFinishWithUserInputResponses:(id)arg1;
- (void)_textFieldDidChange;
- (void)_updateNavigationBar;
- (id)initWithFieldCollection:(id)arg1;
- (id)initWithStyle:(long long)arg1;
- (id)initWithUserInput:(id)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)profileConnectionDidFinishPreflightWithError:(id)arg1;
- (id)questionsDelegate;
- (void)setQuestionsDelegate:(id)arg1;
- (void)setTextField:(id)arg1;
- (void)stopWaitingForMoreInput;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)textField;
- (void)updateWithUserInput:(id)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)waitForMoreInput;

@end
