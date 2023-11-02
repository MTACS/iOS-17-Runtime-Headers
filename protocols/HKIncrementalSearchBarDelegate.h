
@protocol HKIncrementalSearchBarDelegate

@required

- (void)searchBarChangeSearch:(id)arg1 searchString:(NSString *)arg2;
- (void)searchBarDoneAction:(id)arg1;
- (void)searchBarDownAction:(id)arg1;
- (void)searchBarUpAction:(id)arg1;

@end
