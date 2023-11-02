
@interface FBKBugFormDetailTableViewController : UITableViewController <UISearchBarDelegate, UISearchControllerDelegate, UISearchResultsUpdating> {
    FBKAnswer * _answer;
    NSSet * _checkboxAnswersAtStart;
    <FBKBugFormEditorDelegate> * _delegate;
    FBKQuestion * _question;
    UISearchController * _searchController;
    NSArray * _searchResultChoices;
    NSArray * _visibleChoices;
}

@property (nonatomic, retain) FBKAnswer *answer;
@property (nonatomic, retain) NSSet *checkboxAnswersAtStart;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <FBKBugFormEditorDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) FBKQuestion *question;
@property (nonatomic, retain) UISearchController *searchController;
@property (nonatomic, retain) NSArray *searchResultChoices;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSArray *visibleChoices;

- (void).cxx_destruct;
- (id)answer;
- (void)beginSearch;
- (bool)canBecomeFirstResponder;
- (id)checkboxAnswersAtStart;
- (void)commitSelection;
- (void)dealloc;
- (id)delegate;
- (void)didGetClientSideResolvedNotification:(id)arg1;
- (id)getPathToScrollTo;
- (id)keyCommands;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)question;
- (void)recordCheckboxAnswers;
- (bool)searchBar:(id)arg1 shouldChangeTextInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 replacementText:(id)arg3;
- (void)searchBarTextDidBeginEditing:(id)arg1;
- (void)searchBarTextDidEndEditing:(id)arg1;
- (id)searchController;
- (id)searchResultChoices;
- (void)selectNext;
- (void)selectPrevious;
- (void)setAnswer:(id)arg1;
- (void)setCheckboxAnswersAtStart:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setQuestion:(id)arg1;
- (void)setSearchController:(id)arg1;
- (void)setSearchResultChoices:(id)arg1;
- (void)setVisibleChoices:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)updateCheckboxDelegateIfNeeded;
- (void)updateChoices;
- (void)updateSearchBar;
- (void)updateSearchResultsForSearchController:(id)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (id)visibleChoices;

@end
