
@protocol SBHSearchBarDelegate <NSObject>

@optional

- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })safeAreaInsetsForSearchBar:(SBHSearchBar *)arg1;
- (bool)searchBar:(SBHSearchBar *)arg1 shouldChangeTextInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 replacementText:(NSString *)arg3;
- (void)searchBar:(SBHSearchBar *)arg1 textDidChange:(NSString *)arg2;
- (void)searchBarCancelButtonClicked:(SBHSearchBar *)arg1;
- (void)searchBarDidInvalidateIntrinsicContentSize:(SBHSearchBar *)arg1;
- (bool)searchBarShouldBeginEditing:(SBHSearchBar *)arg1;
- (bool)searchBarShouldEndEditing:(SBHSearchBar *)arg1;
- (bool)searchBarShouldReturn:(SBHSearchBar *)arg1;
- (void)searchBarTextDidBeginEditing:(SBHSearchBar *)arg1;
- (void)searchBarTextDidEndEditing:(SBHSearchBar *)arg1;

@end
