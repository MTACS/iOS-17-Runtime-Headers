
@interface SiriMailUI.RecipientViewController_Phone : UIViewController <CNAutocompleteResultsTableViewControllerDelegate, CNAutocompleteSearchConsumer, CNComposeRecipientTextViewDelegate, CNContactPickerDelegate> {
    void cancellables;
    void composeView;
    void composeViewHeightConstraint;
    void container;
    void currentSearchTaskID;
    void foundSearchResults;
    void resultsTableView;
    void resultsTableViewController;
    void resultsTableViewHeightConstraint;
    void searchManager;
}

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (void)autocompleteResultsController:(id)arg1 didCollapseSelectedRecipient:(id)arg2;
- (void)autocompleteResultsController:(id)arg1 didExpandSelectedRecipient:(id)arg2;
- (void)autocompleteResultsController:(id)arg1 didSelectRecipient:(id)arg2 atIndex:(long long)arg3;
- (void)composeHeaderView:(id)arg1 didChangeSize:(struct CGSize { double x1; double x2; })arg2;
- (id)composeRecipientView:(id)arg1 composeRecipientForAddress:(id)arg2;
- (void)composeRecipientView:(id)arg1 didAddRecipient:(id)arg2;
- (void)composeRecipientView:(id)arg1 didFinishEnteringAddress:(id)arg2;
- (void)composeRecipientView:(id)arg1 didRemoveRecipient:(id)arg2;
- (void)composeRecipientView:(id)arg1 textDidChange:(id)arg2;
- (void)composeRecipientViewRequestAddRecipient:(id)arg1;
- (void)consumeAutocompleteSearchResults:(id)arg1 taskID:(id)arg2;
- (void)contactPicker:(id)arg1 didSelectContact:(id)arg2;
- (void)contactPicker:(id)arg1 didSelectContactProperty:(id)arg2;
- (void)contactPickerDidCancel:(id)arg1;
- (void)finishedSearchingForAutocompleteResults;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)recipientViewDidBecomeFirstResponder:(id)arg1;
- (void)recipientViewDidResignFirstResponder:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

@end
