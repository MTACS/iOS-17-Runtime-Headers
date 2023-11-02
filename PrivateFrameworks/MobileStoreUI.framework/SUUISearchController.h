
@interface SUUISearchController : UISearchController {
    NSMutableString * _paddingString;
    SUUISearchBar * _searchBar;
    UILabel * _suffixLabel;
}

@property (nonatomic) <SUUISearchControllerDelegate> *delegate;
@property (nonatomic, readonly) SUUISearchBar *searchBar;

- (void).cxx_destruct;
- (void)_setSuffix:(id)arg1;
- (id)searchBar;
- (void)setActive:(bool)arg1;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;

@end
