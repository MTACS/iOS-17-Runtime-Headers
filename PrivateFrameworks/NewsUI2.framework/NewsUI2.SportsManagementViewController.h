
@interface NewsUI2.SportsManagementViewController : UIViewController <UISearchBarDelegate, UITableViewDelegate> {
    void blueprintViewController;
    void eventHandler;
    void overscrollView;
    void searchBar;
    void searchController;
    void selectionProvider;
    void styler;
}

- (void).cxx_destruct;
- (void)dismissVC;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)searchBarCancelButtonClicked:(id)arg1;
- (void)searchBarTextDidBeginEditing:(id)arg1;
- (void)searchBarTextDidEndEditing:(id)arg1;
- (bool)tableView:(id)arg1 shouldIndentWhileEditingRowAtIndexPath:(id)arg2;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillLayoutSubviews;

@end
