
@interface UISearchContainerViewController : UIViewController {
    UISearchController * _searchController;
}

@property (nonatomic, retain) UISearchController *searchController;

- (void).cxx_destruct;
- (bool)_isTVSearchControllerContainer;
- (void)_prepareForContainerTransition:(id)arg1;
- (void)_presentSearchControllerIfNecessary;
- (bool)_transitionsChildViewControllers;
- (void)commonInit;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSearchController:(id)arg1;
- (id)searchController;
- (void)setSearchController:(id)arg1;
- (void)setTabBarObservedScrollView:(id)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;

@end
