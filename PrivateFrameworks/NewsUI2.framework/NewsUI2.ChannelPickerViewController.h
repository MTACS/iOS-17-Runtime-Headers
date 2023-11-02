
@interface NewsUI2.ChannelPickerViewController : UIViewController <UISearchBarDelegate> {
    void blueprintViewController;
    void eventHandler;
    void pickerType;
    void postPurchaseOnboardingTransitionDelegate;
    void searchBar;
    void searchController;
    void searchModule;
    void selectionProvider;
    void styler;
    void useAlternateTitle;
}

- (void).cxx_destruct;
- (void)dismissVC;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)searchBarCancelButtonClicked:(id)arg1;
- (void)searchBarTextDidBeginEditing:(id)arg1;
- (void)searchBarTextDidEndEditing:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillLayoutSubviews;

@end
