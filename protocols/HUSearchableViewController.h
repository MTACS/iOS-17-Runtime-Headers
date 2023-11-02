
@protocol HUSearchableViewController <UITextFieldDelegate>

@required

- (UIView<HUSearchBar> *)searchBar;
- (unsigned long long)searchBarPosition;
- (void)updateForSearch;

@end
