
@interface CoreSuggestionsUI.SGSuggestionTableController : UIViewController <SGSuggestionViewControllerPresenter> {
    void hostingController;
    void presenterDelegate;
    void store;
    void suggestionList;
    void suggestionPresenter;
    void tableViewController;
}

- (void).cxx_destruct;
- (void)dealloc;
- (void)dismissViewController:(id)arg1;
- (void)dismissalPressed:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithStore:(id)arg1 delegate:(id)arg2 suggestionPresenter:(id)arg3 suggestionList:(id)arg4;
- (void)presentViewController:(id)arg1;
- (void)updateWithSuggestionStore:(id)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end
