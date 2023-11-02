
@interface SCLHistoryDaysDataSource : SCLSpecifierDataSource

- (void)dealloc;
- (void)handleSignificantTimeChange:(id)arg1;
- (id)initWithListController:(id)arg1 viewModel:(id)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)updateHistoryGroupsWithItems:(id)arg1;

@end
