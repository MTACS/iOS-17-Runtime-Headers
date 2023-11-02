
@protocol PKCollapsibleHeaderViewDelegate <NSObject>

@required

- (void)searchBarCancelButtonClicked;
- (void)searchBarTextDidBeginEditing;
- (void)searchBarTextDidEndEditing;
- (void)searchTextDidChangeTo:(NSString *)arg1;

@end
